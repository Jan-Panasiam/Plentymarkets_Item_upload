import csv
import re
from os.path import isfile
import sys
from tkinter.filedialog import askdirectory
import os
try:
    from sortedcontainers import SortedDict
except ImportError:
    print("the sortedcontainers module is required to run this program.")
    raise ImportError

class EmptyFieldWarning(Exception):
    def __init__(self, errorargs):
        Exception.__init__(self, "Following field/s are empty {0}".format(errorargs))
        self.errorargs = errorargs

def writeCSV(dataobject, name, columns, upload_path):
    '''Write Data into new CSV for Upload
        OUTPUT
    '''
    '''
    uploadpath = os.getcwd() + '/Upload'
    if not os.path.exists(uploadpath):
        print("=#="*10 + '\n')
        printf("Please choose a folder for the Upload files\n")
        print("=#="*10 + '\n')
        uploadpath = askdirectory(title="Choose a folder for the Upload files!")
    '''

    output_path_number = 1
    datatype = ".csv"
    output_name = "/" + name + "_upload_" + str(output_path_number) + datatype
    output_path = upload_path + output_name

    while(isfile(output_path)):
        output_path_number = int(output_path_number) + 1
        output_name = "/" + name + "_upload_" + str(output_path_number) + datatype
        output_path = upload_path + output_name

    with open(output_path, mode='a') as item:
        writer = csv.DictWriter(item, delimiter=";", fieldnames=columns)
        writer.writeheader()
        for row in dataobject:
            writer.writerow(dataobject[row])

    if(isfile(output_path)):
        print("Upload file successfully created under {0}".format(output_path))

    return output_path


def variationUpload(flatfile, intern_number, folder):

    # The column header names
    names = ['ItemID', 'VariationID', 'VariationNumber', 'VariationName', 'Position',
             'LengthMM', 'WidthMM', 'HeightMM', 'WeightG', 'VariationAttributes',
             'PurchasePrice', 'MainWarehouse', 'Availability', 'AutoStockVisible',
             'ExternalID']

    # get the amount of different sizes to exclude adding the size if there is only a single one as attribute.
    number_sizes = numberOfSizes(flatfile)

    # create a Data Dictionary and fill it with the necessary values from the flatfile
    Data = SortedDict()
    item_name = ''

    with open(flatfile, mode='r') as item:
        reader = csv.DictReader(item, delimiter=";")
        for row in reader:
            if(row['parent_child'] == 'child'):
                pack_height = 0
                pack_length = 0
                pack_width = 0
                pack_weight = 0
                attributes = ''

                try:
                    if(row['package_height'] and
                    row['package_length'] and
                    row['package_width']):

                        pack_height = int(row['package_height'])
                        pack_length = int(row['package_length'])
                        pack_width = int(row['package_width'])
                except ValueError as err:
                    pack_height = int(float(row['package_height']))
                    pack_length = int(float(row['package_length']))
                    pack_width = int(float(row['package_width']))
                except ValueError:
                    print("\nYour file doesn't include the proportions of the item\n\
                          at the parent, please add them later manually.\n")

                if(row['package_weight']):
                    pack_weight = int(row['package_weight'])

                if(not(pack_width or pack_length or pack_height or pack_weight)):
                    raise EmptyFieldWarning('package properties')

                if(row['color_name']):
                    attributes = 'color_name:' + row['color_name']

                if(row['size_name'] and number_sizes > 1):
                    attributes += ';size_name:' + row['size_name']

                if(not(attributes)):
                    raise EmptyFieldWarning('plentymarkets attributes')

                try:
                    values = ['', '', row['item_sku'], row['item_name'], '',
                              pack_length * 10,
                              pack_width * 10,
                              pack_height * 10,
                              pack_weight, attributes,
                              row['standard_price'], 'Badel', 'Y', 'Y', '']
                except Exception as err:
                    print(err)
                Data[row['item_sku']] = SortedDict(zip(names, values))

    # open the intern numbers csv and fill in the remaining missing fields by using the
    # item_sku as dict key
    with open(intern_number, mode='r') as item:
        reader = csv.DictReader(item, delimiter=';')
        for row in reader:
            # check if the sku is within the keys of the Data Dictionary
            if(row['amazon_sku'] in [*Data]):
                Data[row['amazon_sku']]['ItemID'] = row['article_id']
                if(not(row['position'] == 0)):
                    Data[row['amazon_sku']]['Position'] = row['position']
                    Data[row['amazon_sku']]['ExternalID'] = row['full_number']

    output_path = writeCSV(Data, 'variation', names, folder)

    return output_path


def setActive(flatfile, export, folder):
    # because of a regulation of the plentyMarkets system the active status has to be
    # delivered as an extra upload
    column_names = ['Active', 'VariationID']
    Data = {}
    # open the flatfile to get the sku names
    with open(flatfile, mode='r') as item:
        reader = csv.DictReader(item, delimiter=';')

        for row in reader:
            values = ['Y', '']
            Data[row['item_sku']] = dict(zip(column_names, values))

    with open(export, mode='r') as item:
        reader = csv.DictReader(item, delimiter=';')
        wrong_delimiter = False

        for row in reader:
            if( '\t' in [*row] ):
                wrong_delimiter = True
                break
            if(row['VariationNumber'] in [*Data]):
                Data[row['VariationNumber']]['VariationID'] = row['VariationID']

        if(wrong_delimiter):
            reader = csv.DictReader(item, delimiter='\t')

            for row in reader:
                if(row['VariationNumber' in [*Data]]):
                    Data[row['VariationNumber']]['VariationID'] = row['VariationID']

    output_path = writeCSV(Data, 'SetActive', column_names, folder)


def EANUpload(flatfile, export, stocklist, folder):
    # open the flatfile get the ean for an sku and save it into a dictionary with
    # columnheaders of the plentymarket dataformat

    column_names = ['BarcodeID', 'BarcodeName', 'BarcodeType',
                    'Code', 'VariationID', 'VariationNumber']

    barcode_types = {'EAN' : {'id' : 1, 'name' : 'EAN', 'type' : 'GTIN_13'},
                     'FNSKU' : {'id' : 5, 'name' : 'FNSKU', 'type' : 'EAN_13'}}
    Data = {}
    with open(flatfile, mode='r') as item:
        reader = csv.DictReader(item, delimiter=";")

        for row in reader:
            if(row['parent_child'] == 'child'):
                for barcode in barcode_types:
                    # Set code to an empty String if the barcode type matches EAN set it to to
                    # the external_product_id
                    code = ''
                    if(barcode == 'EAN'):
                        code = row['external_product_id']

                    if(not(barcode)):
                        raise EmptyFieldWarning('barcode(EAN)')
                    values = [
                                barcode_types[barcode]['id'], barcode_types[barcode]['name'],
                                barcode_types[barcode]['type'], code,
                                '', row['item_sku']
                            ]
                    Data[row['item_sku'] + barcode] = dict(zip(column_names, values))

    # open the exported file to get the variation id
    with open(export, mode='r') as item:
        reader = csv.DictReader(item, delimiter=";")

        for row in reader:
            for barcode in barcode_types:
                if(row['VariationNumber'] + barcode in [*Data]):
                    Data[row['VariationNumber'] + barcode]['VariationID'] = row['VariationID']

    with open(stocklist, mode='r') as item:
        reader = csv.DictReader(item, delimiter=";")

        for row in reader:
            for barcode in barcode_types:
                if(row['MASTER'] + barcode in [*Data]):
                    # Set code to an empty String if the barcode type matches FNSKU set it to to
                    # the external_product_id
                    code = ''
                    if(barcode == 'FNSKU'):
                        code = row['fnsku']

                    if(not(code)):
                        #raise EmptyFieldWarning('barcode(FNSKU)')
                        print("Keine FNSKU\n")

                    if(code):
                        Data[row['MASTER'] + barcode]['Code'] = code

    output_path = writeCSV(Data, 'VariationBarcode', column_names, folder)


def marketConnection(export, folder, ebay=0, amazon=0):
    # Enable marketconnection of items and variations by entering 1 for True
    # and 0 for False

    column_names = ['VariationID', 'VariationCustomNumber',
                    'webApi', 'AmazonFBAGermany', 'AmazonFBA', 'eBayGermany', 'Ebay']

    Data = {}
    with open(export, mode='r') as item:
        reader = csv.DictReader(item, delimiter=';')

        for row in reader:
            if row['VariationID'] and row['VariationNumber']:
                values = [row['VariationID'], row['VariationNumber'],
                          '1', amazon, amazon, ebay, ebay]
                Data[row['VariationNumber']] = dict(zip(column_names, values))


    output_path = writeCSV(Data, 'marketConnection', column_names, folder)

def numberOfSizes(flatfile):
    # open the flatfile and read the size of each variation, put all of them in a set
    # and return the size of the set.

    length_set = 0
    sizeset = set()

    with open(flatfile, mode='r') as item:
        reader = csv.DictReader(item, delimiter=';')

        for row in reader:
            sizeset.add(row['size_name'])

    sizeset.discard('')

    print("lenght of set {0}, content of set {1}".format(len(sizeset), sizeset))

    return len(sizeset)
