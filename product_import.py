from tkinter import Tk
from tkinter.filedialog import askopenfilename, askdirectory
import sys
import platform
import os
import ntpath
from packages.item_upload import itemUpload, itemPropertyUpload, WrongEncodingException
from packages.variation_upload import variationUpload, setActive, EANUpload, marketConnection, EmptyFieldWarning
from packages.stock_upload import priceUpload
from packages.amazon_data_upload import amazonSkuUpload, amazonDataUpload, asinUpload, featureUpload
from packages.image_upload import imageUpload
from packages.log_files import fileNotFoundLog, keyErrorLog, wrongEncodingLog, unboundLocalLog, emptyFieldWarningLog


def main():

    #define variable used throughout the script
    upload_folder = ''
    log_folder = ''
    recent_path = ''
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
    #app = UploadGUI(None)
    #app.title("Amazon Flatfile to PlentyMarkets Upload")
    # app.mainloop()
    '''
    Command Line Test Version will be used within the GUI as soon as it is finished
    '''
    root = Tk()
    root.withdraw()
    # Check if the os is Linux, in that case the initial directory is Documents
    # Unless Documents is not available in which case it is ~
    initial_directory = '../'

    if(platform.system() == 'Linux'):
        if(os.path.exists(path='/home/' + os.getlogin() + '/Documents/')):
            initial_directory = '/home/' + os.getlogin() + '/Documents/'
        else:
            initial_directory = '/home/' + os.getlogin()


    # Get the upload folder path from the user
    upload_folder = askdirectory(initialdir=initial_directory,
                                 title="Choose a folder for the upload files.")
    # Check if there is already a log folder within the upload folder
    if( not(os.path.exists(os.path.join(upload_folder, 'log'))) ):
        log_folder = os.path.join(upload_folder, 'log')
        os.makedirs(log_folder)
    elif( os.path.exists(os.path.join(upload_folder, 'log')) ):
        log_folder = os.path.join(upload_folder, 'log')

    step += 1
    sheet = askopenfilename(initialdir=initial_directory,
                            title="Amazon Flatfile as .csv",
                            filetypes=[ ("csv files", "*.csv") ])
    if(sheet):
        recent_path = os.path.dirname(sheet)

    step += 1
    intern_number = askopenfilename(initialdir=recent_path,
                            title="The Intern Numbers as .csv",
                            filetypes=[ ("csv files", "*.csv") ])

    print("spreadsheet csv containing the flatfile : ", sheet)
    print("spreadsheet csv containing the intern numbers : ", intern_number)

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
        for element in e:
            print(element)

    print("###########################################################")
    print("\nUpload the files in plentymarkets, make sure that the categories are set because they are necessary for the active Upload.\n")

    moveon = input("Continue(ENTER)")

    print("\nGet a dataexport from the plentymarket site from the variation attributes, in order to access the current Variation ID.\n")

    step += 1
    try:
        export = askopenfilename(initialdir=recent_path,
                                title="The Export File from Plentymarkets as .csv",
                                filetypes=[ ("csv files", "*.csv") ])
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
        stocklist = askopenfilename(initialdir=recent_path,
                                title="The Stockreport from Amazon as .csv",
                                filetypes=[ ("csv files", "*.csv") ])
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
        marketConnection(export, upload_folder, ebay=1, amazon=1)
    except KeyError as kexc:
        keyErrorLog(log_path=log_folder, step_number=step, step_desc=step_name[step], key_name=kexc, file_name=ntpath.basename(sheet))
    except UnboundLocalError as uexc:
        unboundLocalLog(log_path=log_folder, step_number=step, step_desc=step_name[step], filename=ntpath.basename(sheet), variable_name=uexc.args)
    except EmptyFieldWarning as eexc:
        emptyFieldWarningLog(log_path=log_folder, step_number=step, step_desc=step_name[step], field_name=eexc.errorargs, file_name=ntpath.basename(sheet))
    except Exception as err:
        print(err)
        print("Market connection failed!")

    del moveon
    del fexc
if __name__ == '__main__':
    main()
