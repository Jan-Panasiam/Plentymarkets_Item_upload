import csv
from os.path import isfile
import sys
from packages import variation_upload
try:
    from sortedcontainers import SortedDict
except ImportError:
    print("the sortedcontainers module is required to run this program.")
    raise ImportError


def amazonSkuUpload(flatfile, export, folder):

    column_names = ['VariationID', 'MarketID',
                    'MarketAccountID', 'SKU', 'ParentSKU']
    Data = SortedDict()

    with open(export['path'], mode='r', encoding=export['encoding']) as item:
        reader = csv.DictReader(item, delimiter=';')
        item_number = 1
        for row in reader:
            if(row['VariationID']):
                values = [row['VariationID'], '104', '0', '', '']
                Data[row['VariationNumber']] = SortedDict(
                    zip(column_names, values))

    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=';')
        for row in reader:
            if(row['item_sku'] in [*Data]):
                Data[row['item_sku']]['SKU'] = row['item_sku']
                Data[row['item_sku']]['ParentSKU'] = row['parent_sku']

    output_path = variation_upload.writeCSV(Data, 'VariationSKUListe', column_names, folder)


def amazonDataUpload(flatfile, export, folder):

    column_names = [
                        'ItemAmazonProductType', 'ItemAmazonFBA',
                        'ItemID','ItemShippingWithAmazonFBA'
                   ]

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
                    raise variation_upload.EmptyFieldWarning('product_type')
                values = [product_type, '1',
                          '0','1']

                Data[row['item_sku']] = SortedDict(zip(column_names, values))

            if(row['parent_child'] == 'child' and row['parent_sku'] in [*Data]):
                for key in column_names:
                    if(not(Data[ row[ 'parent_sku' ] ][ key ])):
                        try:
                            Data[ row[ 'parent_sku' ] ][ key ] = row[ key ]
                        except Exception as err:
                            print(err)


    with open(export['path'], mode='r', encoding=export['encoding']) as item:
        reader = csv.DictReader(item, delimiter=";")

        for row in reader:
            if(row['VariationNumber'] in [*Data]):
                Data[row['VariationNumber']]['ItemID'] = row['ItemID']

    variation_upload.writeCSV(dataobject=Data, name='amazon_data', columns=column_names, upload_path=folder)


def asinUpload(export, stock, folder):

    column_names = ['ASIN', 'MarketplaceCountry', 'Position', 'VariationID']

    Data = {}

    with open(export['path'], mode='r', encoding=export['encoding']) as item:
        reader = csv.DictReader(item, delimiter=';')

        for row in reader:
            if row['VariationID']:
                values = [ '', '1', '0', row['VariationID'] ]

                Data[row['VariationNumber']] = dict(zip(column_names, values))

    with open(stock['path'], mode='r', encoding=stock['encoding']) as item:
        reader = csv.DictReader(item, delimiter=';')

        for row in reader:
            if row['MASTER'] in [*Data]:
                Data[row['MASTER']]['ASIN'] = row['asin']
    variation_upload.writeCSV(dataobject=Data, name='asin', columns=column_names, upload_path=folder)

def featureUpload(flatfile, feature, feature_id, folder):

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
                if(feature in [*row]):
                    if(row[feature]):
                        values = [
                                    row['item_sku'], feature_id,
                                    '1', '1',
                                    row[feature]
                                 ]

                        Data[row[ 'item_sku' ]] = dict(zip(column_names, values))
                else:
                    print("The feature:\t{0}\twas not found, in the flatfile!\n".format(feature))

        if(Data):
            variation_upload.writeCSV(dataobject=Data, name=feature.upper(), columns=column_names, upload_path=folder)
