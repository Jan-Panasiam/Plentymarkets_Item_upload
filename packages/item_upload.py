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


def itemUpload(flatfile, intern):
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
                if(row['generic_keywords']):
                    keywords = row[ 'generic_keywords' ]

                try:
                    values = ['', row['item_sku'], row['package_length'] * 10,
                              row['package_width'] * 10,
                              row['package_height'] * 10,
                              row['package_weight'], row['item_name'],
                              '104', '', '62', row['brand_name'].upper(), '3',
                              row['feed_product_type'], '',
                              row['product_description'], keywords, 'de',
                              '', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y', 9, 1]

                except Exception as err:
                    print(err)
                Data[row['item_sku']] = SortedDict(zip(column_names, values))

        # open the intern number csv to get the item ID
        with open(intern, mode='r') as item:
            reader = csv.DictReader(item, delimiter=";")
            for row in reader:
                if(row['amazon_sku'] in [*Data]):
                    Data[row['amazon_sku']]['ItemID'] = row['article_id']
                    Data[row['amazon_sku']]['PrimaryVariationExternalID'] = row['full_number']

        # Write Data into new CSV for Upload
        # OUTPUT
        # --------------------------------------------------------------

        variation_upload.writeCSV(Data, "item", column_names)


def itemPropertyUpload(flatfile, export):

    with open(flatfile, mode='r') as item:
        reader = csv.DictReader(item, delimiter=';', lineterminator='\n')

        material = {}
        value = {}
        # search for a material name and assign a number that correlates to it
        for row in reader:
            if(row['parent_child'] == 'parent'):
                if(re.search(r'(cotton|baumwolle)',
                   row['outer_material_type'].lower())):

                    material[row['item_sku']] = 4
                    value[row['item_sku']] = "Baumwolle"
                if(re.search(r'(hemp|hanf)',
                row['outer_material_type'].lower())):

                    material[row['item_sku']] = 5
                    value[row['item_sku']] = "Hanf"
                if(re.search(r'(viskose|viscose)',
                row['outer_material_type'].lower())):

                    material[row['item_sku']] = 6
                value[row['item_sku']] = "Viskose"

    with open(export, mode='r') as item:
        reader = csv.DictReader(item, delimiter=';', lineterminator='\n')

        column_names = ['PropertyItemID', 'ItemID', 'PrimaryVariationCustomNumber',
                        'Lang', 'Value']

        Data = {}
        for row in reader:
            if(row['AttributeValueSetID'] == ''):
                values = ['3',
                          row['ItemID'],
                          row['VariationName'],
                          'de',
                          'PANASIAM']

                Data[row['VariationNumber'] + '1'] = dict(zip(column_names,
                                                          values))
                if(row['VariationNumber'] in [*material]):
                    values = [material[row['VariationNumber']],
                            row['ItemID'],
                            row['VariationName'],
                            'de',
                            value[row['VariationNumber']]]

                    Data[row['VariationNumber'] + '2'] = dict(zip(column_names,
                                                          values))
    variation_upload.writeCSV(Data, "property", column_names)
