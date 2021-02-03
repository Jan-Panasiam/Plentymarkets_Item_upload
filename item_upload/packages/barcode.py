import csv
from os.path import isfile
import sys


class EmptyFieldWarning(Exception):
    def __init__(self, errorargs):
        Exception.__init__(self, "Following field/s are empty {0}"
                           .format(errorargs))
        self.errorargs = errorargs


def writeCSV(dataobject, name, columns, upload_path, item):
    datatype = ".csv"
    output_name = "/" + name + "_" + item + "_" + datatype
    output_path = upload_path + output_name

    with open(output_path, mode='w') as item:
        writer = csv.DictWriter(item, delimiter=";",
                                fieldnames=columns, lineterminator='\n')
        writer.writeheader()
        try:
            for row in dataobject:
                writer.writerow(dataobject[row])
        except Exception as err:
            print("ERROR @ writeCSV : line : {0}, Error: {1}"
                  .format(sys.exc_info()[2].tb_lineno, err))
            print("Press ENTER to continue..")
            input()
            sys.exit()

    if(isfile(output_path)):
        print("Upload file successfully created under {0}".format(output_path))

    return output_path
