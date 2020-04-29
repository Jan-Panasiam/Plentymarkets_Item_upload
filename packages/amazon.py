import csv
import pandas
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


def get_producttype_id(source, sku):
    """
        Parameter:
            source [Dictionary] => dictionary of the flatfile
                                   with path and encoding
            sku [String]    =>     String of the product sku

        Description:
            Search for a matching term in mapping list of valid
            amazon producttype names and their ID.

        Return:
            [Integer]
            value from type_id on success
            0 on failure
    """
    type_id = {
        'accessory': 28,
        'shirt': 13,
        'pants': 15,
        'dress': 18,
        'outerwear': 21,
        'bag': 27,
        'furnitureanddecor': 4,
        'bedandbath': 3,
        'swimwear': 30
    }

    df = pandas.read_csv(source['path'],
                         sep=';',
                         encoding=source['encoding'])

    sku_df = df[df['item_sku'] == sku]
    if len(sku_df.index) == 0:
        error.warnPrint(msg=str(f"{sku} not found in flatfile"), err='',
                        linenumber=inspect.currentframe().f_back.f_lineno)
        return 0

    if sku_df.filter(like='product_type', axis=1).empty:
        msg=str("wrong header: ..{0} requires a product_type column"
                .format(source['path'][-21:]))
        error.warnPrint(
            msg=msg, err='',
            linenumber=inspect.currentframe().f_back.f_lineno)
        return 0

    value = sku_df.filter(like='product_type', axis=1)\
        .to_string(na_rep='', index=False, header=False)\
        .lower().strip(' ')

    if not value:
        return 0

    if value in type_id.keys():
        return type_id[value]

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
