import chardet
import collections
import csv
from decimal import Decimal, InvalidOperation
import inspect
import math
import numpy as np
import os
import pandas
import sys

from loguru import logger
from item_upload.packages import barcode, amazon, price


# Fixed constants
ACCOUNT_ID = 0
MARKET_ID = 104

# Mappings for Amazon Flatfile columns
TYPE_FIELD = 'feed_product_type'
SKU_FIELD = 'item_sku'
EAN_FIELD = 'external_product_id'
NAME_FIELD = 'item_name'
PRICE_FIELD = 'standard_price'
COLOR_FIELD = 'color_name'
SIZE_FIELD = 'size_name'
PSKU_FIELD = 'parent_sku'
RELATION_FIELD = 'parent_child'
DESC_FIELD = 'product_description'
KEYWORD_FIELD = 'generic_keywords'
LENGTH_FIELD = 'package_length'
WIDTH_FIELD = 'package_width'
HEIGHT_FIELD = 'package_height'
WEIGHT_FIELD = 'package_weight'

# Mappings for the Amazon stock report list
STOCK_SKU = 'MASTER'
STOCK_FNSKU = 'fnsku'
STOCK_ASIN = 'asin'

class WrongEncodingException(Exception):
    pass


def itemUpload(flatfile, intern, stocklist, input_data, filename):
    column_names = [
        'Parent-SKU', 'SKU',
        'is_parent',
        'Length', 'Width',
        'Height', 'Weight',
        'Name', 'Attributes', 'Position',
        'ItemTextKeywords',
        'ItemTextName', 'ItemTextName3', 'ItemTextDescription',
        'ExternalID', 'Category-IDs',
        'Standard-Category', 'Standard-Category-Webshop',
        'EAN_Barcode', 'FNSKU_Barcode',
        'marketid', 'accountid',
        'amazon_sku', 'amazon_parentsku',
        'amazon-producttype',
        'price', 'ASIN-countrycode', 'ASIN-type', 'ASIN-value'
    ]

    data = dict()
    package_properties = dict()
    color_size_sets = dict()
    barcode_data = dict()
    sorted_data = collections.OrderedDict()
    group_parent = ''
    position = 0
    item_price = 0
    is_parent = False

    color_size_sets = findSimilarAttr(flatfile, [SIZE_FIELD])
    standard_cat = get_standard_category(cat=input_data['categories'])

    df = pandas.read_csv(flatfile['path'], encoding=flatfile['encoding'],
                         sep=';', dtype=str, na_values='')
    stock = pandas.read_csv(stocklist['path'],
                                encoding=stocklist['encoding'],
                                sep=';', dtype=str, na_values='')

    result_df = pandas.DataFrame(columns=column_names)

    target_keys = [
        'SKU', 'Parent-SKU', 'Length', 'Width', 'Height',
         'Weight', 'Name', 'ItemTextDescription', 'EAN_Barcode',
         'ItemTextKeywords', 'amazon_sku', 'amazon_parentsku', 'price'
    ]
    source_keys = [
        SKU_FIELD, PSKU_FIELD, LENGTH_FIELD, WIDTH_FIELD, HEIGHT_FIELD,
         WEIGHT_FIELD, NAME_FIELD, DESC_FIELD, EAN_FIELD,
         KEYWORD_FIELD, SKU_FIELD, PSKU_FIELD, PRICE_FIELD
    ]
    key_combi = zip(source_keys,target_keys)
    for s_key, t_key in key_combi:
        result_df[t_key] = df[s_key]

    result_df['is_parent'] = df[RELATION_FIELD].apply(
        lambda x: False if x == 'child' else True)


    result_df['Attributes'] = df.apply(
        lambda x: getAttributes(parent=x[PSKU_FIELD], color=x[COLOR_FIELD],
                                size=x[SIZE_FIELD], sets=color_size_sets),
        axis=1)

    missing_keywords = np.where(result_df['ItemTextKeywords'] == '',
                                result_df['SKU'], 'N')
    missing_keywords = missing_keywords[~(missing_keywords == 'N')]
    if missing_keywords:
        logger.warning("The following SKUs do not have keywords:\n"
                       f"{missing_keywords}")


    result_df['ItemTextName'] = input_data['name']
    result_df['ItemTextName3'] = input_data['webshopname']
    result_df['ExternalID'] = fetch_external_identifier_numbers(
        data=result_df['SKU'], numberlist=intern)
    result_df['Category-IDs'] = input_data['categories']
    result_df['Standard-Category'] = standard_cat
    result_df['Standard-Category-Webshop'] = standard_cat
    result_df['amazon-producttype'] = df[TYPE_FIELD].apply(
        lambda x: get_producttype_id(product_type=x))
    result_df['ASIN-countrycode'] = '0'
    result_df['ASIN-type'] = 'ASIN'
    result_df['ASIN-value'] = result_df['SKU'].apply(
        lambda x: get_asin(sku=x, source=stock))
    result_df['FNSKU_Barcode'] = result_df['SKU'].apply(
        lambda x: get_fnsku(sku=x, source=stock))
    result_df['marketid'] = MARKET_ID
    result_df['accountid'] = ACCOUNT_ID


    # Assign prices to the parent rows
    new_index = []
    position = []
    parent = df[df[RELATION_FIELD] == 'parent']
    for parent_entry in parent.itertuples():
        parent_sku = getattr(parent_entry, SKU_FIELD)
        childs = df[PSKU_FIELD] == parent_sku
        any_price = df[childs][PRICE_FIELD].max()
        result_df.loc[parent_entry.Index, 'price'] = any_price
        # Adjust the postions
        new_index.append(parent_entry.Index)
        new_index += df[childs].index.tolist()
        position.append(0)
        position += [i+1 for i, a in enumerate(df[childs].index.tolist())]

    result_df = result_df.reindex(new_index)
    result_df.reset_index(inplace=True, drop=True)
    result_df['Position'] = position

    result_df.to_csv(filename, sep=';', index=False)
    logger.info(f"Upload file successfully created under {filename}.")


def itemPropertyUpload(flatfile, folder, filename):

    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=';', lineterminator='\n')

        # define the names of the property fields within the flatfile
        property_names = ['bullet_point1', 'bullet_point2',
                          'bullet_point3', 'bullet_point4',
                          'bullet_point5', 'fit_type',
                          'lifestyle', 'batteries_required',
                          'supplier_declared_dg_hz_regulation1',
                          'department_name', 'variation_theme',
                          'seasons', 'material_composition',
                          'outer_material_type', 'collar_style',
                          'neck_size', 'pattern_type',
                          'sleeve_type', 'installation_type',
                          'finish_type', 'seasons1', 'paint_type1',
                          'theme']

        # Assign the Plentymarkets property ID to the property_names
        property_id = dict()

        use_names = []
        id_values = ['15', '16',
                     '17', '24',
                     '19', '20',
                     '9', '10',
                     '14',
                     '13', '12',
                     '11', '8',
                     '7', '25',
                     '26', '28',
                     '29', '45',
                     '46', '47',
                     '48', '49']
        property_id = dict(zip(property_names, id_values))

        properties = dict()

        for row in reader:
            if row[RELATION_FIELD] == 'parent':
                use_names =\
                    [i for i in property_names if i in list(row.keys())]
                values = [row[i] for i in use_names]

                # Check for empty values
                properties[row[SKU_FIELD]] = dict(zip(use_names, values))

    column_names = ['SKU', 'ID-property', 'Value', 'Lang', 'Active']
    data = {}
    for row in properties:
        for prop in use_names:
            try:
                values = [row, property_id[prop],
                          properties[row][prop], 'DE', 1]

                data[row + prop] = dict(zip(column_names, values))
            except KeyError as kerr:
                logger.error("Key was not found in the flatfile")


    barcode.writeCSV(data, "Item_Merkmale", column_names, folder, filename)


def getAttributes(parent: str, color: str, size: str, sets: dict) -> str:
    """
        Parameter:
            dataset [Dictionary] => row of the flatfile as dictionary
            sets [Dictionary] => attribute sets mapped to parent sku's by
                                 "findSimilarAttr()"

        Description:
            Build the attribute string of the color and size
            Elastic Sync upload format:
                {attr. name}:{value};{attr.2 name}:{value}

        Return:
            output_string
    """
    if isinstance(parent, float) and math.isnan(parent):
        return ''

    output_string = ''
    try:
        if parent in list(sets.keys()):
            output_string = 'color_name:' + color
        else:
            print("{0} not found in {1}"
                  .format(parent, ','.join(list(sets.keys()))))
    except Exception as err:
        logger.error("Adding color attribute failed")
    try:
        if len(sets[parent][SIZE_FIELD]) > 1:
            if not output_string:
                output_string = 'size_name:' + size
            else:
                output_string = output_string + ';size_name:' + size
    except Exception as err:
        logger.error(f"Adding of size attribute failed, error: {err}")
    return output_string


def get_producttype_id(product_type: str) -> str:
    """
        Parameter:
            product_type    [str]   -   product type value for a given row

        Description:
            Search for a matching term in mapping list of valid
            amazon producttype names and their ID.

        Return:
            [str]
            value from type_id on success
            empty string on failure
    """
    type_id = {
        'accessory': '28',
        'shirt': '13',
        'pants': '15',
        'dress': '18',
        'outerwear': '21',
        'bag': '27',
        'furnitureanddecor': '4',
        'bedandbath': '3',
        'skirt': '123',
        'swimwear': '30'
    }

    if not product_type:
        return ''

    if product_type in type_id.keys():
        return type_id[product_type]
    else:
        return ''


def get_asin(sku: str, source: pandas.DataFrame) -> str:
    sku_match = source[STOCK_SKU] == sku
    entry = source[sku_match]
    if len(entry.index) == 0:
        return ''
    return entry[STOCK_ASIN].tolist()[0]


def get_fnsku(sku: str, source: pandas.DataFrame) -> str:
    sku_match = source[STOCK_SKU] == sku
    entry = source[sku_match]
    if len(entry.index) == 0:
        return ''
    return entry[STOCK_FNSKU].tolist()[0]


def findSimilarAttr(flatfile, attribute):
    """
        Parameter:
            flatfile [Dictionary] => Dictionary with a path and a
                                     encoding string
            attribute [List of Strings] => Names of the columns in the flatfile

        Description:
            Detect the amount different elements of a attribute within a
            group of variations of the same parent variation.

        Return:
            data => Dictionary of parent sku's mapped to
                    sets of different values
    """

    data = {}

    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=";")

        for row in reader:
            p_sku = row[PSKU_FIELD]
            if p_sku and p_sku not in data.keys():
                data[p_sku] = dict()
                for attr in attribute:
                    data[p_sku][attr] = set()
            if row[RELATION_FIELD] == 'child':
                for attr in attribute:
                    data[p_sku][attr].add(row[attr])
    return data

def checkFlatfile(flatfile):
    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=';')

        first_row = [*list(reader)[0]]
        if len(first_row) == 1:
            logger.error("False delimiter detected")
            return False

        if not TYPE_FIELD in first_row:
            if 'Marke' in first_row:
                logger.error("Remove the first 2 rows of the amazon flatfile")
                return False
            logger.error("Wrong header line")
            return False
        return True

def checkEncoding(file_dict):
    with open(file_dict['path'], mode='rb') as item:
        try:
            raw_data = item.read()
        except Exception as err:
            print("ERROR: {0}\n".format(err))
            logger.error("check Encoding reading failed")
        file_dict['encoding'] = chardet.detect(raw_data)['encoding']

    return file_dict

def get_externalid(sku: str, source: pandas.DataFrame) -> str:
    sku_match = source['amazon_sku'] == sku
    entry = source[sku_match]
    if len(entry.index) == 0:
        return ''
    if source[sku_match].shape[0] > 1:
        logger.warning(f"multiple entries: {key} in intern numbers")
    return source[sku_match]['full_number'].tolist()[0]


def fetch_external_identifier_numbers(data: pandas.Series,
                                      numberlist: dict) -> pandas.Series:
    """
    Open the xlsx file and retrieve the full_number field for every
    amazon_sku field that matches to a variation within the dataset

    Parameter:
        data        [pandas Series] => List of SKUs to find
        numberlist  [Dictionary]    => dictionary containing path and
                                    encoding of the intern number list
                                    with the external id and sku

    Return:
                    [pandas Series] => List of additional identifier numbers
    """
    if not numberlist:
        logger.warning("No intern number list given, skip external id")
        return pandas.Series()

    try:
        extern_id = pandas.read_excel(numberlist)
    except Exception as err:
        logger.error(f"Error reading intern number list {err} @ {numberlist}")
        sys.exit(1)

    if extern_id.empty:
        logger.warning("Internumber list is empty, skip extern_ids")
        return pandas.Series()

    extern_numbers = data.apply(
        lambda x: get_externalid(sku=x, source=extern_id))
    return extern_numbers


def get_standard_category(cat):
    """
        Parameter:
            cat [String] => String representation of category ids
                            separated by ','

        Description:
            Get the first entry from a list of category ids, with a maximum
            length of 3 digits.

        Return:
            [INT] integer representation of the category ID
    """
    if not cat:
        return 0
    value = cat[0:3].strip(',')
    try:
        cat_id = int(value)
    except ValueError:
        return 0

    return cat_id
