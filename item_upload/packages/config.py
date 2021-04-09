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

from loguru import logger

def assign_features(config):
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
            logger.warning("Fill feature IDs from Plentymarkets into "
                           "[FEATURES]")
            return None
        try:
            features[key] = int(value)
        except ValueError as err:
            logger.error(f"Wrong value in config for => {key} : {value}")

    for key, value in features.items():
        if not value:
            logger.warning(f"No Value set in config for [FEATURES]=>{key}")

    return features

def assign_category(config):
    """
        Parameter:
            config => configparser config object from config.ini

        Get the user-configured Plentymarkets Category IDs from the config
        Assign them to a dictionary and return the dictionary
    """
    category = {}

    if not 'CATEGORY' in config.keys():
        logger.error(f"No categories in config => {config.keys()}")
        return None
    for key, value in config['CATEGORY'].items():
        if key == 'example-category':
            logger.warning("Fill category IDs from Plentymarkets into "
                           "[CATEGORY]")
            return None
        try:
            category[key] = int(value)
        except ValueError as err:
            logger.error(f"Wrong value in config for => {key} : {value}")

    return category

def create_config(path: str):
    """
        Parameter:
            path            [str]       -       Path to the config file

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
        'file_change_date': '',
        'internnumbers': '',
        'export_plentymarkets': ''
    }
    config['CATEGORY'] = {
        'example-category':'category ID (integer)'
    }
    config['FEATURES'] = {
        'example-feature':'feature ID (integer)'
    }

    with open(path, 'w') as configfile:
        config.write(configfile)

    logger.info("Fill out the Category and Feature field of the config")

    return config
