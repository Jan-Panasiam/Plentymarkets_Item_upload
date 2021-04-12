import argparse
import time
import ntpath
import re
import datetime
import tkinter
from tkinter.filedialog import askopenfilename
import os
import sys
import pathlib
import platform
import inspect
import configparser

from loguru import logger

from item_upload.packages.item_upload import (
    item_upload, WrongEncodingException, check_encoding,
    check_flatfile, item_property_upload)
from item_upload.packages.barcode import EmptyFieldWarning
from item_upload.packages.amazon import featureUpload
from item_upload.packages.gui.category_chooser import CategoryChooser
from item_upload.packages.image_upload import imageUpload
from item_upload.packages.config import (
    assignFeatures, assignCategory, createConfig
)


PROG_NAME = 'item_upload'
USER = os.getlogin()
if sys.platform == 'linux':
    BASE_PATH = os.path.join(
        '/', 'home', str(f'{USER}'), '.config', PROG_NAME
    )
elif sys.platform == 'win32':
    BASE_PATH = os.path.join(
        'C:\\', 'Users', str(f'{USER}'), '.config', PROG_NAME
    )

if not os.path.exists(BASE_PATH):
    pathlib.Path(BASE_PATH).mkdir(parents=True, exist_ok=True)

CONFIG_PATH = os.path.join(BASE_PATH, 'config.ini')

if not os.path.exists(CONFIG_PATH):
    open(CONFIG_PATH, 'a').close()


def setup_argparser():
    parser = argparse.ArgumentParser()
    parser.add_argument('--name1', '--n1', required=False,
                        help='ItemTextName field number 1 in Plentymarkets',
                        dest='name1')
    parser.add_argument('--name3', '--n3', required=False,
                        help='ItemTextName field number 3 in Plentymarkets',
                        dest='name3')
    parser.add_argument('--Categories', '-c', required=False,
                        help='Comma-separated list of Plentymarkets category '
                        'IDs, the first ID is assigned as standard category.',
                        dest='categories')
    parser.add_argument('--flatfile', '-f', required=False,
                        help='Filepath to the Amazon Flatfile.',
                        dest='flatfile')
    parser.add_argument('--stockfile', required=False,
                        help='Filepath to the Amazon stock-report file.',
                        dest='stockfile')
    return parser.parse_args()


def main():

    #define variable used throughout the script
    upload_folder = ''
    log_folder = ''
    input_folder = ''
    attribute_date = ''
    features = {}
    category_id = {}
    sheet = {'path':'', 'encoding':''}
    stocklist = {'path':'', 'encoding':''}
    attributefile = {'path':'', 'encoding':''}
    internnumber = {'path':'', 'encoding':''}
    intern_number = ''
    plenty_export = ''

    root = tkinter.Tk()
    root.withdraw()

    config = configparser.ConfigParser()
    config.read(CONFIG_PATH)

    args = setup_argparser()

    if not config.sections:
        config = createConfig(name=CONFIG_PATH)

    upload_folder = config['PATH']['upload_folder']
    input_folder = config['PATH']['data_folder']
    attribute_date = config['PATH']['file_change_date']
    attributefile['path'] = config['PATH']['attribute_file']
    internnumber = config['PATH']['internnumbers']
    plenty_export = config['PATH']['export_plentymarkets']

    if not plenty_export:
        logger.warning("No export URL found, enter URL @ config:'"
                       "export_plentymarkets'")

    # Initial start or invalid attribute file
    if(not(attributefile['path']) or
       not os.path.exists(attributefile['path'])):
        attributefile['path'] = askopenfilename(initialdir=input_folder,
                                                title="Color Attributes from PlentyMarkets",
                                                filetypes=[ ("csv files", "*.csv") ])
        attributefile = check_encoding(attributefile)
        config['PATH']['attribute_file'] = attributefile['path']
        config['PATH']['file_change_date'] =\
            datetime.datetime.now().strftime('%d.%m.%Y-%H:%M')

        with open(CONFIG_PATH, 'w') as configfile:
            config.write(configfile)

    # Initial start or invalid intern number file
    if(not(internnumber) or
       not os.path.exists(internnumber)):
        internnumber = askopenfilename(
            initialdir=input_folder, title="Intern number list",
            filetypes=[ ("xlsx files", "*.xlsx") ])
        config['PATH']['intern_number'] = internnumber

        with open(CONFIG_PATH, 'w') as configfile:
            config.write(configfile)

    if not attributefile['encoding']:
        attributefile = check_encoding(attributefile)

    features = assignFeatures(config=config)
    if not features:
        exit(1)
    category_id = assignCategory(config=config)
    if not category_id:
        exit(1)

    if(not(input_folder)):
        input_folder = tkinter.filedialog.askdirectory(
            initialdir='.',
            title="Choose a folder from where to upload")

    if not args.flatfile:
        sheet['path'] = askopenfilename(initialdir=input_folder,
                                title="Amazon Flatfile as .csv",
                                filetypes=[ ("csv files", "*.csv") ])
    else:
        sheet['path'] = args.flatfile

    sheet = check_encoding(sheet)

    try:
        if(not( check_flatfile(sheet) )):
            logger.error('Please fix the flatfile and try again.')
            logger.info('Press Enter to continue...')
            input()
            sys.exit()
    except OSError as err:
        logger.error(f'No flatfile found at {sheet}')
        logger.info('Press Enter to continue...')
        input()
        sys.exit()

    if not (args.name1 and args.name3 and args.categories):
        cchooser = CategoryChooser(master=None, categories=category_id,
                                   upath=upload_folder, flatfile=sheet,
                                   atrpath=attributefile,
                                   atrdate=attribute_date)
        cchooser.title("Choose the category and name")
        LOOP_ACTIVE = True
        while (LOOP_ACTIVE):
            if(cchooser):
                cchooser.update()
                time.sleep(0.1)
            if(cchooser.data['name'] and cchooser.data['categories']):
                LOOP_ACTIVE = False
                cchooser.destroy()

        user_data = cchooser.data

        if(cchooser.newpath['upload-path'] != '' and
                cchooser.newpath['upload-path'] != upload_folder):
            config['PATH']['upload_folder'] = cchooser.newpath['upload-path']
            upload_folder = cchooser.newpath['upload-path']
        if(cchooser.newpath['attribute-path'] != '' and
                cchooser.newpath['attribute-path'] != attributefile['path']):
            config['PATH']['attribute_file'] =\
                cchooser.newpath['attribute-path']
            config['PATH']['file_change_date'] = cchooser.atrdate
            attributefile['path'] = cchooser.newpath['attribute-path']
        with open(CONFIG_PATH, 'w') as configfile:
            config.write(configfile)

    else:
        user_data = {'name': args.name1, 'categories': args.categories,
                     'webshopname': args.name3}
    specific_name = re.sub(r'[(){}<>\\/"\'\\ ]', '', user_data['name'])

    if(user_data):
        # Check if there is already a log folder within the upload folder
        if not args.stockfile:
            try:
                stocklist['path'] = askopenfilename(
                    initialdir=input_folder,
                    title="The Stockreport from Amazon as .csv",
                    filetypes=[ ("csv files", "*.csv") ])
            except OSError as fexc:
                logger.warning("Stock report file not found at {stocklist['path']}")
        else:
            stocklist['path'] = args.stockfile
        stocklist = check_encoding(stocklist)

        try:
            logger.info("\nItem Upload\n")
            item_upload(flatfile=sheet,
                        intern=internnumber,
                        stocklist=stocklist,
                        input_data=user_data,
                        filename=os.path.join(upload_folder,
                                              str(f"item_{specific_name}.csv")))
        except WrongEncodingException:
            logger.warning("Invalid encoding in Flatfile {sheet}")

        logger.info("Feature Upload")
        featureUpload(flatfile=sheet,
                      features=features,
                      folder=upload_folder,
                      filename=specific_name)
        logger.info("Property Upload")
        item_property_upload(flatfile=sheet,
                             folder=upload_folder,
                             filename=specific_name)

        logger.info('press ENTER,after the upload was successful')
        input()
        imageUpload(flatfile=sheet,
                    attributefile=attributefile,
                    exportfile=plenty_export,
                    uploadfolder=upload_folder,
                    filename=specific_name)
        # A stop in the script flow to interrupt a console window from closing itself
        if os.name == 'nt':
            logger.info('press ENTER to close the script...')
            input()
        root.destroy()
    else:
        logger.error("Missing data from the user interface.")
if __name__ == '__main__':
    main()
