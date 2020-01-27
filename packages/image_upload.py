import csv
import re
import sys
import inspect
from sortedcontainers import SortedDict
from packages import item_upload, barcode, error

def searchSpecialImage(image):
    return bool(re.search(r'( SWATCH|SIZE )', image))

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
                warn =\
                    f"Color{product['color_name']} not in {product['item_sku']}\n"
                error.warnPrint(
                    msg=warn,
                    linenumber=inspect.currentframe().f_back.f_lineno)
        except KeyError as err:
            error.errorPrint(
                msg="key not found in attribute file",
                err=err,
                linenumber=sys.exc_info()[2].tb_lineno)

    return attributeid


def imageUpload(flatfile, attributefile, exportfile, uploadfolder, filename):

    try:
        data = SortedDict()

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
                variation_id = item_upload.getVariationId(
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
                    error.errorPrint(msg="Link string building failed",
                                     err=err,
                                     linenumber=sys.exc_info()[2].tb_lineno)

                try:
                    attribute_id = getColorAttributeID(
                        attributefile=attributefile, product=row)
                except Exception as err:
                    error.warnPrint(
                        msg=f"get attr ID of color {row['color_name']} failed",
                        linenumber=inspect.currentframe().f_back.f_lineno,
                        err=err)


                values = [variation_id, linkstring, 1, -1,
                          -1, attribute_id]

                data[row['item_sku']] = dict(zip(column_names, values))

    except Exception as err:
        error.errorPrint(
            msg=f"flatfile read failed on index:{index}",
            err=err,
            linenumber=sys.exc_info()[2].tb_lineno)

    barcode.writeCSV(dataobject=data, name='Image_', columns=column_names,
                     upload_path=uploadfolder, item=filename)
    return data
