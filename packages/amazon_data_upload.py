import csv
from os.path import isfile
import sys
from packages import variation_upload
try:
    from sortedcontainers import SortedDict
except ImportError:
    print("the sortedcontainers module is required to run this program.")
    raise ImportError


def amazonSkuUpload(flatfile, export):

    column_names = ['VariationID', 'MarketID',
                    'MarketAccountID', 'SKU', 'ParentSKU']
    Data = SortedDict()

    with open(export, mode='r') as item:
        reader = csv.DictReader(item, delimiter=';')
        item_number = 1
        for row in reader:
            if(row['VariationID']):
                values = [row['VariationID'], '4', '0', '', '']
                Data[row['VariationNumber']] = SortedDict(
                    zip(column_names, values))

    with open(flatfile, mode='r') as item:
        reader = csv.DictReader(item, delimiter=';')
        for row in reader:
            if(row['item_sku'] in [*Data]):
                Data[row['item_sku']]['SKU'] = row['item_sku']
                Data[row['item_sku']]['ParentSKU'] = row['parent_sku']

    output_path = variation_upload.writeCSV(Data, 'sku_amazon', column_names)


def amazonDataUpload(flatfile, export):

    column_names = ['ItemAmazonProductType', 'ItemAmazonFBA', 'bullet_point1',
                    'bullet_point2', 'bullet_point3', 'bullet_point4',
                    'bullet_point5', 'fit_type',
                    'lifestyle', 'batteries_required',
                    'supplier_declared_dg_hz_regulation1',
                    'supplier_declared_dg_hz_regulation2',
                    'supplier_declared_dg_hz_regulation3',
                    'supplier_declared_dg_hz_regulation4',
                    'supplier_declared_dg_hz_regulation5', 'ItemID',
                    'ItemShippingWithAmazonFBA']

    Data = SortedDict()

    with open(flatfile, mode='r') as item:
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

                values = [product_type, '1',
                          row['bullet_point1'], row['bullet_point2'],
                          row['bullet_point3'], row['bullet_point4'],
                          row['bullet_point5'], row['fit_type'],
                          row['lifestyle'], row['batteries_required'],
                          row['supplier_declared_dg_hz_regulation1'],
                          row['supplier_declared_dg_hz_regulation2'],
                          row['supplier_declared_dg_hz_regulation3'],
                          row['supplier_declared_dg_hz_regulation4'],
                          row['supplier_declared_dg_hz_regulation5'],
                          '','1']
                Data[row['item_sku']] = SortedDict(zip(column_names, values))

    with open(export, mode='r') as item:
        reader = csv.DictReader(item, delimiter=";")

        for row in reader:
            if(row['VariationNumber'] in [*Data]):
                Data[row['VariationNumber']]['ItemID'] = row['ItemID']

    variation_upload.writeCSV(dataobject=Data, name='amazon_data', columns=column_names)


def asinUpload(export, stock):

    column_names = ['ASIN', 'MarketplaceCountry', 'Position', 'VariationID']

    Data = {}

    with open(export, mode='r') as item:
        reader = csv.DictReader(item, delimiter=';')

        for row in reader:
            if row['VariationID']:
                values = [ '', '1', '0', row['VariationID'] ]

                Data[row['VariationNumber']] = dict(zip(column_names, values))

    with open(stock, mode='r') as item:
        reader = csv.DictReader(item, delimiter=';')

        for row in reader:
            if row['MASTER'] in [*Data]:
                Data[row['MASTER']]['ASIN'] = row['asin']

    variation_upload.writeCSV(dataobject=Data, name='asin', columns=column_names)

