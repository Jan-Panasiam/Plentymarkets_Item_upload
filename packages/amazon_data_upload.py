import csv
from os.path import isfile
from packages import barcode
try:
    from sortedcontainers import SortedDict
except ImportError:
    print("the sortedcontainers module is required to run this program.")
    raise ImportError


def amazonSkuUpload(flatfile):

    column_names = ['MarketID', 'MarketAccountID',
                    'SKU', 'ParentSKU']

    # Define constant values
    marketid = 104  # Amazon FBA Germany
    accountid = 0   # bkkasia.germany@gmail.com

    Data = SortedDict()

    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=';')
        for row in reader:
            values = [marketid, accountid,
                      row['item_sku'], row['parent_sku']]
            Data[row['item_sku']] = SortedDict(zip(column_names, values))

    return Data


def amazonDataUpload(flatfile):

    column_names = ['ItemAmazonProductType',
                    'ItemAmazonFBA',
                    'ItemShippingWithAmazonFBA']

    Data = SortedDict()

    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=";")

        type_id = {
            'accessory': 28,
            'shirt': 13,
            'pants': 15,
            'dress': 18,
            'outerwear': 21,
            'bags': 27,
            'furnitureanddecor': 4,
            'bedandbath': 3,
            'swimwear': 30
        }

        values = ''
        product_type = ''

        for row in reader:
            # go through the variations until the values are filled
            if(row['feed_product_type'].lower() in [*type_id]):
                for key in type_id:
                    if(row['feed_product_type'].lower() == key):
                        product_type = type_id[key]
            else:
                print("ERROR @ product type in AmazonData: {0} not in {1}"
                      .format(row['feed_product_type'],
                              ",".join([*type_id])))

            if(not(product_type) and not(row['feed_product_type'])):
                raise barcode.EmptyFieldWarning('product_type')

            values = [product_type, '1', '1']

            Data[row['item_sku']] = SortedDict(zip(column_names, values))

    return Data


def featureUpload(flatfile, features, folder, filename):

    column_names = [
                        'Variation.number', 'VariationEigenschaften.id',
                        'VariationEigenschaften.cast',
                        'VariationEigenschaften.linked',
                        'VariationEigenschaften.value'
                   ]

    Data = {}

    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter = ';')

        for row in reader:
            if(row['parent_child'] == 'child'):
                for feature in features:
                    if(feature in [*row]):
                        if(row[feature]):
                            values = [
                                        row['item_sku'], features[feature],
                                        '1', '1',
                                        row[feature]
                                    ]

                            Data[row[ 'item_sku' ] + feature] = dict(zip(column_names, values))

        if(Data):
            barcode.writeCSV(dataobject=Data,
                             name="features".upper(),
                             columns=column_names,
                             upload_path=folder,
                             item=filename)
