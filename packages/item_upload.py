import csv
import re
from os.path import isfile
from sys import exit
from packages import variation_upload


try:
    from sortedcontainers import SortedDict
except ImportError:
    print("the sortedcontainers module is required to run this program.")
    raise ImportError

class WrongEncodingException(Exception):
    pass


def itemUpload(flatfile, intern, folder):
    # The column headers for the output file as expected from the
    # plentymarkets dataformat
    column_names = ['ItemID', 'PrimaryVariationCustomNumber',
                    'PrimaryVariationLengthMM', 'PrimaryVariationWidthMM',
                    'PrimaryVariationHeightMM', 'PrimaryVariationWeightG',
                    'PrimaryVariationName', 'PrimaryVariationMainWarehouse',
                    'PrimaryVariationPurchasePrice', 'ItemOriginCountry',
                    'ItemProducer', 'ItemProducerID', 'ItemProductType',
                    'ItemTextName', 'ItemTextDescription', 'ItemTextKeywords',
                    'ItemTextLang', 'PrimaryVariationExternalID',
                    'PrimaryVariationActive',
                    'PrimaryVariationAutoStockInvisible',
                    'PrimaryVariationAutoStockNoPositiveStockIcon',
                    'PrimaryVariationAutoStockPositiveStockIcon',
                    'PrimaryVariationAutoStockVisible',
                    'PrimaryVariationAvailability',
                    'ItemMarking1', 'ItemMarking2']

    # default values: CategoryLevel5Name : '' , CategoryLevel6Name : '',
    # ItemOriginCountry : '62' , ItemProducer : 'PANASIAM',
    # ItemProducerID : '3'

    # Unpack File and scrap data
    # INPUT
    # --------------------------------------------------------------
    Data = SortedDict()

    with open(flatfile, mode='r') as item:
        reader = csv.DictReader(item, delimiter=";")
        for row in reader:
            # transform the text format to integer in order to adjust the
            # height, width, length numbers from centimeter to milimeter
            try:
                if(row['parent_child'] == 'parent'):
                    try:
                        if(row['package_height'] and
                        row['package_length'] and
                        row['package_width']):

                            row['package_height'] = int(row['package_height'])
                            row['package_length'] = int(row['package_length'])
                            row['package_width'] = int(row['package_width'])

                    # if the number is a floating point number it has to be
                    # transformed into a float first befor the integer conversion
                    except ValueError as err:
                        row['package_height'] = int(float(row['package_height']))
                        row['package_length'] = int(float(row['package_length']))
                        row['package_width'] = int(float(row['package_width']))

                    except ValueError as err:
                        print(err)
                        print("/nPlease copy the values for height, length, width",
                            "and weight\nfrom the children to the parent",
                            "variation in the flatfile.\n")
                        exit()

                    # get the keywords from the flatfile if it is a old flatfile
                    # combine the keyword columns into a single one
                    # after that check the size of the keywords
                    # because the maximum for amazon is 250byte
    #                if('generic_keywords1' in headers):
    #                    if(row['generic_keywords1']):
    #                        keywords = ''
    #                        try:
    #                            keywords = str(row['generic_keywords1'] + '' +
    #                                        row['generic_keywords2'] + '' +
    #                                        row['generic_keywords3'] + '' +
    #                                        row['generic_keywords4'] + '' +
    #                                        row['generic_keywords5'])
    #                        except Exception as err:
    #                            print(err)
    #                            print("The combination of the keywords failed!")
                    keywords = ''
                    if(row['generic_keywords']):
                        keywords = row[ 'generic_keywords' ]

                    if(not(keywords)):
                        raise variation_upload.EmptyFieldWarning('generic_keywords')

                    try:
                        values = ['', row['item_sku'], row['package_length'] * 10,
                                row['package_width'] * 10,
                                row['package_height'] * 10,
                                row['package_weight'], row['item_name'],
                                '104', '', '62', row['brand_name'].upper(), '3',
                                row['feed_product_type'], '',
                                row['product_description'], keywords, 'de',
                                '', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y', 9, 1]

                    except KeyError:
                        raise KeyError
                    except Exception as err:
                        if(str(err).strip("'") == 'feed_product_type'):
                            raise WrongEncodingException("Wrong encoding for this script, please use UTF-8!")
                        print(err)
                        print('Error at the Values')
                    Data[row['item_sku']] = SortedDict(zip(column_names, values))
            except KeyError as err:
                print("Error at : 'if(row['parent_child'] == 'parent'):'")
                return row['item_sku']

        # open the intern number csv to get the item ID
        with open(intern, mode='r') as item:
            reader = csv.DictReader(item, delimiter=";")
            for row in reader:
                try:
                    if(row['amazon_sku'] in [*Data]):
                        Data[row['amazon_sku']]['ItemID'] = row['article_id']
                        Data[row['amazon_sku']]['PrimaryVariationExternalID'] = row['full_number']
                except KeyError as keyerr:
                    print(keyerr)
                    print("Keyerror at the Intern Number addition")

        # Write Data into new CSV for Upload
        # OUTPUT
        # --------------------------------------------------------------

        variation_upload.writeCSV(Data, "item", column_names, folder)

def itemPropertyUpload(flatfile, export, folder):

    with open(flatfile, mode='r') as item:
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

    with open(export, mode='r') as item:
        reader = csv.DictReader(item, delimiter=';', lineterminator='\n')

        column_names = ['PropertyItemID', 'ItemID', 'PrimaryVariationCustomNumber',
                        'Lang', 'Value']

        Data = {}
        for row in reader:
            if(row['AttributeValueSetID'] == ''):
                if(row['VariationNumber'] in [*properties]):
                    for number, key in enumerate( properties[row['VariationNumber']] ):
                        if(properties[row['VariationNumber']][key]):
                            values = [
                                    property_id[key],
                                    row['ItemID'],
                                    row['VariationName'],
                                    'de',
                                    properties[row['VariationNumber']][key]
                                    ]

                        Data[row['VariationNumber'] + str( number )] = dict(zip(column_names,
                                                            values))
    variation_upload.writeCSV(Data, "Item_Merkmale", column_names, folder)

