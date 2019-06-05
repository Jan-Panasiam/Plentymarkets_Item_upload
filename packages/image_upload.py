import csv
from sortedcontainers import SortedDict
import re
import sys

def searchSpecialImage(image):
    if(re.search(r'( SWATCH|SIZE )', image)):
        return True
    else:
        return False

def getColorAttributeID(attributefile, product):

    attributeid = ''
    with open(attributefile['path'], mode = 'r', encoding = attributefile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=';')

        try:
            for row in reader:
                if(row['AttributeValue.backendName'] == product['color_name']):
                    attributeid = row['AttributeValue.id']
            if(not( attributeid )):
                print("For SKU : {0}, Color : {1} not found!\n".format(product['item_sku'], product['color_name']))
        except Exception as err:
            print("ERROR @ Color ID search: line: {0}, err: {1}".format(sys.exc_info()[2].tb_lineno, err))

    return attributeid


def imageUpload(flatfile, attributefile):

    try:
        Data = SortedDict()

        column_names = ['Multi-URL', 'connect-variation', 'mandant',
                        'availability', 'listing', 'connect-color']
        linkstring = ''
        attributeID = ''

        with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
            reader = csv.DictReader(item, delimiter=';')
            for index, row in enumerate( reader ):
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
                try:
                    if(imglinks[0]):
                        for img in imglinks:
                            if(not(searchSpecialImage(img))):
                                if(not(linkstring)):
                                    linkstring += img + ';' + str( num )
                                    num += 1
                                else:
                                    linkstring += ',' + img + ';' + str( num )
                                    num += 1
                            if(searchSpecialImage(img)):
                                print("\n{0} is a special image\n".format(img))
                                if(not(linkstring)):
                                    linkstring += img + ';' + str( num )
                                    num += 1
                                else:
                                    linkstring += ',' + img + ';' + str( num )
                                    num += 1


                except Exception as err:
                    print("Error @ linkstring building line no: {0} : {1}".format(sys.exc_info()[2].tb_lineno, err))

                try:
                    attributeID = getColorAttributeID(attributefile=attributefile, product=row)
                except Exception as err:
                    print("Error @ get Color Attribute ID {0}\n".format(err))


                values=[linkstring, 1, -1,
                        -1, -1, attributeID]

                Data[row['item_sku']] = dict(zip(column_names, values))

    except Exception as err:
        print("Error @ imageupload line: {0} : {1}".format(sys.exc_info()[2].tb_lineno, err))

    return Data
