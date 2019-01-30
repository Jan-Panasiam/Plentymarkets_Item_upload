

from csv import DictReader, DictWriter
from os.path import isfile
from variation_upload import writeCSV
try:
    from sortedcontainers import SortedDict
except ImportError:
    print("the sortedcontainers module is required to run this program.")
    raise ImportError


def stockUpload(flatfile, stocklist):

    # The column header names
    column_names = ['Barcode', 'LocationID', 'LocationName', 'Reordered',
                    'ReservedStock', 'Stock', 'WarehouseID']

    # create a Data Dictionary and fill it with the necessary values from the
    # flatfile
    Data = SortedDict()

    with open(flatfile, mode='r') as item:
        reader = DictReader(item, delimiter=";")
        for row in reader:
            if(row['external_product_id']):
                values = [row['external_product_id'], 0, 'StandarWarenlager',
                          '', '', '', '104']
                Data[row['item_sku']] = SortedDict(zip(column_names, values))

    with open(stocklist, mode='r') as item:
        reader = DictReader(item, delimiter=";")
        for row in reader:
            if(row['MASTER'] and row['MASTER'] in [*Data]):
                Data[row['MASTER']]['Stock'] = row['BADEL 26.12.16']

    output_path = writeCSV(Data, 'stock', column_names)


def priceUpload(flatfile, export):
    # The column header names
    column_names = ['VariationID', 'IsNet', 'VariationPrice', 'SalesPriceID']

    # create a Data Dictionary and fill it with the necessary values from the
    # flatfile
    Data = SortedDict()

    with open(flatfile, mode='r') as item:
        reader = DictReader(item, delimiter=";")
        for row in reader:
            if(row['external_product_id']):
                values = ['', 0, row['standard_price'], 1]
                Data[row['item_sku']] = SortedDict(zip(column_names, values))

    with open(export, mode='r') as item:
        reader = DictReader(item, delimiter=";")
        for row in reader:
            if(row['VariationNumber'] in [*Data]):
                Data[row['VariationNumber']]['VariationID'] = row['VariationID']

    output_path = writeCSV(Data, 'price', column_names)
