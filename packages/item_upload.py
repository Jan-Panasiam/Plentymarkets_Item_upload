import csv
import sys
import re
import chardet
from os.path import isfile
from sys import exit
from packages import barcode, amazon_data_upload, price_upload, image_upload


try:
    from sortedcontainers import SortedDict
except ImportError:
    print("the sortedcontainers module is required to run this program.")
    raise ImportError

class WrongEncodingException(Exception):
    pass

def check_flatfile(flatfile):
    try:
        with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
            reader = csv.DictReader(item, delimiter=';')

            first_row = [* list(reader)[0] ]
            if(not( 'feed_product_type' in first_row )):
                if( 'Marke' in first_row ):
                    print("Please cut the first two rows from the flatfile for this script\n")
                    return False
                else:
                    print("This file contains the wrong column header\n{0}\n".format(','.join(first_row)))
                    return False
            else:
                return True
    except Exception as err:
        print("ERROR @ flatfile checking : {0}".format(err))

def check_encoding(file_dict):
    try:
        with open(file_dict['path'], mode='rb') as item:
            try:
                raw_data = item.read()
            except Exception as err:
                print("ERROR: {0}\n".format(err))
            file_dict['encoding'] = chardet.detect(raw_data)['encoding']
            print("chardet data for {0}\n{1}\n".format(file_dict['path'], chardet.detect(raw_data)))

    except Exception as err:
        print("Error : {0}\n".format(err))

    return file_dict

def itemUpload(flatfile, intern, stocklist, attributefile, folder, input_data):
    # The column headers for the output file as expected from the
    # plentymarkets dataformat
    column_names = ['ItemID', 'Parent-SKU', 'SKU',
                    'Length', 'Width',
                    'Height', 'Weight',
                    'Name', 'MainWarehouse',
                    'Attributes',
                    'ItemOriginCountry', 'ItemTextKeywords',
                    'ItemProducer', 'ItemProducerID',
                    'ItemTextName', 'ItemTextDescription',
                    'ExternalID', 'VariationActive',
                    'VariationAvailability', 'Category-IDs',
                    'Standard-Category', 'Standard-Category-Webshop',
                    'Mandant-Active', 'Webshop-Active',
                    'EAN_Barcode', 'FNSKU_Barcode',
                    'market-active-shop', 'market-active-ebay',
                    'market-active-ebayger', 'market-active-amafba',
                    'market-active-amafbager', 'market-active-webapi',
                    'marketid', 'accountid',
                    'amazon_sku', 'amazon_parentsku',
                    'amazon-producttype', 'fba-enabled', 'fba-shipping',
                    'price-price', 'ebay-price', 'amazon-price', 'webshop-price', 'etsy-price',
                    'ASIN-countrycode', 'ASIN-type', 'ASIN-value',
                    'Multi-URL', 'connect-variation', 'mandant', 'availability', 'listing',
                    'connect-color']


    # Unpack File and scrap data
    # INPUT
    # --------------------------------------------------------------
    Data = SortedDict()
    package_properties = {}
    barcode_data = {}

    # Get sets of all colors and sizes for each parent
    # to find if there are some with only one attribute value for all childs
    color_size_sets = {}
    color_size_sets = find_similar_attr(flatfile)

    # PACKAGE PROPERTIES
    package_properties = get_properties(flatfile)

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
                        keywords = row[ 'generic_keywords' ]

                    if(not(keywords)):
                        raise barcode.EmptyFieldWarning('generic_keywords')

                    # SET ATTRIBUTES
                    attributes = ''
                    if(row['parent_child'] == 'child'):
                        attributes = get_attributes(dataset=row, sets=color_size_sets)


                    try:
                        values = [
                                    '', row['parent_sku'], row['item_sku'],
                                    package_properties[ 'length' ] * 10, package_properties[ 'width' ] * 10,
                                    package_properties[ 'height' ] * 10, package_properties[ 'weight' ],
                                    row['item_name'], '104',
                                    attributes,
                                    '62', keywords,
                                    row['brand_name'].upper(), '3',
                                    input_data['name'], row['product_description'],
                                    '', 'true', # externalID & active
                                    '3', input_data['categories'],
                                    input_data['categories'][0:2], input_data['categories'][0:2],
                                    'Y', 'Y', # mandant
                                    '', '',   # barcode
                                    'Y', 'Y', # marketconnection
                                    'Y', 'Y', # marketconnection
                                    'Y', 'Y', # marketconnection
                                    '', '',   # market & accout id amazonsku
                                    '', '',   # sku & parentsku amazonsku
                                    '', '', '',# producttype & fba amazon
                                    '','','','','',# prices
                                    '', '', '', #asin
                                    '', '', '', '', #image
                                    '', '' # image
                                  ]

                    except KeyError:
                        raise KeyError
                        print('Error at the Values')
                    Data[row['item_sku']] = SortedDict(zip(column_names, values))
                except KeyError as err:
                    print("Error at : 'if(row['parent_child'] == 'parent'):'")
                    return row['item_sku']

            # open the intern number csv to get the item ID
            with open(intern['path'], mode='r', encoding=intern['encoding']) as item:
                reader = csv.DictReader(item, delimiter=";")
                for row in reader:
                    try:
                        if(row['amazon_sku'] in [*Data]):
                            Data[row['amazon_sku']]['ItemID'] = row['article_id']
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
                    print("ERROR @ Barcode Part for {0}.\n{1}.\n".format(row, err))

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
                    print("ERROR @ SKU Part for {0}.\n{1}.\n".format(row, err))

            # Include the amazonsku
            ama_data = amazon_data_upload.amazonDataUpload(flatfile)

            for row in ama_data:
                try:
                    if(row in [*Data]):
                        Data[row]['amazon-producttype'] = ama_data[row]['ItemAmazonProductType']
                        Data[row]['fba-enabled'] = ama_data[row]['ItemAmazonFBA']
                        Data[row]['fba-shipping'] = ama_data[row]['ItemShippingWithAmazonFBA']
                except Exception as err:
                    print("ERROR @ AmazonData Part for {0}.\n{1}.\n".format(row, err))

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
                    print("ERROR @ Price Part for {0}.\n{1}.\n".format(row, err))

            # Include the images
            image_data = image_upload.imageUpload(flatfile, attributefile)

            for index, row in enumerate( image_data ):
                try:
                    if(row in [*Data]):
                        Data[row]['Multi-URL'] = image_data[row]['Multi-URL']
                        Data[row]['connect-variation'] = image_data[row]['connect-variation']
                        Data[row]['mandant'] = image_data[row]['mandant']
                        Data[row]['availability'] = image_data[row]['availability']
                        Data[row]['listing'] = image_data[row]['listing']
                        Data[row]['connect-color'] = image_data[row]['connect-color']
                except Exception as err:
                    print("ERROR @ Image Part for {0}.\n{1}.\n".format(row, err))


            # Write Data into new CSV for Upload
            # OUTPUT
            # --------------------------------------------------------------

        barcode.writeCSV(Data, "item", column_names, folder)
    except UnicodeDecodeError as err:
        print("Decode Error at line: {0}, err: {1}".format(sys.exc_info()[2].tb_lineno, err))
        print("press ENTER to continue..")
        input()
        sys.exit()

def itemPropertyUpload(flatfile, folder):

    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=';', lineterminator='\n')

        # define the names of the property fields within the flatfile
        property_names = ['bullet_point1', 'bullet_point2'
                          , 'bullet_point3', 'bullet_point4'
                          , 'bullet_point5', 'fit_type'
                          , 'lifestyle', 'batteries_required'
                          , 'supplier_declared_dg_hz_regulation'
                          , 'department_name', 'variation_theme'
                          , 'seasons', 'material_composition'
                          , 'outer_material_type', 'collar_style'
                          , 'neck_size', 'pattern_type'
                          , 'sleeve_type']

        # Assign the Plentymarkets property ID to the property_names
        property_id = dict()

        id_values = ['15', '16'
                     , '17', '24'
                     , '19', '20'
                     , '9', '10'
                     , '14'
                     , '13', '12'
                     , '11', '8'
                     , '7', '25'
                     , '26', '28'
                     , '29']

        property_id = dict( zip(property_names, id_values) )

        properties = dict()

        for row in reader:
            if(row['parent_child'] == 'parent'):
                try:
                    values = [row[property_names[0]], row[property_names[1]]
                            , row[property_names[2]], row[property_names[3]]
                            , row[property_names[4]], row[property_names[5]]
                            , row[property_names[6]], row[property_names[7]]
                            , row[property_names[8] + '1']
                            , row[property_names[9]], row[property_names[10]]
                            , row[property_names[11]], row[property_names[12]]
                            , row[property_names[13]], row[property_names[14]]
                            , row[property_names[15]], row[property_names[16]]
                            , row[property_names[17]]
                            ]
                except ValueError as err:
                    print("In property Upload: One of the values wasn't found : ", err)

                # Check for empty values
                #for index, item in enumerate( values ):
                #    if(not(item)):
                #        print(row['item_sku'], " has no value on ", property_names[index], " !")

                properties[row['item_sku']] = dict(zip(property_names, values))

    column_names = ['SKU', 'ID-property', 'Value', 'Lang']
    Data = {}
    for index, row in enumerate( properties ):
        for prop in property_id:
            values = [row, property_id[prop], properties[row][prop], 'DE']

            Data[row + prop] = dict(zip(column_names, values))

    barcode.writeCSV(Data, "Item_Merkmale", column_names, folder)

def get_properties(flatfile):

    properties = {'length':0,
                  'width':0,
                  'height':0,
                  'weight':0}

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

            except ValueError as err:
                print(err)
                print("/nPlease copy the values for height, length, width",
                    "and weight\nfrom the children to the parent",
                    "variation in the flatfile.\n")
                exit()

        return properties

def get_attributes(dataset, sets):

    output_string = ''
    if(len(sets[dataset['parent_sku']]['color']) > 1):
        output_string = 'color_name:' + dataset['color_name']
    if(len(sets[dataset['parent_sku']]['size']) > 1):
        if(not(output_string)):
            output_string = 'size_name:' + dataset['size_name']
        else:
            output_string = output_string + ';size_name:' + dataset['size_name']
    return output_string

def find_similar_attr(flatfile):

    Data = {}

    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=";")

        for row in reader:
            # If it is a parent create a new dictionary with 2 sets for color and size
            if(row['parent_child'] == 'parent'):
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
