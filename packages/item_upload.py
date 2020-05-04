import csv
import sys
import collections
import inspect
import os
import chardet
import pandas
import xlrd
from packages import barcode, amazon, price, error


class WrongEncodingException(Exception):
    pass


def itemUpload(flatfile, intern, stocklist, folder, input_data, filename):
    column_names = ['Parent-SKU', 'SKU',
                    'is_parent',
                    'Length', 'Width',
                    'Height', 'Weight',
                    'Name', 'Attributes', 'Position',
                    'ItemTextKeywords',
                    'ItemTextName', 'ItemTextDescription',
                    'ExternalID', 'Category-IDs',
                    'Standard-Category', 'Standard-Category-Webshop',
                    'EAN_Barcode', 'FNSKU_Barcode',
                    'marketid', 'accountid',
                    'amazon_sku', 'amazon_parentsku',
                    'amazon-producttype',
                    'price', 'ASIN-countrycode', 'ASIN-type', 'ASIN-value',
                    'Item-Flag-1'
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

    color_size_sets = findSimilarAttr(flatfile, ['size_name'])

    package_properties = get_properties(flatfile)

    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=";")

        for row in reader:
            keywords = ''
            if row['generic_keywords']:
                keywords = row['generic_keywords']

            if not keywords:
                try:
                    raise barcode.EmptyFieldWarning('generic_keywords')
                except Exception:
                    error.warnPrint(
                        msg="Generic Keywords are empty!", err='',
                        linenumber=inspect.currentframe().f_back.f_lineno)

            item_price = row['standard_price']
            if not item_price and row['parent_child'] == 'parent':
                item_price = price.find_price(flatfile, row['item_sku'])
                if item_price == -1:
                    if os.name == 'nt':
                        print("press ENTER to continue..")
                        input()
                    sys.exit(1)
            if item_price == '':
                error.warnPrint(
                    msg=str(f"{row['item_sku']},has no price"), err='',
                    linenumber=inspect.currentframe().f_back.f_lineno)


            try:
                attributes = ''
                if row['parent_child'] == 'parent':
                    is_parent = True
                    group_parent = row['item_sku']
                    position = 0
                if row['parent_child'] == 'child':
                    is_parent = False
                    attributes = getAttributes(dataset=row,
                                                sets=color_size_sets)
                    if(group_parent and row['parent_sku'] == group_parent):
                        position += 1
            except Exception as err:
                error.warnPrint(msg="Attribute setting failed", err=err,
                                linenumber=sys.exc_info()[2].tb_lineno)

            standard_cat = get_standard_category(cat=input_data['categories'])
            if not standard_cat:
                msg = "Standard category not set "
                msg += str(f"from [{input_data['categories']}]")
                error.warnPrint(
                    msg=msg, err=err,
                    linenumber=inspect.currentframe().f_back.f_lineno)

            try:
                values = [
                    row['parent_sku'], row['item_sku'],
                    is_parent,
                    package_properties['length'] * 10,
                    package_properties['width'] * 10,
                    package_properties['height'] * 10,
                    package_properties['weight'],
                    row['item_name'],
                    attributes, position,
                    keywords,
                    input_data['name'], row['product_description'],
                    '',  # externalID
                    input_data['categories'],
                    standard_cat, standard_cat,
                    '', '',   # barcode
                    '', '',   # market & accout id amazonsku
                    '', '',   # sku & parentsku amazonsku
                    amazon.get_producttype_id(source=flatfile,
                                                sku=row['item_sku']),
                    item_price, # prices
                    '', '', '', #asin
                    input_data['marking']
                ]

            except KeyError as kerr:
                error.warnPrint(
                    msg='column name not found in flatfile',
                    err=kerr,
                    linenumber=inspect.currentframe().f_back.f_lineno)
                raise KeyError
            except Exception as err:
                error.errorPrint(msg="setting values failed", err=err,
                                    linenumber=sys.exc_info()[2].tb_lineno)

            data[row['item_sku']] =\
                collections.OrderedDict(zip(column_names, values))

            get_externalid(dataset=data, numberlist=intern)

            barcode_data = barcode.barcode_Upload(flatfile, stocklist)

            for row in barcode_data:
                try:
                    if row in list(data.keys()):
                        data[row]['EAN_Barcode'] = barcode_data[row]['EAN_Barcode']
                        data[row]['FNSKU_Barcode'] = barcode_data[row]['FNSKU_Barcode']
                        data[row]['ASIN-countrycode'] = barcode_data[row]['ASIN-countrycode']
                        data[row]['ASIN-type'] = barcode_data[row]['ASIN-type']
                        data[row]['ASIN-value'] = barcode_data[row]['ASIN-value']
                except Exception as err:
                    error.errorPrint(
                        msg=str(f"Barcode part for {row}"), err=err,
                        linenumber=sys.exc_info()[2].tb_lineno)

            sku_data = amazon.amazonSkuUpload(flatfile)

            for row in sku_data:
                try:
                    if row in list(data.keys()):
                        data[row]['marketid'] = sku_data[row]['MarketID']
                        data[row]['accountid'] = sku_data[row]['MarketAccountID']
                        data[row]['amazon_sku'] = sku_data[row]['SKU']
                        data[row]['amazon_parentsku'] = sku_data[row]['ParentSKU']
                except Exception as err:
                    error.errorPrint(
                        msg=str(f"SKU part for {row}"), err=err,
                        linenumber=sys.exc_info()[2].tb_lineno)

        sorted_data = sortProducts(data)

        barcode.writeCSV(sorted_data, "item", column_names, folder, filename)

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
            if row['parent_child'] == 'parent':
                use_names =\
                    [i for i in property_names if i in list(row.keys())]
                values = [row[i] for i in use_names]

                # Check for empty values
                properties[row['item_sku']] = dict(zip(use_names, values))

    column_names = ['SKU', 'ID-property', 'Value', 'Lang', 'Active']
    data = {}
    for row in properties:
        for prop in use_names:
            try:
                values = [row, property_id[prop],
                          properties[row][prop], 'DE', 1]

                data[row + prop] = dict(zip(column_names, values))
            except KeyError as kerr:
                error.errorPrint(
                    msg="Key was not found in the flatfile", err=kerr,
                    linenumber=sys.exc_info()[2].tb_lineno)


    barcode.writeCSV(data, "Item_Merkmale", column_names, folder, filename)

def get_properties(flatfile):

    properties = {'length':0,
                  'width':0,
                  'height':0,
                  'weight':0,
                  }

    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=";")

        # Get the package properties from one of the childs or parent
        for row in reader:
            try:
                try:
                    if(row['package_height'] and row['package_length'] and
                       row['package_width'] and row['package_weight'] and
                       not properties['height']):

                        properties['height'] = int(row['package_height'])
                        properties['length'] = int(row['package_length'])
                        properties['width'] = int(row['package_width'])
                        properties['weight'] = int(row['package_weight'])
                    elif properties['height']:
                        break

                # if the number is a floating point number it has to be
                # transformed into a float first befor the integer conversion
                except ValueError as err:
                    properties['height'] = int(float(row['package_height']))
                    properties['length'] = int(float(row['package_length']))
                    properties['width'] = int(float(row['package_width']))
                    properties['weight'] = int(float(row['package_weight']))
            except ValueError as err:
                error.errorPrint(
                    msg="Parent has no package measurements", err=err,
                    linenumber=sys.exc_info()[2].tb_lineno)
                sys.exit()
            except KeyError as err:
                msg = str(f"get_properties key: {err} not found")
                error.errorPrint(msg=msg, err='',
                                 linenumber=sys.exc_info()[2].tb_lineno)

        return properties

def getAttributes(dataset, sets):
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

    output_string = ''
    try:
        if dataset['parent_sku'] in list(sets.keys()):
            output_string = 'color_name:' + dataset['color_name']
        else:
            print("{0} not found in {1}"
                  .format(dataset['parent_sku'], ','.join(list(sets.keys()))))
    except Exception as err:
        error.errorPrint(
            msg="Adding color attribute failed", err=err,
            linenumber=sys.exc_info()[2].tb_lineno)
    try:
        if len(sets[dataset['parent_sku']]['size_name']) > 1:
            if not output_string:
                output_string = 'size_name:' + dataset['size_name']
            else:
                output_string = output_string + ';size_name:' + dataset['size_name']
    except Exception as err:
        error.errorPrint(
            msg="Adding of size attribute failed", err=err,
            linenumber=sys.exc_info()[2].tb_lineno)
    return output_string

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
            p_sku = row['parent_sku']
            if p_sku and p_sku not in data.keys():
                data[p_sku] = dict()
                for attr in attribute:
                    data[p_sku][attr] = set()
            if row['parent_child'] == 'child':
                for attr in attribute:
                    data[p_sku][attr].add(row[attr])
    return data

def sortProducts(dataset):
    item_list = dataset.items()
    new_dict = collections.OrderedDict()
    # parent_dict = collections.OrderedDict()
    child_dict = collections.OrderedDict()

    # Go through the items of the dataset
    for item in item_list:
        if not item[0] in list(new_dict.keys()):
            if item[1]['is_parent']:
                # add the parent to the new dict
                new_dict[item[0]] = item[1]
                # get all the children and update the itemlist without them
                child_dict = searchChild(item_list=item_list, parent=item[0])
                # add each child to the new dict after the parent
                for child in child_dict:
                    new_dict[child] = child_dict[child]

    return new_dict

def searchChild(item_list, parent):
    child_dict = collections.OrderedDict()

    for item in item_list:
        if item[1]['Parent-SKU'] == parent:
            child_dict[item[0]] = item[1]

    return child_dict

def checkFlatfile(flatfile):
    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=';')

        first_row = [*list(reader)[0]]
        if len(first_row) == 1:
            error.errorPrint(
                msg='False delimiter detected',
                err="Wrong delimiter, use ';'",
                linenumber=inspect.currentframe().f_back.f_lineno)
            return False

        if not 'feed_product_type' in first_row:
            if 'Marke' in first_row:
                error.errorPrint(
                    msg="Remove the first 2 rows of the amazon flatfile",
                    err='',
                    linenumber=inspect.currentframe().f_back.f_lineno)
                return False
            error.errorPrint(
                msg="Wrong header line", err='',
                linenumber=inspect.currentframe().f_back.f_lineno)
            return False
        return True

def checkEncoding(file_dict):
    with open(file_dict['path'], mode='rb') as item:
        try:
            raw_data = item.read()
        except Exception as err:
            print("ERROR: {0}\n".format(err))
            error.errorPrint(
                msg="check Encoding reading failed", err=err,
                linenumber=sys.exc_info()[2].tb_lineno)
        file_dict['encoding'] = chardet.detect(raw_data)['encoding']
        print("chardet data for {0}\n{1}\n"
              .format(file_dict['path'], chardet.detect(raw_data)))

    return file_dict

def get_variation_id(exportfile, sku):
    """
        Parameter:
            exportfile [String] => Url of the plentymarkets export
                                   from the config
            sku [String] => Sku from the flatfile for matching

        Description:
            Check if the export has the correct header and retrieve
            the Variation ID of the matching SKU

        Return:
            [String] => The variation number
            0 => Failed to retrieve value
    """
    exp = pandas.read_csv(exportfile,
                          sep=';')

    if len(exp.index) == 0:
        error.warnPrint(
            msg='exp is empty, skip variation ID', err='',
            linenumber=inspect.currentframe().f_back.f_lineno)
        return 0

    if(len(exp.columns[exp.columns.str.contains(pat='Variation.id')]) == 0 or
       len(exp.columns[exp.columns.str.contains(pat='Variation.number')]) == 0):
        error.warnPrint(
            msg="Exportfile requires fields 'Variation.id'&'Variation.number'",
            err='', linenumber=inspect.currentframe().f_back.f_lineno)
        return 0

    variation = exp[exp['Variation.number'] == sku]
    if len(variation.index) == 0:
        error.warnPrint(
            msg=str(f"{sku} not found in Plentymarkets export"),
            err='', linenumber=inspect.currentframe().f_back.f_lineno)
        return 0

    return variation['Variation.id'].values.max()

def get_externalid(dataset, numberlist):
    """
        Parameter:
            dataset [Ordered Dict] => data set for the item upload
            numberlist [Dictionary] => dictionary containing path and encoding
                                       of the intern number list
                                       with the external id and sku

        Description:
            Open the xlsx file and retrieve the full_number field for every
            amazon_sku field that matches to a variation within the dataset
    """
    if not numberlist:
        error.warnPrint(
            msg='No intern number list given, skip external id', err='',
            linenumber=inspect.currentframe().f_back.f_lineno)
        return

    try:
        extern_id = pandas.read_excel(numberlist)
    except xlrd.biffh.XLRDError as err:
        error.errorPrint(
            msg=str(f"..{numberlist[-30:]} requires type [.xlsx]"),
            err=err, linenumber=sys.exc_info()[2].tb_lineno)
        if os.name == 'nt':
            print("press ENTER to continue..")
            input()
        sys.exit(1)

    if extern_id.empty:
        error.warnPrint(
            msg='Internumber list is empty, skip extern_ids', err='',
            linenumber=inspect.currentframe().f_back.f_lineno)

    for key in dataset.keys():
        if extern_id[extern_id['amazon_sku'] == key].shape[0] > 1:
            error.warnPrint(
                msg=str(f"multiple entries: {key} in intern numbers"),
                err='', linenumber=inspect.currentframe().f_back.f_lineno)
        exid = extern_id[extern_id['amazon_sku'] == key]['full_number']
        if len(exid.index) == 0:
            error.warnPrint(
                msg=str(f"{key} was not found in intern number list"),
                err='', linenumber=inspect.currentframe().f_back.f_lineno)
        dataset[key]['ExternalID'] = exid.values.max()


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
