from packages.item_upload import check_encoding
from packages.log_files import noCategoryFileLog
import os
from pathlib import Path

class CategoryConfig:
    def __init__(self, proj_root, log_path):
        self.root = proj_root
        self.log = log_path
        self.id_list = dict()
        self.raw_data = []
        self.path = {'path':'', 'encoding':''}

    def findConfig(self):
        try:
            self.path['path'] = os.path.join(self.root, 'category')
        except Exception as err:
            print("ERROR @ findCategoryConfig: Building path failed: {0}"
                  .format(err))
            return False

        if(os.path.isfile(self.path['path'])):
            self.path['encoding'] = check_encoding(self.path)
            with open(self.path['path'],
                      mode='r', encoding=self.path['encoding']) as config:
                try:
                    self.raw_data =\
                    [row.stip(' ').strip('\n').split(';') for row in config]
                except Exception as err:
                    print("ERROR @ findCategoryConfig: Read data failed: {0}"
                          .format(err))

            return True
        else:
            try:
                Path(self.path['path']).touch(mode=0o777,exist_ok=True)
            except Exception as err:
                print("ERROR @ findCategoryConfig: creating file: {0}"
                      .format(err))
            noCategoryFileLog(self.log, self.path['path'])
            return False


    def readConfig(self):
        if(not(self.raw_data)):
            return False
        for row in self.raw_data:
            option = "".join(row).split('=')
            if(len(option[0]) > 1 and len(option[1]) > 1):
                try:
                    self.id_list[option[0]] = int(option[1])
                except Exception as err:
                    print("ERROR @ readCategoryConfig: convert to int: {0}"
                          .format(err))
            else:
                return False

        return True

