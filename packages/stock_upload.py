

from csv import DictReader, DictWriter
from os.path import isfile
from packages import variation_upload
try:
    from sortedcontainers import SortedDict
except ImportError:
    print("the sortedcontainers module is required to run this program.")
    raise ImportError


def stockUpload(flatfile, stocklist, folder):

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

    output_path = variation_upload.writeCSV(Data, 'stock', column_names, folder)


def priceUpload(flatfile, export, folder):
    # The column header names
    column_names = ['VariationID', 'IsNet', 'VariationPrice', 'SalesPriceID']

    prices = {
        'price':{'id':'1', 'value':''},
        'ebay':{'id':'3', 'value':''},
        'amazon':{'id':'4', 'value':''},
        'webshop':{'id':'5', 'value':''}
    }

    # create a Data Dictionary and fill it with the necessary values from the
    # flatfile
    Data = SortedDict()

    with open(flatfile, mode='r') as item:
        reader = DictReader(item, delimiter=";")
        for row in reader:
            # Make sure that there is price even at parents
            if(not( row['standard_price'] )):
                print("row:{0} doesnt have a price!".format(row['item_sku']))
                for scndrow in reader:
                    if(row['parent_child'] == 'parent'):
                        if(scndrow['parent_child'] == 'child' and scndrow['standard_price'] and row['item_sku'] == scndrow['parent_sku']):
                            row['standard_price'] = scndrow['standard_price']
                            break
                    elif(row['parent_child'] == 'child'):
                        if(scndrow['parent_child'] == 'child' and scndrow['standard_price'] and row['parent_sku'] == scndrow['parent_sku']):
                            row['standard_price'] = scndrow['standard_price']
                            break
            if(row['standard_price']):
                for price in prices:
                    if(prices[ price ]['id'] == '3'):
                        # Ebay price calculation
                        prices[ price ]['value'] = ( int( round( float( row['standard_price'] ) - (float( row['standard_price'] ) * 0.10) ) ) - 0.05 )
                    if(prices[ price ]['id'] == '5'):
                        # Webshop price calculation
                        prices[ price ]['value'] = ( int( round( float( row['standard_price'] ) - (float( row['standard_price'] ) * 0.16666666) ) ) - 0.05 )
                    else:
                        prices[ price ]['value'] = row['standard_price']
                    values = ['', 0, prices[ price ]['value'], prices[ price ]['id']]

                    print("row:{0}, id:{1}, value:{2}".format(row['item_sku'], prices[price]['id'], prices[price]['value']))
                    Data[row['item_sku'] + '_' + price] = SortedDict(zip(column_names, values))
            else:
                print("{0} doesn't have a price!\n".format(row['item_sku']))

    with open(export, mode='r') as item:
        reader = DictReader(item, delimiter=";")
        for row in reader:
            for price in prices:
                if((row['VariationNumber'] + '_' + price) in [*Data]):
                    Data[row['VariationNumber'] + '_' + price]['VariationID'] = row['VariationID']

    # Open the flatfile again to check for items that didn't have variationID
    with open(flatfile, mode='r') as item:
        reader = DictReader(item,delimiter=';')
        for row in reader:
            for price in prices:
                sku_price = row['item_sku'] + '_' + price
                if(( sku_price ) in [*Data]):
                    if(not( Data[sku_price]['VariationID'] )):
                        print("sku: {0} has no VariationID!".format(row['item_sku']))
                        eraseKey(Data, sku_price)

    output_path = variation_upload.writeCSV(Data, 'SalesPriceVariation', column_names, folder)

def eraseKey(dictionary, key):
    if isinstance(dictionary, dict):
        if key in dictionary:
            dictionary.pop(key)
        else:
            print("Deletion failed {0} was not in the dictionary".format(key))
    else:
        print("Deletion failed for {0}".format(key))
