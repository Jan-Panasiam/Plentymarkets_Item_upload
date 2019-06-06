from csv import DictReader
try:
    from sortedcontainers import SortedDict
except ImportError:
    print("the sortedcontainers module is required to run this program.")
    raise ImportError


def priceUpload(flatfile):
    # The column header names
    column_names = ['price', 'ebay', 'amazon', 'webshop', 'etsy']

    prices = {
        'price':{'id':'1', 'value':''},
        'ebay':{'id':'3', 'value':''},
        'amazon':{'id':'4', 'value':''},
        'webshop':{'id':'5', 'value':''},
        'etsy':{'id':'6', 'value':''}
    }

    # create a Data Dictionary and fill it with the necessary values from the
    # flatfile
    Data = SortedDict()

    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
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
                    if(prices[ price ]['id'] == '6'):
                        # Etsy price calculation
                        prices[ price ]['value'] = ( int( round( float( row['standard_price'] ) + (float( row['standard_price'] ) * 0.1) ) ) - 0.15 )
                    else:
                        prices[ price ]['value'] = row['standard_price']
                values = [prices['price']['value'], prices['ebay']['value'],
                            prices['amazon']['value'], prices['webshop']['value'],
                            prices['etsy']['value']]

                Data[row['item_sku']] = SortedDict(zip(column_names, values))
            else:
                print("{0} doesn't have a price!\n".format(row['item_sku']))

    return Data
