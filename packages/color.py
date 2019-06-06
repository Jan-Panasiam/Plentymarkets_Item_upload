import csv
import re
from packages import barcode


def missingColor(flatfile, attributefile):
    # check the attribute export from PlentyMarkets for similar color names
    #_____________________________
    color_list = set()
    missing_colors = dict()
    # Open the attribute file to get all color names
    # Get the highest position number
    highest_number = int(0)

    print('Inside missingcolor: {0}'.format(attributefile))
    with open(attributefile['path'], mode = 'r', encoding=attributefile['encoding']) as item:
        reader = csv.DictReader(item, delimiter=';')

        for row in reader:
            try:
                if(int(row['AttributeValue.position']) > highest_number):
                    highest_number = int(row['AttributeValue.position'])
            except KeyError as err:
                print("ERROR @ reading attribute file: {0}".format(err))
            if('AttributeValue.backendName' in [*row]):
                color_list.add(row['AttributeValue.backendName'])
            else:
                print("Wrong Columns in the attribute file!\n{0}\n".format(",".join([*row])))

    missing_colors_columns = ['color_name', 'similar_names', 'highest-position']

    # Open the flatfile to check which names are not in the color_list
    with open(flatfile['path'], mode='r', encoding=flatfile['encoding']) as item:
        reader = csv.DictReader(item, delimiter = ';')

        color_set = set()
        for num, row in enumerate( reader ):
            color_name = row['color_name']
            if(not( color_name in color_list ) and not(color_name in color_set)):
                color_set.add(color_name)
                values = [color_name, [], highest_number]
                missing_colors[str(num)] = dict(zip(missing_colors_columns, values))

    # Open the attribute file to check for similar names to the missing ones
    with open(attributefile['path'], mode = 'r', encoding=attributefile['encoding']) as item:
        reader = csv.DictReader(item, delimiter = ';')

        for row in reader:
            for color in missing_colors:
                try:
                    if(re.search( missing_colors[color]['color_name'][1:], row['AttributeValue.backendName'] )):
                        missing_colors[color]['similar_names'].append(row['AttributeValue.backendName'])
                except KeyError as err:
                    print("ERROR @ similar name search: {0}".format(err))

    '''
    for row in missing_colors:
        print("COLOR: {0}\n".format( missing_colors[row]['color_name'] ))
        for name in missing_colors[row]['similar_names']:
            print("similar to {0}: {1}".format(missing_colors[row]['color_name'], name))
    '''
    return missing_colors

def create_attributesync(color_dict, path):
    column_names = ['Attribute.id','AttributeValue.backendName','AttributeValue.position','AttributeValueName.name']

    Data = {}
    values = []

    for row in color_dict:
        try:
            values = ['4', color_dict[row]['color_name'], color_dict[row]['highest-position'], color_dict[row]['color_name']]
        except KeyError as err:
            print(color_dict[row])
            print("ERROR @ attribute sync creation: {0}".format(err))

        Data[color_dict[row]['color_name']] = dict(zip(column_names, values))

    barcode.writeCSV(dataobject=Data, name="Color_Sync", columns=column_names, upload_path=path)

