import csv
import sys
import re
import collections
import inspect
import chardet
import colorama
from packages import barcode, amazon_data_upload, price_upload


class WrongEncodingException(Exception):
    pass

try:
    def errorPrint(msg, err, linenumber):
        print(colorama.Fore.LIGHTRED_EX)
        if err:
            print("ERROR:\nline:{0}\t{1}\tError:{2}"
                  .format(linenumber, msg, err))
        else:
            print("ERROR:\nline:{0}\t{1}"
                  .format(linenumber, msg))
        print(colorama.Style.RESET_ALL)
except AttributeError:
    def errorPrint(msg, err, linenumber):
        if err:
            print("ERROR:\nline:{0}\t{1}\tError:{2}"
                  .format(linenumber, msg, err))
        else:
            print("ERROR:\nline:{0}\t{1}"
                  .format(linenumber, msg))

try:
    def warnPrint(msg, err, linenumber):
        print(colorama.Fore.YELLOW)
        if err:
            print("WARNING:\nline:{0}\t{1}\tWarning:{2}"
                  .format(linenumber, msg, err))
        else:
            print("WARNING:\nline:{0}\t{1}"
                  .format(linenumber, msg))
        print(colorama.Style.RESET_ALL)
except AttributeError:
    def warnPrint(msg, linenumber, err=''):
        if err:
            print("WARNING:\nline:{0}\t{1}\tWarning:{2}"
                  .format(linenumber, msg, err))
        else:
            print("WARNING:\nline:{0}\t{1}"
                  .format(linenumber, msg))


def itemUpload(flatfile, intern, stocklist, folder, input_data, filename):
    column_names = ['Parent-SKU', 'SKU',
                    'is_parent',
                    'Length', 'Width',
                    'Height', 'Weight',
                    'Name', 'MainWarehouse',
                    'Attributes', 'Position',
                    'ItemOriginCountry', 'ItemTextKeywords',
                    'ItemProducer', 'ItemProducerID',
                    'ItemTextName', 'ItemTextDescription',
                    'ExternalID',
                    'NetStockPositivVis', 'NetStockNegativInvis',
                    'VariationAvailability', 'Category-IDs',
                    'Standard-Category', 'Standard-Category-Webshop',
                    'Mandant-Active', 'Webshop-Active',
                    'EAN_Barcode', 'FNSKU_Barcode',
                    'market-active-shop', 'market-active-ebay',
                    'market-active-ebayger', 'market-active-amafba',
                    'market-active-amafbager', 'marketid', 'accountid',
                    'amazon_sku', 'amazon_parentsku',
                    'amazon-producttype', 'fba-enabled', 'fba-shipping',
                    'price-price', 'ebay-price', 'amazon-price',
                    'webshop-price', 'etsy-price', 'cdiscount-price',
                    'ASIN-countrycode', 'ASIN-type', 'ASIN-value',
                    'Item-Flag-1'
                    ]

    data = dict()
    sorted_data = collections.OrderedDict()
    package_properties = {}
    barcode_data = {}
    is_parent = False
    position = 0

    # Get sets of all colors and sizes for each parent
    # to find if there are some with only one attribute value for all childs
    color_size_sets = {}
    color_size_sets = findSimilarAttr(flatfile)

    package_properties = getProperties(flatfile)
    group_parent = ''

    try:
        with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
            reader = csv.DictReader(item, delimiter=";")

            for row in reader:
                try:
                    keywords = ''
                    if row['generic_keywords']:
                        keywords = row['generic_keywords']

                    if not keywords:
                        try:
                            raise barcode.EmptyFieldWarning('generic_keywords')
                        except Exception:
                            warnPrint("Generic Keywords are empty!",
                                      inspect.currentframe().f_back.f_lineno)

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
                        warnPrint("Attribute setting failed",
                                  sys.exc_info()[2].tb_lineno, err)
                    try:
                        values = [
                            row['parent_sku'], row['item_sku'],
                            is_parent,
                            package_properties['length'] * 10,
                            package_properties['width'] * 10,
                            package_properties['height'] * 10,
                            package_properties['weight'],
                            row['item_name'], '104',
                            attributes, position,
                            '62', keywords,
                            row['brand_name'].upper(), '3',
                            input_data['name'], row['product_description'],
                            '',  # externalID
                            '1', '1', # NetStock pos = Vis & neg = Invis
                            '2', input_data['categories'],
                            input_data['categories'][0:3], input_data['categories'][0:3],
                            'Y', 'Y', # mandant
                            '', '',   # barcode
                            'Y', 'Y', # marketconnection
                            'Y', 'Y', # marketconnection
                            'Y', # marketconnection
                            '', '',   # market & accout id amazonsku
                            '', '',   # sku & parentsku amazonsku
                            '', '', '', # producttype & fba amazon
                            '', '', '', '', '', '', # prices
                            '', '', '', #asin
                            input_data['marking']
                        ]

                    except KeyError as kerr:
                        warnPrint('itemUpload: key not found in flatfile',
                                  inspect.currentframe().f_back.f_lineno,
                                  err=kerr)
                        raise KeyError
                    except Exception as err:
                        errorPrint("itemUpload: setting values failed", err,
                                   sys.exc_info()[2].tb_lineno)
                    data[row['item_sku']] = collections.OrderedDict(zip(column_names, values))
                except KeyError as err:
                    errorPrint("Reading file failed", err,
                               sys.exc_info()[2].tb_lineno)
                    return row['item_sku']

            # open the intern number csv to get the item ID
            with open(intern['path'], mode='r', encoding=intern['encoding']) as item:
                reader = csv.DictReader(item, delimiter=";")
                for row in reader:
                    try:
                        if row['amazon_sku'] in list(data.keys()):
                            data[row['amazon_sku']]['ExternalID'] = row['full_number']
                    except KeyError as keyerr:
                        warnPrint("key was not found in intern number list",
                                  sys.exc_info()[2].tb_lineno, keyerr)

            # Include the barcodes & asin
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
                    errorPrint("Barcode part for "+row, err,
                               sys.exc_info()[2].tb_lineno)

            # Include the amazonsku
            sku_data = amazon_data_upload.amazonSkuUpload(flatfile)

            for row in sku_data:
                try:
                    if row in list(data.keys()):
                        data[row]['marketid'] = sku_data[row]['MarketID']
                        data[row]['accountid'] = sku_data[row]['MarketAccountID']
                        data[row]['amazon_sku'] = sku_data[row]['SKU']
                        data[row]['amazon_parentsku'] = sku_data[row]['ParentSKU']
                except Exception as err:
                    errorPrint("SKU part for "+row, err,
                               sys.exc_info()[2].tb_lineno)

            # Include the amazonsku
            ama_data = amazon_data_upload.amazonDataUpload(flatfile)

            for row in ama_data:
                try:
                    if row in list(data.keys()):
                        data[row]['amazon-producttype'] = ama_data[row]['ItemAmazonProductType']
                        data[row]['fba-enabled'] = ama_data[row]['ItemAmazonFBA']
                        data[row]['fba-shipping'] = ama_data[row]['ItemShippingWithAmazonFBA']
                except Exception as err:
                    errorPrint("Amazondata part for "+row, err,
                               sys.exc_info()[2].tb_lineno)

            # Include the price
            price_data = price_upload.priceUpload(flatfile)

            for row in price_data:
                try:
                    if row in list(data.keys()):
                        data[row]['price-price'] = price_data[row]['price']
                        data[row]['ebay-price'] = price_data[row]['ebay']
                        data[row]['amazon-price'] = price_data[row]['amazon']
                        data[row]['webshop-price'] = price_data[row]['webshop']
                        data[row]['etsy-price'] = price_data[row]['etsy']
                except Exception as err:
                    errorPrint("Price part for "+row, err,
                               sys.exc_info()[2].tb_lineno)

        # Sort the dictionary to make sure that the parents are the first variant of each item
        sorted_data = sortProducts(data)

        barcode.writeCSV(sorted_data, "item", column_names, folder, filename)
    except UnicodeDecodeError as err:
        errorPrint("decoding problem", err,
                   sys.exc_info()[2].tb_lineno)
        print("press ENTER to continue..")
        input()
        sys.exit()

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
                try:
                    use_names =\
                        [i for i in property_names if i in list(row.keys())]
                    values = [row[i] for i in use_names]
                except ValueError as err:
                    warnPrint("No Value",
                              sys.exc_info()[2].tb_lineno, err)

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
                errorPrint("Key was not found in the flatfile", kerr,
                           sys.exc_info()[2].tb_lineno)


    barcode.writeCSV(data, "Item_Merkmale", column_names, folder, filename)

def getProperties(flatfile):

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
                errorPrint("Parent has no package measurements", err,
                           sys.exc_info()[2].tb_lineno)
                sys.exit()
            except Exception as err:
                errorPrint("getProperties setting values failed", err,
                           sys.exc_info()[2].tb_lineno)

        return properties

def getAttributes(dataset, sets):

    output_string = ''
    try:
        if dataset['parent_sku'] in list(sets.keys()):
            if len(sets[dataset['parent_sku']]['color']) > 1:
                output_string = 'color_name:' + dataset['color_name']
        else:
            print("{0} not found in {1}"
                  .format(dataset['parent_sku'], ','.join(list(sets.keys()))))
    except Exception as err:
        errorPrint("Adding of color attribute failed", err,
                   sys.exc_info()[2].tb_lineno)
    try:
        if len(sets[dataset['parent_sku']]['size']) > 1:
            if not output_string:
                output_string = 'size_name:' + dataset['size_name']
            else:
                output_string = output_string + ';size_name:' + dataset['size_name']
    except Exception as err:
        errorPrint("Adding of size attribute failed", err,
                   sys.exc_info()[2].tb_lineno)
    return output_string

def findSimilarAttr(flatfile):

    data = {}

    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=";")

        for row in reader:
            # If it is a parent create a new dictionary with 2 sets for color and size
            if row['parent_child'].lower() == 'parent':
                color = set()
                size = set()
                data[row['item_sku']] = {'color':color, 'size':size}
            # If it is a child search through the data dictionary for a match
            if row['parent_child'] == 'child':
                for line in data:
                    if row['parent_sku'] == line:
                        data[row['parent_sku']]['color'].add(row['color_name'])
                        data[row['parent_sku']]['size'].add(row['size_name'])
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
    try:
        with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
            reader = csv.DictReader(item, delimiter=';')

            first_row = [*list(reader)[0]]
            if len(first_row) == 1:
                errorPrint("Wrong delimiter, use ';'",
                           'False delimiter detected',
                           inspect.currentframe().f_back.f_lineno)
                return False

            if not 'feed_product_type' in first_row:
                if 'Marke' in first_row:
                    errorPrint("Only use the last of the 3 header lines",
                               err='',
                               linenumber=inspect.currentframe()
                               .f_back.f_lineno)
                    print("Please cut the first two rows from the flatfile for this script\n")
                    return False
                errorPrint("Wrong header line", err='',
                           linenumber=inspect.currentframe().f_back.f_lineno)
                return False
            return True

    except Exception as err:
        warnPrint("Flatfile check failed",
                  sys.exc_info()[2].tb_lineno, err)

def checkEncoding(file_dict):
    try:
        with open(file_dict['path'], mode='rb') as item:
            try:
                raw_data = item.read()
            except Exception as err:
                print("ERROR: {0}\n".format(err))
                errorPrint("check Encoding reading failed", err,
                           sys.exc_info()[2].tb_lineno)
            file_dict['encoding'] = chardet.detect(raw_data)['encoding']
            print("chardet data for {0}\n{1}\n".format(file_dict['path'], chardet.detect(raw_data)))

    except Exception as err:
        errorPrint("check Encoding failed", err,
                   sys.exc_info()[2].tb_lineno)

    return file_dict

def getVariationId(exportfile, sku):

    variationid = 0
    with open(exportfile['path'], mode='r',
              encoding=exportfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=';')

        for row in reader:
            if 'VariationNo' in list(row.keys()):
                if row['VariationNo'] == sku:
                    variationid = row['VariationId']
                continue
            try:
                if row[list(row.keys())[1]] == sku:
                    for i in range(len(list(row.keys()))):
                        # matches .id .ID _ID _id ID id
                        if re.search(r'\bid', [*row][i].lower()):
                            print("found ID in {0} value: {1}"
                                  .format(list(row.keys())[i],
                                          row[list(row.keys())[i]]))
                            variationid = row[list(row.keys())[i]]
            except Exception as err:
                errorPrint("Looking for irregularities in getVariationId",
                           err, sys.exc_info()[2].tb_lineno)
                print("press ENTER to continue...")
                input()
        if not variationid:
            warnPrint(msg="No Variation ID found for "+sku,
                      linenumber=inspect.currentframe().f_back.f_lineno)

    return variationid
