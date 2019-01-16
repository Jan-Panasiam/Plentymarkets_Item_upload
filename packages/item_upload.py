from csv import DictReader, DictWriter
from os.path import isfile
from sys import exit
try:
    from sortedcontainers import SortedDict
except ImportError:
    print("the sortedcontainers module is required to run this program.")
    raise ImportError


def itemUpload(filepath, intern_number):
    # The column headers for the output file as expected from the plentymarkets dataformat
    column_names_output = ['CategoryLevel1Name', 'CategoryLevel2Name', 'CategoryLevel3Name', 'CategoryLevel4Name', 'CategoryLevel5Name', 'CategoryLevel6Name', 'ItemID', 'PrimaryVariationCustomNumber', 'PrimaryVariationLengthMM', 'PrimaryVariationWidthMM', 'PrimaryVariationHeightMM', 'PrimaryVariationWeightG', 'PrimaryVariationName', 'PrimaryVariationPurchasePrice', 'ItemImageURL', 'PrimaryVariationMainWarehouse', 'ItemOriginCountry', 'ItemProducer', 'ItemProducerID', 'ItemTextName', 'ItemTextDescription']

    # default values: CategoryLevel5Name : '' , CategoryLevel6Name : '', ItemOriginCountry : '62' , ItemProducer : 'PANASIAM', ItemProducerID : '3'

    # Unpack File and scrap data
    # INPUT
    # --------------------------------------------------------------
    Data = SortedDict()

    with open(filepath, mode='r') as item:
        reader = DictReader(item, delimiter=";")
        for row in reader:
            # if the item is a parent scrap the name and the desc from the flatfile
            if(row['parent_child'] == 'parent'):
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
                try:
                    values = ['', '', '', '', '', '', '', row['item_sku'], row['package_length'] * 10, row['package_width'] * 10, row['package_height'] * 10, row['package_weight'], row['item_name'], row['standard_price'], row['main_image_url'], 'Badel', '62', 'PANASIAM', '3', '', row['product_description']]
                except Exception as err:
                    print(err)
                Data[row['item_sku']] = SortedDict(zip(column_names_output, values))

    # open the intern number csv to get the item ID
    with open(intern_number, mode='r') as item:
        reader = DictReader(item, delimiter=";")
        for row in reader:
            if(row['amazon_sku'] in [*Data]):
                Data[row['amazon_sku']]['ItemID'] = row['article_id']

    # Write Data into new CSV for Upload
    # OUTPUT
    # --------------------------------------------------------------

    output_path_number = 1
    datatype = ".csv"
    output_path = "Upload/item_upload_" + str(output_path_number) + datatype

    while(isfile(output_path)):
        output_path_number = int(output_path_number) + 1
        output_path = "Upload/item_upload_" + str(output_path_number) + datatype

    with open(output_path, mode='a') as item:
        writer = DictWriter(item, delimiter=";", fieldnames=column_names_output)
        writer.writeheader()
        for row in Data:
            writer.writerow(Data[row])

    if(isfile(output_path)):
        print("Upload file successfully created under {0}".format(output_path))

    return output_path
