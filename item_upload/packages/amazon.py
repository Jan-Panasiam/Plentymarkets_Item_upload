import csv
import pandas
import inspect
from os.path import isfile

from loguru import logger

from item_upload.packages import barcode


def amazonSkuUpload(flatfile):

    column_names = ['MarketID', 'MarketAccountID',
                    'SKU', 'ParentSKU']

    # Define constant values
    marketid = 104  # Amazon FBA Germany
    accountid = 0   # bkkasia.germany@gmail.com

    Data = dict()

    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=';')
        for row in reader:
            values = [marketid, accountid,
                      row['item_sku'], row['parent_sku']]
            Data[row['item_sku']] = dict(zip(column_names, values))

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
