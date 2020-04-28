import tkinter
from tkinter.filedialog import askopenfilename
import sys
import platform
import os
import time
import ntpath
import re
import datetime
try:
    import configparser
except ImportError:
    print("configparser module required")

from packages.item_upload import (
    itemUpload, WrongEncodingException, checkEncoding,
    checkFlatfile, itemPropertyUpload)
from packages.barcode import EmptyFieldWarning
from packages.amazon_data_upload import featureUpload
from packages.log_files import (
    fileNotFoundLog, keyErrorLog, wrongEncodingLog,
    unboundLocalLog, emptyFieldWarningLog)
from packages.gui.category_chooser import CategoryChooser
from packages.image_upload import imageUpload
from packages.config import assignFeatures, assignCategory, createConfig
from packages.error import warnPrint


def main():

    #define variable used throughout the script
    upload_folder = ''
    log_folder = ''
    input_folder = ''
    attribute_date = ''
    features = {}
    category_id = {}
    sheet = {'path':'', 'encoding':''}
    intern_number = {'path':'', 'encoding':''}
    stocklist = {'path':'', 'encoding':''}
    plenty_export = ''
    attributefile = {'path':'', 'encoding':''}
    internnumber = {'path':'', 'encoding':''}
    step = 0

    # Create a list of step names where every name fits
    # to the index of a step number
    step_name = ['environment-creation',
                 'config-reading',
                 'category-config',
                 'import-flatfile',
                 'GUI',
                 'import-stocklist',
                 'item-upload',
                 'feature_upload',
                 'property_upload',
                 'image-upload'
                 ]

    step += 1
    if not os.path.exists('config.ini'):
        config = createConfig(name='config.ini')
    else:
        config = configparser.ConfigParser()
        config.read('config.ini')

    upload_folder = config['PATH']['upload_folder']
    input_folder = config['PATH']['data_folder']
    attribute_date = config['PATH']['file_change_date']
    attributefile['path'] = config['PATH']['attribute_file']
    internnumber['path'] = config['PATH']['internnumbers']
    plenty_export = config['PATH']['export_plentymarkets']

    if not plenty_export:
        msg = "No export URL found, enter URL @ config:'export_plentymarkets'"
        warnPrint(msg=msg, err='',
                  linenumber=inspect.currentframe().f_back.f_lineno)

    # Initial start or invalid attribute file
    if(not(attributefile['path']) or
       not os.path.exists(attributefile['path'])):
        attributefile['path'] = askopenfilename(initialdir=input_folder,
                                                title="Color Attributes from PlentyMarkets",
                                                filetypes=[ ("csv files", "*.csv") ])
        attributefile = checkEncoding(attributefile)
        config['PATH']['attribute_file'] = attributefile['path']
        config['PATH']['file_change_date'] =\
            datetime.datetime.now().strftime('%d.%m.%Y-%H:%M')

        with open('config.ini', 'w') as configfile:
            config.write(configfile)

    # Initial start or invalid intern number file
    if(not(internnumber['path']) or
       not os.path.exists(internnumber['path'])):
        internnumber['path'] = askopenfilename(
            initialdir=input_folder, title="Intern number list",
            filetypes=[ ("xlsx files", "*.xlsx") ])
        internnumber = checkEncoding(internnumber)
        config['PATH']['intern_number'] = internnumber['path']

        with open('config.ini', 'w') as configfile:
            config.write(configfile)

    if not attributefile['encoding']:
        attributefile = checkEncoding(attributefile)
    if not internnumber['encoding']:
        internnumber = checkEncoding(internnumber)

    features = assignFeatures(config=config)
    if not features:
        exit(1)
    step += 1
    category_id = assignCategory(config=config)
    if not category_id:
        exit(1)

    if(not(input_folder)):
        input_folder = tkinter.filedialog.askdirectory(
            initialdir='.',
            title="Choose a folder from where to upload")

    step += 1
    sheet['path'] = askopenfilename(initialdir=input_folder,
                            title="Amazon Flatfile as .csv",
                            filetypes=[ ("csv files", "*.csv") ])

    sheet = checkEncoding(sheet)

    try:
        if(not( checkFlatfile(sheet) )):
            print('Please fix the flatfile and try again.\n')
            print('Press Enter to continue...')
            input()
            sys.exit()
    except OSError as err:
        print('flatfile not found\n')
        print('Press Enter to continue...')
        input()
        sys.exit()

    step += 1
    cchooser = CategoryChooser(master=None, categories=category_id,
                               upath=upload_folder, flatfile=sheet,
                               atrpath=attributefile, atrdate=attribute_date)
    cchooser.title("Choose the category and name")
    LOOP_ACTIVE = True
    while (LOOP_ACTIVE):
        if(cchooser):
            cchooser.update()
            time.sleep(0.1)
        if(cchooser.data['name'] and cchooser.data['categories'] and\
           cchooser.data['marking']):
            LOOP_ACTIVE = False
            cchooser.destroy()

    user_data = cchooser.data
    specific_name = re.sub(r'[(){}<>\\/"\'\\ \\n]', '', user_data['name'])

    if(cchooser.newpath['upload-path'] != '' and
       cchooser.newpath['upload-path'] != upload_folder):
        config['PATH']['upload_folder'] = cchooser.newpath['upload-path']
        upload_folder = cchooser.newpath['upload-path']
    if(cchooser.newpath['attribute-path'] != '' and
       cchooser.newpath['attribute-path'] != attributefile['path']):
        config['PATH']['attribute_file'] = cchooser.newpath['attribute-path']
        config['PATH']['file_change_date'] = cchooser.atrdate
        attributefile['path'] = cchooser.newpath['attribute-path']
    with open('config.ini', 'w') as configfile:
        config.write(configfile)

    if(user_data):
        # Check if there is already a log folder within the upload folder
        if( not(os.path.exists(os.path.join(upload_folder, 'log'))) ):
            log_folder = os.path.join(upload_folder, 'log')
            os.makedirs(log_folder)
        elif( os.path.exists(os.path.join(upload_folder, 'log')) ):
            log_folder = os.path.join(upload_folder, 'log')

        step += 1;
        try:
            stocklist['path'] = askopenfilename(initialdir=input_folder,
                                    title="The Stockreport from Amazon as .csv",
                                    filetypes=[ ("csv files", "*.csv") ])

            stocklist = checkEncoding(stocklist)
        except OSError as fexc:
            fileNotFoundLog(
                log_path=log_folder, step_number=step,
                step_desc=step_name[step], file_name=fexc)

        step += 1
        try:
            print("\nItem Upload\n")
            itemUpload(flatfile=sheet,
                       intern=internnumber,
                       stocklist=stocklist,
                       folder=upload_folder,
                       input_data=user_data,
                       filename=specific_name)
        except WrongEncodingException:
            wrongEncodingLog(
                log_path=log_folder, step_number=step,
                step_desc=step_name[step], file_name="flatfile")
        except KeyError as kexc:
            keyErrorLog(
                log_path=log_folder, step_number=step,
                step_desc=step_name[step], key_name=kexc,
                file_name=ntpath.basename(sheet['path']))
        except OSError as fexc:
            fileNotFoundLog(
                log_path=log_folder,
                step_number=step, step_desc=step_name[step],
                file_name="intern_numbers")
        except UnboundLocalError as uexc:
            unboundLocalLog(
                log_path=log_folder, step_number=step,
                step_desc=step_name[step],
                filename=ntpath.basename(sheet['path']),
                variable_name=uexc.args)
        except EmptyFieldWarning as eexc:
            emptyFieldWarningLog(
                log_path=log_folder, step_number=step,
                step_desc=step_name[step], field_name=eexc.errorargs,
                file_name=ntpath.basename(sheet['path']))

        try:
            print("Feature Upload")
            step += 1
            featureUpload(flatfile=sheet,
                          features=features,
                          folder=upload_folder,
                          filename=specific_name)
        except KeyError as kexc:
            keyErrorLog(
                log_path=log_folder, step_number=step,
                step_desc=step_name[step], key_name=kexc,
                file_name=ntpath.basename(sheet['path']))
        except UnboundLocalError as uexc:
            unboundLocalLog(
                log_path=log_folder, step_number=step,
                step_desc=step_name[step],
                filename=ntpath.basename(sheet['path']),
                variable_name=uexc.args)
        except EmptyFieldWarning as eexc:
            emptyFieldWarningLog(
                log_path=log_folder, step_number=step,
                step_desc=step_name[step], field_name=eexc.errorargs,
                file_name=ntpath.basename(sheet['path']))
        except OSError as err:
            print(err)
            print("Missing Data, check if you have\n - a flatfile\n - a intern file table\n - export file from plentymarkets\n - a sheet with the stock numbers!\n")
        try:
            print("Property Upload")
            step += 1
            itemPropertyUpload(flatfile=sheet,
                               folder=upload_folder,
                               filename=specific_name)
        except KeyError as kexc:
            keyErrorLog(
                log_path=log_folder, step_number=step,
                step_desc=step_name[step], key_name=kexc,
                file_name=ntpath.basename(sheet['path']))
        except UnboundLocalError as uexc:
            unboundLocalLog(
                log_path=log_folder, step_number=step,
                step_desc=step_name[step],
                filename=ntpath.basename(sheet['path']),
                variable_name=uexc.args)
        except EmptyFieldWarning as eexc:
            emptyFieldWarningLog(
                log_path=log_folder, step_number=step,
                step_desc=step_name[step], field_name=eexc.errorargs,
                file_name=ntpath.basename(sheet['path']))
        except OSError as err:
            print(err)
            print("Missing Data, check if you have\n - a flatfile\n - a sheet with the stock numbers!\n")

        step += 1
        imageUpload(flatfile=sheet,
                    attributefile=attributefile,
                    exportfile=plenty_export,
                    uploadfolder=upload_folder,
                    filename=specific_name)
        # A stop in the script flow to interrupt a console window from closing itself
        print('press ENTER to close the script...')
        input()
    else:
        print("Choose a category and a name.\n")
if __name__ == '__main__':
    main()
