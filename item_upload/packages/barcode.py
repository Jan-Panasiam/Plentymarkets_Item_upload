import csv
from os.path import isfile
import sys


class EmptyFieldWarning(Exception):
    def __init__(self, errorargs):
        Exception.__init__(self, "Following field/s are empty {0}"
                           .format(errorargs))
        self.errorargs = errorargs


def writeCSV(dataobject, name, columns, upload_path, item):
    datatype = ".csv"
    output_name = "/" + name + "_" + item + "_" + datatype
    output_path = upload_path + output_name

    with open(output_path, mode='w') as item:
        writer = csv.DictWriter(item, delimiter=";",
                                fieldnames=columns, lineterminator='\n')
        writer.writeheader()
        try:
            for row in dataobject:
                writer.writerow(dataobject[row])
        except Exception as err:
            print("ERROR @ writeCSV : line : {0}, Error: {1}"
                  .format(sys.exc_info()[2].tb_lineno, err))
            print("Press ENTER to continue..")
            input()
            sys.exit()

    if(isfile(output_path)):
        print("Upload file successfully created under {0}".format(output_path))

    return output_path


def barcode_Upload(flatfile, stocklist):
    # open the flatfile get the ean for an sku and save it into a
    # dictionary with columnheaders of the plentymarket dataformat

    column_names = ['EAN_Barcode', 'FNSKU_Barcode', 'SKU',
                    'ASIN-countrycode', 'ASIN-type', 'ASIN-value']

    Data = {}
    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=";")

        for row in reader:
            if(row['parent_child'] == 'child'):
                # Set code to an empty String if the barcode type matches
                # EAN set it to to the external_product_id
                code = ''
                code = row['external_product_id']

                if(not(code) and row['parent_sku']):
                    raise EmptyFieldWarning('barcode(EAN)')
                values = [code, '', row['item_sku'],
                          '0', 'ASIN', '']

                Data[row['item_sku']] = dict(zip(column_names, values))

    with open(stocklist['path'], mode='r', encoding=stocklist['encoding']) as item:
        reader = csv.DictReader(item, delimiter=";")

        for row in reader:
            if(row['MASTER'] in [*Data]):
                # Set code to an empty String if the barcode type matches
                # FNSKU set it to to the external_product_id
                code = ''
                code = row['fnsku']

                if(code):
                    Data[row['MASTER']]['FNSKU_Barcode'] = code
                Data[row['MASTER']]['ASIN-value'] = row['asin']

    return Data
