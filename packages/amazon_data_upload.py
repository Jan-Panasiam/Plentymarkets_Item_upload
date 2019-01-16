import csv
from os.path import isfile
import sys
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
        writer = csv.DictWriter(item, delimiter=";", fieldnames=columns)
        writer.writeheader()
        for row in dataobject:
            writer.writerow(dataobject[row])

    if(isfile(output_path)):
        print("Upload file successfully created under {0}".format(output_path))

    return output_path


def amazon_sku_upload(flatfile, export):

	column_names=['VariationID','MarketID','MarketAccountID','SKU','ParentSKU']
	Data = SortedDict()

	with open(export, mode='r') as item:
		reader = csv.DictReader(item, delimiter=';')
		item_number = 1
		for row in reader:
			if(row['VariationID']):
				values=[row['VariationID'],'4','0','','']
				Data[row['VariationNumber']]=SortedDict(zip(column_names,values))

	with open(flatfile, mode='r') as item:
		reader = csv.DictReader(item, delimiter=';')
		for row in reader:
			if(row['item_sku'] in [*Data]):
				Data[row['item_sku']]['SKU'] = row['item_sku']
				Data[row['item_sku']]['ParentSKU'] = row['parent_sku']

	output_path = writeCSV(Data, 'sku_amazon', column_names)