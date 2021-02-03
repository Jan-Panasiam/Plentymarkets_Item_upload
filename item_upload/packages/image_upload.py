import csv
import re
import pandas
import sys
import inspect
from item_upload.packages import item_upload, barcode

from loguru import logger

def searchSpecialImage(image):
    return bool(re.search(r'( SWATCH|SIZE )', image))


def get_variation_id(exportfile, sku):
    """
        Parameter:
            exportfile [String] => Url of the plentymarkets export
                                   from the config
            sku [String] => Sku from the flatfile for matching

        Description:
            Check if the export has the correct header and retrieve
            the Variation ID of the matching SKU

        Return:
            [String] => The variation number
            0 => Failed to retrieve value
    """
    exp = pandas.read_csv(exportfile,
                          sep=';')

    if len(exp.index) == 0:
        logger.warning("exp is empty, skip variation ID")
        return 0

    if(len(exp.columns[exp.columns.str.contains(pat='Variation.id')]) == 0 or
       len(exp.columns[exp.columns.str.contains(pat='Variation.number')]) == 0):
        logger.warning("Exportfile requires fields 'Variation.id'&'"
                       "Variation.number'")
        return 0

    variation = exp[exp['Variation.number'] == sku]
    if len(variation.index) == 0:
        logger.warning(f"{sku} not found in Plentymarkets export")
        return 0

    return variation['Variation.id'].values.max()


def getColorAttributeID(attributefile, product):

    attributeid = ''
    with open(attributefile['path'],
              mode='r', encoding=attributefile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=';')

        try:
            for row in reader:
                if row['AttributeValue.backendName'] == product['color_name']:
                    attributeid = row['AttributeValue.id']
            if not attributeid:
                logger.warning(f"Color{product['color_name']} not in "
                               f"{product['item_sku']}\n")
        except KeyError as err:
            logger.error("key not found in attribute file")

    return attributeid


def imageUpload(flatfile, attributefile, exportfile, uploadfolder, filename):

    data = dict()

    column_names = ['VariationID', 'Multi-URL', 'connect-variation', 'mandant',
                    'listing', 'connect-color']
    attribute_id = ''
    variation_id = 0

    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=';')
        for index, row in enumerate(reader):
            linkstring = ''
            imglinks = [
                row['main_image_url'],
                row['other_image_url1'],
                row['other_image_url2'],
                row['other_image_url3'],
                row['other_image_url4'],
                row['other_image_url5'],
                row['other_image_url6'],
                row['other_image_url7'],
                row['other_image_url8']
            ]

            num = 1
            variation_id = get_variation_id(
                exportfile=exportfile, sku=row['item_sku'])
            try:
                if not imglinks[0]:
                    break
                for img in [i for i in imglinks if i]:
                    if not searchSpecialImage(img):
                        if not linkstring:
                            linkstring += f"{img};{str(num)}"
                            num += 1
                            continue
                        linkstring += f",{img};{str(num)}"
                        num += 1
                        continue
                    print(f"\n{img} is a special image\n")
                    if not linkstring:
                        linkstring += f"{img};{str(num)}"
                        num += 1
                        continue
                    linkstring += f",{img};{str(num)}"
                    num += 1


            except Exception as err:
                logger.error("Link string building failed")

            try:
                attribute_id = getColorAttributeID(
                    attributefile=attributefile, product=row)
            except Exception as err:
                logger.warning(f"get attr ID of color {row['color_name']} failed")


            values = [variation_id, linkstring, 1, -1,
                        -1, attribute_id]

            data[row['item_sku']] = dict(zip(column_names, values))


    barcode.writeCSV(dataobject=data, name='Image_', columns=column_names,
                     upload_path=uploadfolder, item=filename)
    return data
