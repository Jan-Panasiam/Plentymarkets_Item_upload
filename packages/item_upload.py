import csv
from os.path import isfile
from sys import exit
from variation_upload import writeCSV


try:
    from sortedcontainers import SortedDict
except ImportError:
    print("the sortedcontainers module is required to run this program.")
    raise ImportError


def itemUpload(filepath, intern_number):
    # The column headers for the output file as expected from the plentymarkets dataformat
    column_names_output = ['CategoryLevel1Name', 'CategoryLevel2Name',
                           'CategoryLevel3Name', 'CategoryLevel4Name',
                           'CategoryLevel5Name', 'CategoryLevel6Name',
                           'ItemID', 'PrimaryVariationCustomNumber',
                           'PrimaryVariationLengthMM',
                           'PrimaryVariationWidthMM',
                           'PrimaryVariationHeightMM',
                           'PrimaryVariationWeightG',
                           'PrimaryVariationName',
                           'PrimaryVariationPurchasePrice', 'ItemImageURL',
                           'PrimaryVariationMainWarehouse',
                           'ItemOriginCountry', 'ItemProducer',
                           'ItemProducerID', 'ItemTextName',
                           'ItemTextDescription']

    # default values: CategoryLevel5Name : '' , CategoryLevel6Name : '', ItemOriginCountry : '62' , ItemProducer : 'PANASIAM', ItemProducerID : '3'

    # Unpack File and scrap data
    # INPUT
    # --------------------------------------------------------------
    Data = SortedDict()

    with open(filepath, mode='r') as item:
        reader = csv.DictReader(item, delimiter=";")
        for row in reader:
            # if the item is a parent scrap the name and the desc from the 
            # flatfile
            if(row['parent_child'] == 'parent'):
                try:
                    if(row['package_height'] and row['package_length'] and row['package_width']):
                        row['package_height'] = int(row['package_height'])
                        row['package_length'] = int(row['package_length'])
                        row['package_width'] = int(row['package_width'])
                except ValueError as err:
                    row['package_height'] = int(float(row['package_height']))
                    row['package_length'] = int(float(row['package_length']))
                    row['package_width'] = int(float(row['package_width']))
                except ValueError as err:
                    print(err)
                    print(
                        "/nPlease copy the values for height, length, width and weight\nfrom the children to the parent variation in the flatfile.\n")
                    exit()
                try:
                    values = ['', '', '', '', '', '', '', row['item_sku'],
                              row['package_length'] * 10,
                              row['package_width'] * 10,
                              row['package_height'] * 10,
                              row['package_weight'],
                              row['item_name'],
                              row['standard_price'],
                              '', 'Badel', '62', 'PANASIAM', '3',
                              '', row['product_description']]
                except Exception as err:
                    print(err)
                Data[row['item_sku']] = SortedDict(
                    zip(column_names_output, values))

    # open the intern number csv to get the item ID
    with open(intern_number, mode='r') as item:
        reader = csv.DictReader(item, delimiter=";")
        for row in reader:
            if(row['amazon_sku'] in [*Data]):
                Data[row['amazon_sku']]['ItemID'] = row['article_id']

    # Write Data into new CSV for Upload
    # OUTPUT
    # --------------------------------------------------------------

    writeCSV(Data, "item", column_names_output)


def itemPropertyUpload(flatfile, export):

    with open(flatfile, mode='r') as item:
        reader = csv.DictReader(item, delimiter=';', lineterminator='\n')

        material = {}
        # search for a material name and assign a number that correlates to it
        for row in reader:
            if(row['parent_child'] == 'parent'):
                if(re.search(r'(cotton|baumwolle)',
                             row['outer_material_type'].lower())):
                    material[row['item_sku']] = 4
                if(re.search(r'(hemp|hanf)',
                             row['outer_material_type'].lower())):
                    material[row['item_sku']] = 5
                if(re.search(r'(viskose|viscose)',
                             row['outer_material_type'].lower())):
                    material[row['item_sku']] = 6

    with open(export, mode='r') as item:
        reader = csv.DictReader(item, delimiter=';', lineterminator='\n')

        column_names = ['PropertyItemID', 'ItemID',
                        'PrimaryVariationCustomNumber']

        Data = {}
        for row in reader:
            if(row['AttributeValueSetID'] == ''):
                values = ['3',
                          row['ItemID'],
                          row['VariationName']]

                Data[row['VariationNumber'] + '1'] = dict(zip(column_names,
                                                              values))
                values = [material[row['VariationNumber']],
                          row['ItemID'],
                          row['VariationName']]

                Data[row['VariationNumber'] + '2'] = dict(zip(column_names,
                                                              values))
    writeCSV(Data, "property", column_names)
