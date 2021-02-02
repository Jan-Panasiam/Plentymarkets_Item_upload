"""
    written by: Sebastian Fricke
    2019-01-15

    class and functions for handling the category config

    CategoryConfig class:
        contains the final dictionary id_list
        the raw_data list for the initial read
        and the path object with path string and encoding
"""

import os
import sys
from packages import item_upload, error, config

class CategoryConfig(object):
    """
        id_list:    dictionary of category name with it's id
        raw_data:   read lines from the file
        path:   path string + encoding

        methods:
            findConfig
            readConfig
            rawConfig
    """
    def __init__(self):
        self.id_list = dict()
        self.raw_data = []
        self.path = {'path':'', 'encoding':''}

    def findConfig(self, root):
        """
            findConfig:
                search for the category config in 2 ways
                1. search in the root of the project
                2. ask the user to identify the file
                The location of the category config can also
                be saved into the config file
        """

        try:
            self.path['path'] = os.path.join(root, 'category')
        except (ValueError, Exception) as err:
            error.errorPrint("Building path failed",
                       err, sys.exc_info()[2].tb_lineno)
            return False

        if os.path.isfile(self.path['path']):
            self.path = item_upload.checkEncoding(self.path)
            return True

        try:
            self.path['path'] = config.getPath(message='category config path',
                                         path_type='file',
                                         initialdir=root)
            self.path = item_upload.checkEncoding(self.path)
        except (ValueError, Exception) as err:
            error.errorPrint("searching file failed",
                       err, sys.exc_info()[2].tb_lineno)

        if not self.path['path']:
            return False

        return True


    def rawConfig(self):
        """
            rawConfig:
                read the lines of the categoryConfig
                without parsing or assing any specific values
        """
        with open(self.path['path'],
                  mode='r', encoding=self.path['encoding']) as config:
            try:
                self.raw_data =\
                [row.strip(' ').strip('\n').split(';') for row in config]
            except (ValueError, Exception) as err:
                error.errorPrint("raw data read failed",
                           err, sys.exc_info()[2].tb_lineno)
        return len(self.raw_data) > 0


    def readConfig(self):
        """
            readConfig:
                assign the values found in raw_data to the id_list
        """
        if not self.raw_data:
            if not self.rawConfig():
                return False
        for row in self.raw_data:
            option = "".join(row).split('=')
            if(len(option[0]) > 1 and len(option[1]) > 1):
                try:
                    self.id_list[option[0]] = int(option[1])
                except ValueError as err:
                    error.warnPrint("Integer conversion failed",
                              sys.exc_info()[2].tb_lineno, err)
            else:
                return False

        return True
