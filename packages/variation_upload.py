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
    output_path = "Upload/" + name + "_upload_" + str(output_path_number) + datatype

    while(isfile(output_path)):
        output_path_number = int(output_path_number) + 1
        output_path = "Upload/" + name + "_upload_" + str(output_path_number) + datatype

    with open(output_path, mode='a') as item:
        writer = DictWriter(item, delimiter=";", fieldnames=columns)
        writer.writeheader()
        for row in dataobject:
            writer.writerow(dataobject[row])

    if(isfile(output_path)):
        print("Upload file successfully created under {0}".format(output_path))

    return output_path


def variationUpload(flatfile, intern_number):

    # The column header names
    names = ['ItemID', 'VariationID', 'VariationNumber', 'VariationName', 'Position', 'LengthMM', 'WidthMM', 'HeightMM', 'WeightG', 'VariationAttributes', 'PurchasePrice', 'MainWarehouse', 'Availability', 'AutoStockVisible']

    # create a Data Dictionary and fill it with the necessary values from the flatfile
    Data = SortedDict()

    with open(flatfile, mode='r') as item:
        reader = DictReader(item, delimiter=";")
        for row in reader:
            if(row['parent_child'] == 'parent'):
                item_name = row['item_name']
            if(row['parent_child'] == 'child'):
                try:
                    if(row['package_height'] and row['package_length'] and row['package_width']):
                        row['package_height'] = int(row['package_height'])
                        row['package_length'] = int(row['package_length'])
                        row['package_width'] = int(row['package_width'])
                except ValueError as err:
                    row['package_height'] = int(float(row['package_height']))
                    row['package_length'] = int(float(row['package_length']))
                    row['package_width'] = int(float(row['package_width']))
                except ValueError as err:
                    print(err)
                    print("/nPlease copy the values for height, length, width and weight\nfrom the children to the parent variation in the flatfile.\n")
                    exit()

                if(row['color_name']):
                    attributes = 'color_name:' + row['color_name']
                if(row['size_name']):
                    attributes += ';size_name:' + row['size_name']
                if(row['outer_material_type']):
                    attributes += ';material_name:' + row['outer_material_type']
                if('pattern' in [*row] and row['pattern']):
                    attributes += ';pattern:' + row['pattern']
                try:
                    values = ['', '', row['item_sku'], item_name, '', int(row['package_length']) * 10, int(row['package_width']) * 10, int(row['package_height']) * 10, row['package_weight'], attributes, row['standard_price'], 'Badel', 'Y', 'Y']
                except Exception as err:
                    print(err)
                    exit()
                Data[row['item_sku']] = SortedDict(zip(names, values))

    # open the intern numbers csv and fill in the remaining missing fields by using the item_sku as dict key
    with open(intern_number, mode='r') as item:
        reader = DictReader(item, delimiter=';')
        for row in reader:
            # check if the sku is within the keys of the Data Dictionary
            if(row['amazon_sku'] in [*Data]):
                Data[row['amazon_sku']]['ItemID'] = row['article_id']
                Data[row['amazon_sku']]['VariationID'] = row['full_number']
                if(not(row['position'] == 0)):
                    Data[row['amazon_sku']]['Position'] = row['position']

    output_path = writeCSV(Data, 'variation', names)

    return output_path


def setActive(flatfile, export):
    # because of a regulation of the plentyMarkets system the active status has to be delivered as an extra upload
    column_names = ['Active', 'ItemID', 'VariationID', 'VariationNumber']
    Data = {}
    # open the flatfile to get the sku names
    with open(flatfile, mode='r') as item:
        reader = DictReader(item, delimiter=';')

        for row in reader:
            values = ['Y', '', '', row['item_sku']]
            Data[row['item_sku']] = dict(zip(column_names, values))

    with open(export, mode='r') as item:
        reader = DictReader(item, delimiter=';')
        for row in reader:
            if(row['VariationNumber'] in [*Data]):
                Data[row['VariationNumber']]['ItemID'] = row['ItemID']
                Data[row['VariationNumber']]['VariationID'] = row['VariationID']
    output_path = writeCSV(Data, 'active', column_names)


def EANUpload(flatfile, export):
    # open the flatfile get the ean for an sku and save it into a dictionary with columnheaders of the plentymarket dataformat
    column_names = ['BarcodeID', 'BarcodeName', 'BarcodeType', 'Code', 'VariationID', 'VariationNumber']
    Data = {}
    with open(flatfile, mode='r') as item:
        reader = DictReader(item, delimiter=";")

        for row in reader:
            values = ['3', 'UPC', 'UPC', row['external_product_id'], '', row['item_sku']]
            Data[row['item_sku']] = dict(zip(column_names, values))

    # open the exported file to get the variation id
    with open(export, mode='r') as item:
        reader = DictReader(item, delimiter=";")

        for row in reader:
            if(row['VariationNumber'] in [*Data]):
                Data[row['VariationNumber']]['VariationID'] = row['VariationID']

    output_path = writeCSV(Data, 'EAN', column_names)
