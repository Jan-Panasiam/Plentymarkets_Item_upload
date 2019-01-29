

from csv import DictReader, DictWriter
from os.path import isfile
try:
    from sortedcontainers import SortedDict
except ImportError:
    print("the sortedcontainers module is required to run this program.")
    raise ImportError


def writeCSV(dataobject, name, columns):
    '''Write Data into new CSV for Upload
        OUTPUT
    '''

    output_path_number = 1
    datatype = ".csv"
    output_path = "Upload/" + name + "_upload_" + \
        str(output_path_number) + datatype

    while(isfile(output_path)):
        output_path_number = int(output_path_number) + 1
        output_path = "Upload/" + name + "_upload_" + \
            str(output_path_number) + datatype

    with open(output_path, mode='a') as item:
        writer = DictWriter(item, delimiter=";", fieldnames=columns)
        writer.writeheader()
        for row in dataobject:
            writer.writerow(dataobject[row])

    if(isfile(output_path)):
        print("Upload file successfully created under {0}".format(output_path))

    return output_path


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
