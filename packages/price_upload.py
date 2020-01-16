import inspect
from collections import OrderedDict
from csv import DictReader
from packages.item_upload import warnPrint, infoPrint


def priceUpload(flatfile):
    # The column header names for the output
    column_names = ['price', 'ebay', 'amazon', 'webshop', 'etsy']

    prices = {
        'price':{'id':'1', 'value':''},
        'ebay':{'id':'3', 'value':''},
        'amazon':{'id':'4', 'value':''},
        'webshop':{'id':'5', 'value':''},
        'etsy':{'id':'6', 'value':''},
        'cdiscount':{'id':'7', 'value':''}
    }

    # create a data Dictionary and fill it with the necessary values from the
    # flatfile
    data = OrderedDict()
    standard_price = 0
    variation_price = 0
    round_price = 0
    percent_diff = 0
    adjust = 0

    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = DictReader(item, delimiter=";")
        for row in reader:
            # Make sure that there is price even at parents
            if not row['standard_price']:
                warnPrint(f"row:{row['item_sku']} doesnt have a price!",
                          linenumber=inspect.currentframe().f_back.f_lineno,
                          err='')
                for scndrow in reader:
                    if row['parent_child'] == 'parent':
                        if scndrow['parent_child'] == 'child' and\
                                scndrow['standard_price'] and\
                                row['item_sku'] == scndrow['parent_sku']:
                            infoPrint(
                                "parent without price add:{0} from:{1} to:{2}"
                                .format(scndrow['standard_price'],
                                        scndrow['item_sku'],
                                        row['item_sku']))
                            standard_price = scndrow['standard_price']
                            break
                    elif row['parent_child'] == 'child':
                        if scndrow['parent_child'] == 'child' and\
                                scndrow['standard_price'] and\
                                row['parent_sku'] == scndrow['parent_sku']:
                            standard_price = scndrow['standard_price']
                            break

    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = DictReader(item, delimiter=";")

        for row in reader:
            if row['standard_price']:
                variation_price = row['standard_price']
            else:
                variation_price = standard_price
            for price in prices:
                if prices[price]['id'] == '3':
                    percent_diff = 0.10
                    adjust = 0.05
                if prices[price]['id'] == '5':
                    percent_diff = 0.166666666
                    adjust = 0.05
                if prices[price]['id'] == '6':
                    percent_diff = 0.1
                    adjust = 0.15
                if prices[price]['id'] == '7':
                    percent_diff = 0.2
                    adjust = 0.05
                else:
                    percent_diff = 0
                    adjust = 0

            round_price = round(float(variation_price)+\
                                (float(variation_price*percent_diff)))
            prices[price]['value'] = int(round_price)-adjust

            values = [prices['price']['value'], prices['ebay']['value'],
                      prices['amazon']['value'], prices['webshop']['value'],
                      prices['etsy']['value']]
            data[row['item_sku']] = OrderedDict(zip(column_names, values))

    return data
