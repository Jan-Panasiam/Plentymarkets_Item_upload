from packages.item_upload import checkEncoding
from packages.config import get_path
import os
from pathlib import Path

class CategoryConfig:
    def __init__(self):
        self.id_list = dict()
        self.raw_data = []
        self.path = {'path':'', 'encoding':''}

    def findConfig(self, root):
        try:
            self.path['path'] = os.path.join(root, 'category')
        except Exception as err:
            print("ERROR @ findCategoryConfig: Building path failed: {0}"
                  .format(err))
            return False

        if(os.path.isfile(self.path['path'])):
            self.path = check_encoding(self.path)
            return True
        else:
            try:
                self.path['path'] = get_path(message='category config path',
                                             path_type='file',
                                             initialdir=root)
                self.path = check_encoding(self.path)
            except Exception as err:
                print("ERROR @ findCategoryConfig: searching file: {0}"
                      .format(err))
            if(not(self.path['path'])):
                return False
            else:
                return True


    def rawConfig(self):
        with open(self.path['path'],
                    mode='r', encoding=self.path['encoding']) as config:
            try:
                self.raw_data =\
                [row.strip(' ').strip('\n').split(';') for row in config]
            except Exception as err:
                print("ERROR @ findCategoryConfig: Read data failed: {0}"
                        .format(err))
        return len(self.raw_data) > 0


    def readConfig(self):
        if(not(self.raw_data)):
            if(not(self.rawConfig())):
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

