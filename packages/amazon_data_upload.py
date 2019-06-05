import csv
from os.path import isfile
import sys
from packages import barcode
try:
    from sortedcontainers import SortedDict
except ImportError:
    print("the sortedcontainers module is required to run this program.")
    raise ImportError


def amazonSkuUpload(flatfile):

    column_names = [ 'MarketID', 'MarketAccountID',
                     'SKU', 'ParentSKU' ]

    # Define constant values
    marketid = 104 # Amazon FBA Germany
    accountid = 0  # bkkasia.germany@gmail.com

    Data = SortedDict()

    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=';')
        for row in reader:
            values = [ marketid, accountid,
                        row['item_sku'], row['parent_sku'] ]
            Data[row['item_sku']] = SortedDict(zip(column_names, values))

    return Data


def amazonDataUpload(flatfile):

    column_names = [ 'ItemAmazonProductType', 'ItemAmazonFBA', 'ItemShippingWithAmazonFBA' ]

    Data = SortedDict()

    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=";")

        type_id = {
            'accessory':28,
            'shirt':13,
            'pants':15,
            'dress':18,
            'outerwear':21,
            'bags':27
        }

        product_type = ''

        for row in reader:
            if(row['parent_child'] == 'parent'):

                if(row['feed_product_type'].lower() in [*type_id]):
                    for key in type_id:
                        if(row['feed_product_type'].lower() == key):
                            product_type = type_id[key]
                if(not(product_type)):
                    raise barcode.EmptyFieldWarning('product_type')
                values = [product_type, '1', '1']

                Data[row['item_sku']] = SortedDict(zip(column_names, values))

            if(row['parent_child'] == 'child' and row['parent_sku'] in [*Data]):
                for key in column_names:
                    if(not(Data[ row[ 'parent_sku' ] ][ key ])):
                        try:
                            Data[ row[ 'parent_sku' ] ][ key ] = row[ key ]
                        except Exception as err:
                            print(err)

    return Data

def featureUpload(flatfile, features, folder):

    column_names = [
                        'Variation.number', 'VariationEigenschaften.id',
                        'VariationEigenschaften.cast', 'VariationEigenschaften.linked',
                        'VariationEigenschaften.value'
                   ]

    Data = {}

    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter = ';')

        for row in reader:
            if(row['parent_child'] == 'child'):
                for feature in features:
                    if(row['item_sku'] == '101012000221'):
                        print("1. Feature: {0}, value: {1}".format(feature, row[feature]))
                    if(feature in [*row]):
                        if(row['item_sku'] == '101012000221'):
                            print("2. Feature: {0}, value: {1}".format(feature, row[feature]))
                        if(row[feature]):
                            if(row['item_sku'] == '101012000221'):
                                print("3. Feature: {0}, value: {1}".format(feature, row[feature]))
                            values = [
                                        row['item_sku'], features[feature],
                                        '1', '1',
                                        row[feature]
                                    ]

                            Data[row[ 'item_sku' ] + feature] = dict(zip(column_names, values))
                    else:
                        print("The feature:\t{0}\twas not found, in the flatfile!\n".format(feature))

        if(Data):
            barcode.writeCSV(dataobject=Data, name="features".upper(), columns=column_names, upload_path=folder)
