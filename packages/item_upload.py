import csv
import sys
import re
import chardet
import collections
import colorama
import inspect
from sys import exit
from packages import barcode, amazon_data_upload, price_upload


class WrongEncodingException(Exception):
    pass

try:
    def errorPrint(msg, err, linenumber):
        print(colorama.Fore.RED)
        print("ERROR:\nline:{0}\t{1}\tError:{2}".format(linenumber, msg, err))
        print(colorama.Style.RESET_ALL)
except AttributeError:
    def errorPrint(msg, err, linenumber):
        print("ERROR:\nline:{0}\t{1}\tError:{2}".format(linenumber, msg, err))

try:
    def warnPrint(msg, err, linenumber):
        print(colorama.Fore.YELLOW)
        print("WARNING:\nline:{0}\t{1}\tWarning:{2}"
              .format(linenumber, msg, err))
        print(colorama.Style.RESET_ALL)
except AttributeError:
    def warnPrint(msg, err, linenumber):
        print("WARNING:\nline:{0}\t{1}\tWarning:{2}"
              .format(linenumber, msg, err))

def itemUpload(flatfile, intern, stocklist, attributefile, folder, input_data, filename):
    # The column headers for the output file as expected from the
    # plentymarkets dataformat
    column_names = ['Parent-SKU', 'SKU',
                    'isParent',
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

    # Unpack File and scrap data
    # INPUT
    # --------------------------------------------------------------
    Data = dict()
    sorted_Data = collections.OrderedDict()
    package_properties = {}
    barcode_data = {}
    isParent = False
    position = 0

    # Get sets of all colors and sizes for each parent
    # to find if there are some with only one attribute value for all childs
    color_size_sets = {}
    color_size_sets = findSimilarAttr(flatfile)

    # PACKAGE PROPERTIES
    package_properties = getProperties(flatfile)
    group_parent = ''

    try:
        # FILL DICTIONARY
        with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
            reader = csv.DictReader(item, delimiter=";")

            for row in reader:
                # transform the text format to integer in order to adjust the
                # height, width, length numbers from centimeter to milimeter
                try:
                    # SET KEYWORDS
                    keywords = ''
                    if(row['generic_keywords']):
                        keywords = row['generic_keywords']

                    if(not(keywords)):
                        try:
                            raise barcode.EmptyFieldWarning('generic_keywords')
                        except Exception:
                            print("Generic Keywords are empty!")

                    # SET ATTRIBUTES
                    try:
                        attributes = ''
                        if(row['parent_child'] == 'parent'):
                            isParent = True
                            group_parent = row['item_sku']
                            position = 0
                        if(row['parent_child'] == 'child'):
                            isParent = False
                            attributes = getAttributes(dataset=row,
                                                        sets=color_size_sets)
                            if(group_parent and row['parent_sku'] == group_parent):
                                position += 1
                    except Exception as err:
                        warnPrint("Attribute setting failed", err,
                                sys.exc_info()[2].tb_lineno)
                    try:
                        values = [
                                    row['parent_sku'], row['item_sku'],
                                    isParent,
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
                                    input_data['categories'][0:2], input_data['categories'][0:2],
                                    'Y', 'Y', # mandant
                                    '', '',   # barcode
                                    'Y', 'Y', # marketconnection
                                    'Y', 'Y', # marketconnection
                                    'Y', # marketconnection
                                    '', '',   # market & accout id amazonsku
                                    '', '',   # sku & parentsku amazonsku
                                    '', '', '',# producttype & fba amazon
                                    '','','','','','',# prices
                                    '', '', '', #asin
                                    input_data['marking']
                                  ]

                    except KeyError:
                        raise KeyError
                        print('Error at the Values')
                    except Exception as err:
                        print("Error @ setting values: line:{0}, err:{1}"
                              .format(sys.exc_info()[2].tb_lineno, err))
                    Data[row['item_sku']] = collections.OrderedDict(zip(column_names, values))
                except KeyError as err:
                    errorPrint("Reading file failed", err,
                               sys.exc_info()[2].tb_lineno)
                    return row['item_sku']

            # open the intern number csv to get the item ID
            with open(intern['path'], mode='r', encoding=intern['encoding']) as item:
                reader = csv.DictReader(item, delimiter=";")
                for row in reader:
                    try:
                        if(row['amazon_sku'] in [*Data]):
                            Data[row['amazon_sku']]['ExternalID'] = row['full_number']
                    except KeyError as keyerr:
                        print(keyerr)
                        print("Keyerror at the Intern Number addition")

            # Include the barcodes & asin
            barcode_data = barcode.barcode_Upload(flatfile, stocklist)

            for row in barcode_data:
                try:
                    if(row in [*Data]):
                        Data[row]['EAN_Barcode'] = barcode_data[row]['EAN_Barcode']
                        Data[row]['FNSKU_Barcode'] = barcode_data[row]['FNSKU_Barcode']
                        Data[row]['ASIN-countrycode'] = barcode_data[row]['ASIN-countrycode']
                        Data[row]['ASIN-type'] = barcode_data[row]['ASIN-type']
                        Data[row]['ASIN-value'] = barcode_data[row]['ASIN-value']
                except Exception as err:
                    errorPrint("Barcode part for "+row, err,
                               sys.exc_info()[2].tb_lineno)

            # Include the amazonsku
            sku_data = amazon_data_upload.amazonSkuUpload(flatfile)

            for row in sku_data:
                try:
                    if(row in [*Data]):
                        Data[row]['marketid'] = sku_data[row]['MarketID']
                        Data[row]['accountid'] = sku_data[row]['MarketAccountID']
                        Data[row]['amazon_sku'] = sku_data[row]['SKU']
                        Data[row]['amazon_parentsku'] = sku_data[row]['ParentSKU']
                except Exception as err:
                    errorPrint("SKU part for "+row, err,
                               sys.exc_info()[2].tb_lineno)

            # Include the amazonsku
            ama_data = amazon_data_upload.amazonDataUpload(flatfile)

            for row in ama_data:
                try:
                    if(row in [*Data]):
                        Data[row]['amazon-producttype'] = ama_data[row]['ItemAmazonProductType']
                        Data[row]['fba-enabled'] = ama_data[row]['ItemAmazonFBA']
                        Data[row]['fba-shipping'] = ama_data[row]['ItemShippingWithAmazonFBA']
                except Exception as err:
                    errorPrint("AmazonData part for "+row, err,
                               sys.exc_info()[2].tb_lineno)

            # Include the price
            price_data = price_upload.priceUpload(flatfile)

            for row in price_data:
                try:
                    if(row in [*Data]):
                        Data[row]['price-price'] = price_data[row]['price']
                        Data[row]['ebay-price'] = price_data[row]['ebay']
                        Data[row]['amazon-price'] = price_data[row]['amazon']
                        Data[row]['webshop-price'] = price_data[row]['webshop']
                        Data[row]['etsy-price'] = price_data[row]['etsy']
                except Exception as err:
                    errorPrint("Price part for "+row, err,
                               sys.exc_info()[2].tb_lineno)

        # Write Data into new CSV for Upload
        # OUTPUT
        # --------------------------------------------------------------

        # Sort the dictionary to make sure that the parents are the first variant of each item
        sorted_Data = sortProducts(Data)

        barcode.writeCSV(sorted_Data, "item", column_names, folder, filename)
    except UnicodeDecodeError as err:
        print("Decode Error at line: {0}, err: {1}".format(sys.exc_info()[2].tb_lineno, err))
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
        property_id = dict( zip(property_names, id_values) )

        properties = dict()

        for row in reader:
            if(row['parent_child'] == 'parent'):
                try:
                    use_names = [i for i in property_names if i in [*row]]
                    values = [row[i] for i in use_names]
                except ValueError as err:
                    warnPrint("No Value for "+i, err,
                                sys.exc_info()[2].tb_lineno)

                # Check for empty values
                properties[row['item_sku']] = dict(zip(use_names, values))

    column_names = ['SKU', 'ID-property', 'Value', 'Lang', 'Active']
    Data = {}
    for index, row in enumerate( properties ):
        for prop in use_names:
            try:
                values = [row, property_id[prop],
                          properties[row][prop], 'DE', 1]

                Data[row + prop] = dict(zip(column_names, values))
            except KeyError as kerr:
                errorPrint("Key was not found in the flatfile", kerr,
                            sys.exc_info()[2].tb_lineno)


    barcode.writeCSV(Data, "Item_Merkmale", column_names, folder, filename)

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
                if(row['package_height'] and
                    row['package_length'] and
                    row['package_width'] and
                    row['package_weight'] and
                    not(properties[ 'height' ])):

                    properties[ 'height' ] = int(row['package_height'])
                    properties[ 'length' ] = int(row['package_length'])
                    properties[ 'width' ] = int(row['package_width'])
                    properties[ 'weight' ] = int(row['package_weight'])
                elif(properties[ 'height' ]):
                    break

            # if the number is a floating point number it has to be
            # transformed into a float first befor the integer conversion
            except ValueError as err:
                properties[ 'height' ] = int(float(row['package_height']))
                properties[ 'length' ] = int(float(row['package_length']))
                properties[ 'width' ] = int(float(row['package_width']))
                properties[ 'weight' ] = int(float(row['package_weight']))
            except Exception as err:
                errorPrint("getProperties setting values failed", err,
                            sys.exc_info()[2].tb_lineno)

            except ValueError as err:
                errorPrint("Parent has no package measurements", err,
                            sys.exc_info()[2].tb_lineno)
                exit()

        return properties

def getAttributes(dataset, sets):

    output_string = ''
    try:
        if(dataset['parent_sku'] in [*sets]):
            if(len(sets[dataset['parent_sku']]['color']) > 1):
                output_string = 'color_name:' + dataset['color_name']
        else:
            print("{0} not found in {1}".format(
                dataset['parent_sku'], ','.join([*sets])
            ))
    except Exception as err:
        errorPrint("Adding of color attribute failed", err,
                    sys.exc_info()[2].tb_lineno)
    try:
        if(len(sets[dataset['parent_sku']]['size']) > 1):
            if(not(output_string)):
                output_string = 'size_name:' + dataset['size_name']
            else:
                output_string = output_string + ';size_name:' + dataset['size_name']
    except Exception as err:
        errorPrint("Adding of size attribute failed", err,
                    sys.exc_info()[2].tb_lineno)
    return output_string

def findSimilarAttr(flatfile):

    Data = {}

    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=";")

        for row in reader:
            # If it is a parent create a new dictionary with 2 sets for color and size
            if(row['parent_child'].lower() == 'parent'):
                color = set()
                size = set()
                Data[row['item_sku']] = {'color':color, 'size':size}
            # If it is a child search through the Data dictionary for a match
            if(row['parent_child'] == 'child'):
                for line in Data:
                    if(row['parent_sku'] == line):
                        Data[row['parent_sku']]['color'].add(row['color_name'])
                        Data[row['parent_sku']]['size'].add(row['size_name'])
    return Data

def sortProducts(dataset):
    item_list = dataset.items()
    new_dict = collections.OrderedDict()
    parent_dict = collections.OrderedDict()
    child_dict = collections.OrderedDict()
    position_of_parent = 0

    # Go through the items of the dataset
    for item in item_list:
        if(not(item[0] in [* new_dict ])):
            if(item[1]['isParent']):
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
        if(item[1]['Parent-SKU'] == parent):
            child_dict[item[0]] = item[1]

    return child_dict

def checkFlatfile(flatfile):
    try:
        with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
            reader = csv.DictReader(item, delimiter=';')

            first_row = [* list(reader)[0] ]
            if(len(first_row) == 1):
                errorPrint("Wrong delimiter, use ';'",
                           'False delimiter detected',
                            inspect.currentframe().f_back.f_lineno)
                return False
            if(not( 'feed_product_type' in first_row )):
                if( 'Marke' in first_row ):
                    errorPrint("Only use the last of the 3 header lines", err,
                                sys.exc_info()[2].tb_lineno)
                    print("Please cut the first two rows from the flatfile for this script\n")
                    return False
                else:
                    errorPrint("Wrong header line", err,
                                sys.exc_info()[2].tb_lineno)
                    return False
            else:
                return True
    except Exception as err:
        warnPrint("Flatfile check failed", err,
                    sys.exc_info()[2].tb_lineno)

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
    with open(exportfile['path'], mode = 'r', encoding = exportfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter = ';')

        for row in reader:
            if('VariationNo' in [*row]):
                if(row['VariationNo'] == sku):
                    variationid = row['VariationId']
            else:
                try:
                    if(row[ [*row][1] ] == sku):
                        for i in range( len([*row] )):
                            # matches .id .ID _ID _id ID id
                            if(re.search(r'\bid', [*row][i].lower())):
                                print("found ID in {0} value: {1}".format([*row][i], row[ [*row][i] ]))
                                variationid = row[ [*row][i] ]
                except Exception as err:
                    errorPrint("Looking for irregularities in getVariationId",
                               err,sys.exc_info()[2].tb_lineno)
                    print("press ENTER to continue...")
                    input()
        if(not(variationid)):
            print("No Variation ID found for {0}\n".format(sku))
            warnPrint("No Variation ID found for "+sku,
                        err,sys.exc_info()[2].tb_lineno)

    return variationid

