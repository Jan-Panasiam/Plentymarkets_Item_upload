import csv
from sortedcontainers import SortedDict
import re
from os.path import isfile


def searchImage(imglink, itemid, variationid, variationlinks, target):

    existing = False
    blockEntry = False

    for row in target:
        if(target[row]['ItemImageUrl'] == imglink and
                target[row]['ItemImageItemID'] == itemid and
                (re.search(variationid, variationlinks))):

            existing = True
            blockEntry = True
            pass

        if(target[row]['ItemImageUrl'] == imglink and
                target[row]['ItemImageItemID'] == itemid and
                not(re.search(variationid, variationlinks))):

            existing = True
            if(target[row]['VariationLink'] and
                    not(re.search(variationid, target[row]['VariationLink']))):
                target[row]['VariationLink'] += ', ' + variationid

    if(not(existing)):

        variationlinks = str(variationid)

    return variationlinks, blockEntry


def imageUpload(flatfile, exportfile):
    # open the export file, scrap the important data and save it into an dictionary
    with open(exportfile, mode='r') as item:
        Data = {}
        reader = csv.DictReader(item, delimiter=';')
        names = ['variation_id', 'item_id']
        for row in reader:
            identification = row['VariationID'], row['ItemID']
            Data[row['VariationNumber']] = dict(zip(names, identification))

    # ------------------------------------------------------------------------
    # if you have a file ending that you need to remove from your Link add it
    # to the follwing List
    # EXAMPLE: ['?dl=0', '?dl=1']
    # ------------------------------------------------------------------------
    endings = ['?dl=0']
    replacement = ['']

    searchterm = ['www.dropbox']
    replaceterm = ['dl.dropbox']

    # open the flat file, take the 3rd line as the header and scrap the image
    # links + the parent sku
    # combine it with the data out of the export file and save all into a
    # multidimensional dictionary
    count = 0
    with open(flatfile, mode='r') as item:
        links = SortedDict()
        # for i in range(2):
        # next(item)
        reader = csv.DictReader(item, delimiter=';')
        names = ['Link1', 'Link2', 'Link3', 'Link4',
                 'Link5', 'Link6', 'Link7', 'Link8', 'Link9']
        for row in reader:
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

# check every img link for the ending if it ends with an invalid ?dl=0
# replace it with ?raw=1
            for img in imglinks:
                if(img):
                    for num in range(len(searchterm)):
                        if(re.search(searchterm[num], img)):
                            imglinks[imglinks.index(img)] = (img.replace(
                                searchterm[num], replaceterm[num]) and img.replace(endings[num], replacement[num]))
                            count += 1

            if(row['item_sku'] in [*Data]):
                links[row['item_sku']] = SortedDict(zip(names, imglinks))
                links[row['item_sku']]['itemid'] = Data[row['item_sku']]['item_id']
                links[row['item_sku']
                      ]['variationid'] = Data[row['item_sku']]['variation_id']
                if(row['parent_sku']):
                    links[row['item_sku']]['parentsku'] = row['parent_sku']
                else:
                    links[row['item_sku']]['parentsku'] = row['item_sku']

    # Print the amount of changes made to links in order to make them work
    print("Amount of fixed invalid link endings: {0} (ending with {1}, replaced with {2})".format(
        count, ",".join(searchterm), ",".join(replaceterm)))

    # creating a dictionary that contains only one entry per imagelink and
    # combining the variation id into the duplicates
    Data = SortedDict()
    number = 1
    names = ['ItemImageItemID', 'PrimaryVariationCustomNumber',
             'VariationLink', 'ItemImageUrl']
    blockEntry = False
    for row in links:
        variationlinks = ''
        for pic in re.findall(r'Link\d{1}', ",".join([*links[row]])):
            if(links[row][pic]):
                variationlinks, blockEntry = searchImage(
                    links[row][pic],
                    links[row]['itemid'],
                    links[row]['variationid'],
                    variationlinks,
                    Data)
                if(not(blockEntry) and variationlinks):
                    values = [links[row]['itemid'], links[row]
                              ['parentsku'], variationlinks, links[row][pic]]
                    # If the digit is a single digit add a 0 in front of it
                    if(re.match(r'\d(?!\S)', str(number))):
                        number = '0' + str(number)
                    Data['IMG' + str(number)
                           ] = SortedDict(zip(names, values))
                    number = int(number) + 1
    # create the path for the new file name use a while loop to create a new name in case if the old one is taken
    file_number_extension = 1
    datatype = ".csv"
    newfile_path = "Upload/plenty_upload_" + \
        str(file_number_extension) + datatype

    while(isfile(newfile_path)):
        file_number_extension = int(file_number_extension) + 1
        newfile_path = "Upload/plenty_upload_" + \
            str(file_number_extension) + datatype

    # write the Data Dictionary into a new Csv file
    with open(newfile_path, mode='a') as item:
        writer = csv.DictWriter(item, delimiter=";", fieldnames=names)
        writer.writeheader()
        for row in Data:
            writer.writerow(Data[row])

    if(isfile(newfile_path)):
        print("Upload File succesfully created into the Upload folder! Name: {0}"
              .format(newfile_path))
