import tkinter
from tkinter.filedialog import askopenfilename
import sys
import platform
import os
import ntpath
from packages.item_upload import itemUpload, itemPropertyUpload, WrongEncodingException, check_encoding
from packages.variation_upload import variationUpload, setActive, EANUpload, marketConnection, EmptyFieldWarning
from packages.stock_upload import priceUpload
from packages.amazon_data_upload import amazonSkuUpload, amazonDataUpload, asinUpload, featureUpload
from packages.image_upload import imageUpload
from packages.log_files import fileNotFoundLog, keyErrorLog, wrongEncodingLog, unboundLocalLog, emptyFieldWarningLog
from packages.gui.category_chooser import CategoryChooser
from packages.config import config_creation, config_read, config_write


def main():

    #define variable used throughout the script
    upload_folder = ''
    log_folder = ''
    recent_path = ''
    config_path = ''
    sheet = {'path':'', 'encoding':''}
    intern_number = {'path':'', 'encoding':''}
    export = {'path':'', 'encoding':''}
    stocklist = {'path':'', 'encoding':''}
    step = int(0)
    fexc = ''
    # Create a list of step names where every name fits to the index of a step number
    step_name = ['environment-creation',
                 'import-flatfile',
                 'import-internlist',
                 'item-upload',
                 'variation-upload',
                 'import-export',
                 'feature_upload',
                 'active_upload',
                 'property_upload',
                 'price_upload',
                 'import_stocklist',
                 'Barcode_upload',
                 'SKU_Upload',
                 'AmazonData_Upload',
                 'ASIN_upload',
                 'Image_upload',
                 'Marketconnection_upload']

    # define the features for plentymarkets
    features = {
                'color_map':1,
                'model':4,
                'item_name':13,
                'sleeve_type':8,
                'pattern_type':11,
                'collar_style':12,
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
    initial_directory = '../'

    if(platform.system() == 'Linux'):
        if(os.path.exists(path='/home/' + os.getlogin() + '/Documents/')):
            initial_directory = '/home/' + os.getlogin() + '/Documents/'
        else:
            initial_directory = '/home/' + os.getlogin()

    # Create a config if there is none
    config_path = config_creation()

    # Get the Upload and data folder from the config if possible
    if(config_read(config_path)['upload_folder']):
        upload_folder = config_read(config_path)['upload_folder']
    if(config_read(config_path)['data_folder']):
        recent_path = config_read(config_path)['data_folder']
    if(not(recent_path)):
        recent_path = tkinter.filedialog.askdirectory(initialdir=initial_directory,
                                                      title="Choose a folder from where to upload")

    # Ask the user for input inside a gui asking for categories and name
    cchooser = CategoryChooser(None, upload_folder)
    cchooser.title("Choose the category and name")
    LOOP_ACTIVE = True
    while (LOOP_ACTIVE):
        if(cchooser):
            cchooser.update()
        if(cchooser.data['name'] and cchooser.data['categories']):
            LOOP_ACTIVE = False
            cchooser.destroy()

    user_data = cchooser.data
    if(cchooser.newpath):
        config_update = {'row1':{ 'title': 'upload_folder', 'path': cchooser.newpath },
                         'row2':{ 'title':'data_folder', 'path':recent_path }}
        print(config_update)
        try:
            config_write(config_path, config_update)
        except Exception as err:
            print("ERROR: {0}\n".format(err))
        upload_folder = cchooser.newpath

    if(user_data):
        # Check if there is already a log folder within the upload folder
        if( not(os.path.exists(os.path.join(upload_folder, 'log'))) ):
            log_folder = os.path.join(upload_folder, 'log')
            os.makedirs(log_folder)
        elif( os.path.exists(os.path.join(upload_folder, 'log')) ):
            log_folder = os.path.join(upload_folder, 'log')

        step += 1
        sheet['path'] = askopenfilename(initialdir=recent_path,
                                title="Amazon Flatfile as .csv",
                                filetypes=[ ("csv files", "*.csv") ])

        sheet = check_encoding(sheet)

        step += 1
        intern_number['path'] = askopenfilename(initialdir=recent_path,
                                title="The Intern Numbers as .csv",
                                filetypes=[ ("csv files", "*.csv") ])

        intern_number = check_encoding(intern_number)

        step += 1
        try:
            print("\nItem Upload\n")
            itemUpload(sheet, intern_number, upload_folder)
        except WrongEncodingException:
            wrongEncodingLog(log_path=log_folder, step_number=step, step_desc=step_name[step], file_name="flatfile")
        except KeyError as kexc:
            keyErrorLog(log_path=log_folder, step_number=step, step_desc=step_name[step], key_name=kexc, file_name=ntpath.basename(sheet))
        except OSError as fexc:
            fileNotFoundLog(log_path=log_folder, step_number=step, step_desc=step_name[step], file_name="intern_numbers")
        except TypeError:
            fileNotFoundLog(log_path=log_folder, step_number=step, step_desc=step_name[step], file_name="flatfile")
        except UnboundLocalError as uexc:
            unboundLocalLog(log_path=log_folder, step_number=step, step_desc=step_name[step], filename=ntpath.basename(sheet), variable_name=uexc.args)
        except EmptyFieldWarning as eexc:
            emptyFieldWarningLog(log_path=log_folder, step_number=step, step_desc=step_name[step], field_name=eexc.errorargs, file_name=ntpath.basename(sheet))
        except Exception as exc:
            print("Item Upload failed!\n")
            print("Here: ", exc, '\n')
            if(exc == 'item_sku'):
                print("It is very likely that you don't have the proper headers, use the english ones!\n")
            e = sys.exc_info()
            print("Error @ FILE: {0}, LINE: {1}\n".format( e[2].tb_frame.f_code.co_filename, e[2].tb_lineno ))
            for element in e:
                print(element)

        step += 1
        try:
            print("\nVariation Upload\n")
            variationUpload(sheet, intern_number, upload_folder)
        except KeyError as kexc:
            keyErrorLog(log_path=log_folder, step_number=step, step_desc=step_name[step], key_name=kexc, file_name=ntpath.basename(sheet))
        except UnboundLocalError as uexc:
            unboundLocalLog(log_path=log_folder, step_number=step, step_desc=step_name[step], filename=ntpath.basename(sheet), variable_name=uexc.args)
        except EmptyFieldWarning as eexc:
            emptyFieldWarningLog(log_path=log_folder, step_number=step, step_desc=step_name[step], field_name=eexc.errorargs, file_name=ntpath.basename(sheet))
        except Exception as exc:
            print("VariationUpload failed!\n")
            e = sys.exc_info()
            print("Error @ FILE: {0}, LINE: {1}\n".format( e[2].tb_frame.f_code.co_filename, e[2].tb_lineno ))
            for element in e:
                print(element)

        print("###########################################################")
        print("\nUpload the files in plentymarkets, make sure that the categories are set because they are necessary for the active Upload.\n")

        print('press ENTER to continue')
        input()

        print("\nGet a dataexport from the plentymarket site from the variation attributes, in order to access the current Variation ID.\n")

        step += 1
        try:
            export['path'] = askopenfilename(initialdir=recent_path,
                                    title="The Export File from Plentymarkets as .csv",
                                    filetypes=[ ("csv files", "*.csv") ])

            export = check_encoding(export)
        except OSError as fexc:
            fileNotFoundLog(log_path=log_folder, step_number=step, step_desc=step_name[step], file_name=fexc)
        except Exception as exc:
            print(exc)
            print("Something went wrong at the Export file import!")

        print("spreadsheet csv containing the export : ", export)

        try:
            print("Active, properties , features & price Upload")
            step += 1
            for name in features:
                featureUpload(flatfile=sheet, feature=name, feature_id=features[name], folder=upload_folder)

            step += 1
            setActive(sheet, export, upload_folder)
            step += 1
            itemPropertyUpload(sheet, export, upload_folder)
            step += 1
            priceUpload(sheet, export, upload_folder)
        except KeyError as kexc:
            keyErrorLog(log_path=log_folder, step_number=step, step_desc=step_name[step], key_name=kexc, file_name=ntpath.basename(sheet))
        except UnboundLocalError as uexc:
            unboundLocalLog(log_path=log_folder, step_number=step, step_desc=step_name[step], filename=ntpath.basename(sheet), variable_name=uexc.args)
        except EmptyFieldWarning as eexc:
            emptyFieldWarningLog(log_path=log_folder, step_number=step, step_desc=step_name[step], field_name=eexc.errorargs, file_name=ntpath.basename(sheet))
        except OSError as err:
            print(err)
            print("Missing Data, check if you have\n - a flatfile\n - a intern file table\n - export file from plentymarkets\n - a sheet with the stock numbers!\n")

        print("\nOpen your amazon storage report and save it as an csv.\n")

        step += 1
        try:
            stocklist['path'] = askopenfilename(initialdir=recent_path,
                                    title="The Stockreport from Amazon as .csv",
                                    filetypes=[ ("csv files", "*.csv") ])

            stocklist = check_encoding(stocklist)
            print("spreadsheet csv containing the FNSKU and ASIN : ", stocklist)
        except OSError as fexc:
            fileNotFoundLog(log_path=log_folder, step_number=step, step_desc=step_name[step], file_name=fexc)

        step += 1
        try:
            EANUpload(sheet, export, stocklist, upload_folder)
        except KeyError as kexc:
            keyErrorLog(log_path=log_folder, step_number=step, step_desc=step_name[step], key_name=kexc, file_name=ntpath.basename(sheet))
        except UnboundLocalError as uexc:
            unboundLocalLog(log_path=log_folder, step_number=step, step_desc=step_name[step], filename=ntpath.basename(sheet), variable_name=uexc.args)

        print("\nCreate a upload file for the SKU and Parent_SKU\nto connect existing items from amazon to plentyMarkets.\n")

        step += 1
        try:
            amazonSkuUpload(sheet, export, upload_folder)
        except KeyError as kexc:
            keyErrorLog(log_path=log_folder, step_number=step, step_desc=step_name[step], key_name=kexc, file_name=ntpath.basename(sheet))
        except UnboundLocalError as uexc:
            unboundLocalLog(log_path=log_folder, step_number=step, step_desc=step_name[step], filename=ntpath.basename(sheet), variable_name=uexc.args)
        except EmptyFieldWarning as eexc:
            emptyFieldWarningLog(log_path=log_folder, step_number=step, step_desc=step_name[step], field_name=eexc.errorargs, file_name=ntpath.basename(sheet))

        print("\nCreate a upload file for the additional Information to Amazon Products like bullet points, lifestyle etc.\n")

        step += 1
        try:
            amazonDataUpload(sheet, export, upload_folder)
        except KeyError as kexc:
            keyErrorLog(log_path=log_folder, step_number=step, step_desc=step_name[step], key_name=kexc, file_name=ntpath.basename(sheet))
        except UnboundLocalError as uexc:
            unboundLocalLog(log_path=log_folder, step_number=step, step_desc=step_name[step], filename=ntpath.basename(sheet), variable_name=uexc.args)
        except EmptyFieldWarning as eexc:
            emptyFieldWarningLog(log_path=log_folder, step_number=step, step_desc=step_name[step], field_name=eexc.errorargs, file_name=ntpath.basename(sheet))

        print("\nCollect the ASIN Numbers matching to the Variationnumber(Sku) and format them into the dataformat format.\n")

        step += 1
        try:
            asinUpload(export, stocklist, upload_folder)
        except KeyError as kexc:
            keyErrorLog(log_path=log_folder, step_number=step, step_desc=step_name[step], key_name=kexc, file_name=ntpath.basename(sheet))
        except UnboundLocalError as uexc:
            unboundLocalLog(log_path=log_folder, step_number=step, step_desc=step_name[step], filename=ntpath.basename(sheet), variable_name=uexc.args)
        except EmptyFieldWarning as eexc:
            emptyFieldWarningLog(log_path=log_folder, step_number=step, step_desc=step_name[step], field_name=eexc.errorargs, file_name=ntpath.basename(sheet))

        print("\nCollect the imagelinks from the flatfile, sorts them and assigns the variation ID.\n")

        step += 1
        try:
            imageUpload(sheet, export, upload_folder)
        except KeyError as kexc:
            keyErrorLog(log_path=log_folder, step_number=step, step_desc=step_name[step], key_name=kexc, file_name=ntpath.basename(sheet))
        except UnboundLocalError as uexc:
            unboundLocalLog(log_path=log_folder, step_number=step, step_desc=step_name[step], filename=ntpath.basename(sheet), variable_name=uexc.args)
        except Exception as err:
            print(err)
            print("Image Upload failed!")

        print("\nActivate Marketconnection for Ebay & Amazon for all variation.\n")

        step += 1
        try:
            marketConnection(export, upload_folder, ebay=1, amazon=1, shop=1)
        except KeyError as kexc:
            keyErrorLog(log_path=log_folder, step_number=step, step_desc=step_name[step], key_name=kexc, file_name=ntpath.basename(sheet))
        except UnboundLocalError as uexc:
            unboundLocalLog(log_path=log_folder, step_number=step, step_desc=step_name[step], filename=ntpath.basename(sheet), variable_name=uexc.args)
        except EmptyFieldWarning as eexc:
            emptyFieldWarningLog(log_path=log_folder, step_number=step, step_desc=step_name[step], field_name=eexc.errorargs, file_name=ntpath.basename(sheet))
        except Exception as err:
            print(err)
            print("Market connection failed!")

        del fexc
    else:
        print("Choose a category and a name.\n")
if __name__ == '__main__':
    main()
