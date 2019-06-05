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
        writer = csv.DictWriter(item, delimiter=";", fieldnames=columns, lineterminator='\n')
        writer.writeheader()
        for row in dataobject:
            writer.writerow(dataobject[row])

    if(isfile(output_path)):
        print("Upload file successfully created under {0}".format(output_path))

    return output_path

def barcode_Upload(flatfile, stocklist):
    # open the flatfile get the ean for an sku and save it into a dictionary with
    # columnheaders of the plentymarket dataformat

    column_names = [ 'EAN_Barcode', 'FNSKU_Barcode', 'SKU',
                    'ASIN-countrycode', 'ASIN-type', 'ASIN-value' ]

    Data = {}
    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=";")

        for row in reader:
            if(row['parent_child'] == 'child'):
                # Set code to an empty String if the barcode type matches EAN set it to to
                # the external_product_id
                code = ''
                code = row['external_product_id']

                if(not(code)):
                    raise EmptyFieldWarning('barcode(EAN)')
                values = [ code, '', row['item_sku'],
                          '1', 'ASIN', '']

                Data[row['item_sku']] = dict(zip(column_names, values))


    with open(stocklist['path'], mode='r', encoding=stocklist['encoding']) as item:
        reader = csv.DictReader(item, delimiter=";")

        for row in reader:
            if(row['MASTER'] in [*Data]):
                # Set code to an empty String if the barcode type matches FNSKU set it to to
                # the external_product_id
                code = ''
                code = row['fnsku']

                if(code):
                    Data[row['MASTER']]['FNSKU_Barcode'] = code
                Data[row['MASTER']]['ASIN-value'] = row['asin']

    return Data

