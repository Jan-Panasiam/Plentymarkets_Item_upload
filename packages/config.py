"""
    2020-04-22
    Sebastian Fricke
    Panasiam
    License: GPLv3

    Helper functions for reading the configuration data
"""
import inspect
import tkinter
from tkinter.filedialog import askopenfilename
import configparser
from packages import error

def assignFeatures(config):
    """
        Parameter:
            config => configparser config object from config.ini

        Get the user-configured Plentymarkets Feature IDs from the config
        Assign them to a dictionary and return the dictionary
        Throw a warning for each missing field
    """
    features = {}
    for key, value in config['FEATURES'].items():
        if key == 'example-feature':
            msg =\
                str(f"Fill feature IDs from Plentymarkets into [FEATURES]")
            error.warnPrint(msg=msg, err='',
                            linenumber=inspect.currentframe().f_back.f_lineno)
            return None
        try:
            features[key] = int(value)
        except ValueError as err:
            msg = str(f"Wrong value in config for => {key} : {value}")
            error.errorPrint(msg=msg, err=err,
                             linenumber=inspect.currentframe().f_back.f_lineno)

    for key, value in features.items():
        if not value:
            msg = str(f"No Value set in config for [FEATURES]=>{key}")
            error.warnPrint(msg=msg, err='',
                            linenumber=inspect.currentframe().f_back.f_lineno)

    return features

def assignCategory(config):
    """
        Parameter:
            config => configparser config object from config.ini

        Get the user-configured Plentymarkets Category IDs from the config
        Assign them to a dictionary and return the dictionary
    """
    category = {}

    if not 'CATEGORY' in config.keys():
        msg = str(f"No categories in config => {config.keys()}")
        error.errorPrint(msg=msg, err='',
                         linenumber=inspect.currentframe().f_back.f_lineno)
        return None
    for key, value in config['CATEGORY'].items():
        if key == 'example-category':
            msg =\
                str(f"Fill category IDs from Plentymarkets into [CATEGORY]")
            error.warnPrint(msg=msg, err='',
                            linenumber=inspect.currentframe().f_back.f_lineno)
            return None
        try:
            category[key] = int(value)
        except ValueError as err:
            msg = str(f"Wrong value in config for => {key} : {value}")
            error.errorPrint(msg=msg, err=err,
                             linenumber=inspect.currentframe().f_back.f_lineno)

    return category

def createConfig(name):
    """
        Parameter:
            name => name of the file with to be created in the source root

        Create a empty config and ask user for input to fill values
    """

    input_folder = tkinter.filedialog.askdirectory(
        initialdir='.',
        title="Choose a source folder")
    upload_folder = tkinter.filedialog.askdirectory(
        initialdir='.',
        title="Choose a destiniation folder")
    config = configparser.ConfigParser()
    config['PATH'] = {
        'upload_folder':upload_folder,
        'data_folder':input_folder,
        'attribute_file':'',
        'file_change_date': ''
    }
    config['CATEGORY'] = {
        'example-category':'category ID (integer)'
    }
    config['FEATURES'] = {
        'example-feature':'feature ID (integer)'
    }

    with open('config.ini', 'w') as configfile:
        config.write(configfile)

    error.infoPrint("Fill out the Category and Feature field of the config")

    return config
