import tkinter
from tkinter.filedialog import askopenfilename
import sys
import platform
import os
import time
import ntpath
from packages.item_upload import itemUpload, WrongEncodingException, checkEncoding, checkFlatfile, itemPropertyUpload
from packages.barcode import EmptyFieldWarning
from packages.amazon_data_upload import featureUpload
from packages.log_files import fileNotFoundLog, keyErrorLog, wrongEncodingLog, unboundLocalLog, emptyFieldWarningLog
from packages.gui.category_chooser import CategoryChooser
from packages.config import config_creation, config_read, config_write
from packages.image_upload import imageUpload
from packages.category import CategoryConfig


def main():

    #define variable used throughout the script
    upload_folder = ''
    log_folder = ''
    recent_path = ''
    config_path = ''
    attribute_date = ''
    config = dict()
    sheet = {'path':'', 'encoding':''}
    intern_number = {'path':'', 'encoding':''}
    stocklist = {'path':'', 'encoding':''}
    plenty_export = {'path':'', 'encoding':''}
    attributefile = {'path':'', 'encoding':''}
    step = int(0)
    fexc = ''

    cat_conf = CategoryConfig()

    # Create a list of step names where every name fits to the index of a step number
    step_name = ['environment-creation',
                 'config-creation',
                 'config-reading',
                 'category-config',
                 'import-flatfile',
                 'GUI',
                 'import-internlist',
                 'import-stocklist',
                 'item-upload',
                 'feature_upload',
                 'property_upload',
                 'import-exportfile',
                 'image-upload'
                 ]

    # define the features for plentymarkets
    features = {
                'color_map':1,
                'model':4,
                'neck_size':5,
                'sleeve_type':8,
                'pattern_type':11,
                'collar_style':12,
                'item_name':13,
                'closure_type':14,
                'style_name':15,
                'care_instructions':16,
                'package_length':17,
                'package_width':18,
                'package_height':19,
                'package_weight':20
                }
    # Check if the os is Linux, in that case the initial directory is Documents
    # Unless Documents is not available in which case it is ~
    if(platform.system() == 'Linux'):
        if(os.path.exists(path='/home/' + os.getlogin() + '/Documents/')):
            initial_directory = '/home/' + os.getlogin() + '/Documents/'
        else:
            initial_directory = '/home/' + os.getlogin()

    step += 1;
    # CONFIG CREATION
    # Create a config if there is none
    config_path = config_creation()

    step += 1;
    # CONFIG READING
    # Get the Upload and data folder from the config if possible
    config = config_read(config_path)
    if(config['upload_folder']):
        upload_folder = config['upload_folder']
    if(config['data_folder']):
        recent_path = config['data_folder']
    if(config['attribute_file']):
        attributefile['path'] = config['attribute_file']
        attributefile = checkEncoding(attributefile)
    if(config['file_change_date']):
        attribute_date = config['file_change_date']
    if(config['category_config']):
        cat_conf.path['path'] = config['category_config']
        cat_conf.path = checkEncoding(cat_conf.path)

    # Category Config
    if(not(cat_conf.path['path'])):
        if(not(cat_conf.findConfig(os.path.dirname(
                                            os.path.abspath(__file__))))):
            print('no category config found\n')
            print('Press Enter to continue...')
            input()
            sys.exit()
    cat_conf.readConfig()

    if(not(recent_path)):
        recent_path = tkinter.filedialog.askdirectory(initialdir=initial_directory,
                                                      title="Choose a folder from where to upload")
    # END of CONFIG READING

    # If the config is fresh built load in the attribute file manually
    if(not(attributefile['path'])):
        attributefile['path'] = askopenfilename(initialdir=recent_path,
                                                title="Color Attributes from PlentyMarkets",
                                                filetypes=[ ("csv files", "*.csv") ])
        attributefile = checkEncoding(attributefile)

    # Import Flatfile
    step += 1
    sheet['path'] = askopenfilename(initialdir=recent_path,
                            title="Amazon Flatfile as .csv",
                            filetypes=[ ("csv files", "*.csv") ])

    sheet = checkEncoding(sheet)

    # Check if the file was loaded properly and got the correct format
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

    step += 1;
    # GUI
    # Ask the user for input inside a gui asking for categories and name
    cchooser = CategoryChooser(None, cat_conf.id_list, upload_folder, sheet, attributefile,
                               attribute_date)
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
    # END GUI

    user_data = cchooser.data
    specific_name = user_data['name'].strip(' ').strip("'").strip("\"").strip("_").strip("\n").lower()
    # Writing the changes into the config for the next start of the script
    if(cchooser.newpath['upload-path'] and cchooser.newpath['attribute-path']):
        config_update = {'row1':{ 'title': 'upload_folder', 'value': cchooser.newpath['upload-path'] },
                         'row2':{ 'title':'data_folder', 'value':recent_path },
                         'row3':{ 'title':'attribute_file', 'value': cchooser.newpath['attribute-path'] },
                         'row4':{ 'title':'file_change_date', 'value':cchooser.atrdate }}
        try:
            config_write(config_path, config_update)
        except Exception as err:
            print("ERROR: {0}\n".format(err))
        upload_folder = cchooser.newpath
        attributefile['path'] = cchooser.newpath['attribute-path']
        attribute_date = cchooser.atrdate
    elif(not( cchooser.newpath['upload-path'] ) and cchooser.newpath['attribute-path']):
        config_update = {'row1':{ 'title': 'upload_folder', 'value': upload_folder },
                         'row2':{ 'title':'data_folder', 'value':recent_path },
                         'row3':{ 'title':'attribute_file', 'value': cchooser.newpath['attribute-path'] },
                         'row4':{ 'title':'file_change_date', 'value':cchooser.atrdate }}
        try:
            config_write(config_path, config_update)
        except Exception as err:
            print("ERROR: {0}\n".format(err))
        attributefile['path'] = cchooser.newpath['attribute-path']
        attribute_date = cchooser.atrdate
    elif(cchooser.newpath['upload-path'] and not( cchooser.newpath['attribute-path'] )):
        config_update = {'row1':{ 'title': 'upload_folder', 'value': cchooser.newpath['upload-path'] },
                         'row2':{ 'title':'data_folder', 'value':recent_path },
                         'row3':{ 'title':'attribute_file', 'value': attributefile['path'] },
                         'row4':{ 'title':'file_change_date', 'value': attribute_date }}
        try:
            config_write(config_path, config_update)
        except Exception as err:
            print("ERROR: {0}\n".format(err))
        upload_folder = cchooser.newpath
    # END of Writing config part

    if(user_data):
        # Check if there is already a log folder within the upload folder
        if( not(os.path.exists(os.path.join(upload_folder, 'log'))) ):
            log_folder = os.path.join(upload_folder, 'log')
            os.makedirs(log_folder)
        elif( os.path.exists(os.path.join(upload_folder, 'log')) ):
            log_folder = os.path.join(upload_folder, 'log')

        step += 1
        intern_number['path'] = askopenfilename(initialdir=recent_path,
                                title="The Intern Numbers as .csv",
                                filetypes=[ ("csv files", "*.csv") ])

        intern_number = checkEncoding(intern_number)

        step += 1;
        try:
            stocklist['path'] = askopenfilename(initialdir=recent_path,
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
                       intern=intern_number,
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
            print("Missing Data, check if you have\n - a flatfile\n - a intern file table\n - export file from plentymarkets\n - a sheet with the stock numbers!\n")

        # IMPORT Export FIlE
        step += 1
        plenty_export['path'] = askopenfilename(initialdir=recent_path,
                                title="Export File from Plentymarkets",
                                filetypes=[ ("csv files", "*.csv") ])

        plenty_export = checkEncoding(plenty_export)

        step += 1
        imageUpload(flatfile=sheet,
                    attributefile=attributefile,
                    exportfile=plenty_export,
                    uploadfolder=upload_folder,
                    filename=specific_name)
        del fexc
        # A stop in the script flow to interrupt a console window from closing itself
        print('press ENTER to close the script...')
        input()
    else:
        print("Choose a category and a name.\n")
if __name__ == '__main__':
    main()
