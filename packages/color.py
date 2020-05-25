"""
    Author: Sebastian Fricke
    License: GPL v3
    Company: Panasiam

    Process colors unknown for plentymarkets, by providing a list of similar
    values and uploading new values.
"""
import csv
import re
import sys
from packages import barcode, error


def missing_color(flatfile, attributefile):
    """
        Detect any color names that are not found on PlentyMarkets.
        Generate a list of similar color names and find the highest
        position number of the color attributes.

        Parameters:
            flatfile [csv] - Amazon Flatfile format of product data
            attributefile [csv] - Plentymarkets Export with the values:
                * AttributeValue.position
                * AttributeValue.backendName

        Return:
            missing_colors [dict] - mapped similar names and highest position
                                    for each new color
    """
    color_list = set()
    missing_colors = dict()
    # Get the highest position number
    highest_number = int(0)

    with open(attributefile['path'], mode='r',
              encoding=attributefile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=';')

        for row in reader:
            try:
                if int(row['AttributeValue.position']) > highest_number:
                    highest_number = int(row['AttributeValue.position'])
                color_list.add(row['AttributeValue.backendName'])
            except KeyError as err:
                error.errorPrint(msg="invalid attribute file", err=err,
                                 linenumber=sys.exc_info()[2].tb_lineno)

    missing_colors_columns = ['color_name', 'similar_names',
                              'highest-position']

    # Open the flatfile to check which names are not in the color_list
    with open(flatfile['path'], mode='r',
              encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=';')

        color_set = set()
        for num, row in enumerate(reader):
            color_name = row['color_name']
            if not color_name in color_list and not color_name in color_set:
                color_set.add(color_name)
                values = [color_name, [], highest_number]
                missing_colors[str(num)] =\
                    dict(zip(missing_colors_columns, values))

    # Open the attribute file to check for similar names to the missing ones
    with open(attributefile['path'], mode='r',
              encoding=attributefile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=';')

        for row in reader:
            for color in missing_colors:
                try:
                    if(re.search(missing_colors[color]['color_name'][1:],
                                 row['AttributeValue.backendName'])):
                        missing_colors[color]['similar_names'].append(
                            row['AttributeValue.backendName'])
                except KeyError as err:
                    error.errorPrint(msg="invalid attribute file", err=err,
                                     linenumber=sys.exc_info()[2].tb_lineno)

    return missing_colors

def create_attributesync(color_dict, path):
    """
        Create a Elastic Sync (import) file for Plentymarkets.

        Parameters:
            color_dict [dict] - Combination of a new color name and
                                it's position within the attributes
            path [str] - Path of the Upload folder
    """
    column_names = ['Attribute.id', 'AttributeValue.backendName',
                    'AttributeValue.position', 'AttributeValueName.name']

    data = {}
    values = []

    for index, row in enumerate(color_dict):
        values = [
            '4', color_dict[row]['color_name'],
            int(float(color_dict[row]['highest-position'])) + int(index + 1),
            color_dict[row]['color_name']
        ]

        data[color_dict[row]['color_name']] = dict(zip(column_names, values))

    barcode.writeCSV(dataobject=data, name="Color_Sync",
                     columns=column_names, upload_path=path, item="")
