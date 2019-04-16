from tkinter import Tk
from tkinter.filedialog import askopenfilename, askdirectory
import sys
import platform
import os
from packages.item_upload import itemUpload, itemPropertyUpload
from packages.variation_upload import variationUpload, setActive, EANUpload, marketConnection
from packages.stock_upload import stockUpload, priceUpload
from packages.amazon_data_upload import amazonSkuUpload, amazonDataUpload, asinUpload, featureUpload
from packages.image_upload import imageUpload


def main():
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

    sheet = askopenfilename(initialdir=initial_directory,
                            title="Amazon Flatfile as .csv",
                            filetypes=[ ("csv files", "*.csv") ])
    intern_number = askopenfilename(initialdir=initial_directory,
                            title="The Intern Numbers as .csv",
                            filetypes=[ ("csv files", "*.csv") ])
    upload_folder = askdirectory(initialdir=initial_directory,
                                 title="Choose a folder for the upload files.")

    print("spreadsheet csv containing the flatfile : ", sheet)
    print("spreadsheet csv containing the intern numbers : ", intern_number)

    try:
        print("\nItem Upload\n")
        itemUpload(sheet, intern_number, upload_folder)
    except Exception as exc:
        print("Item Upload failed!\n")
        print("Here: ", exc, '\n')
        if(exc == 'item_sku'):
            print("It is very likely that you don't have the proper headers, use the english ones!\n")
        e = sys.exc_info()
        for element in e:
            print(element)

    try:
        print("\nVariation Upload\n")
        variationUpload(sheet, intern_number, upload_folder)
    except Exception as exc:
        print("VariationUpload failed!\n")
        e = sys.exc_info()
        for element in e:
            print(element)

    print("###########################################################")
    print("\nUpload the files in plentymarkets, make sure that the categories are set because they are necessary for the active Upload.\n")

    moveon = input("Continue(ENTER)")

    print("\nGet a dataexport from the plentymarket site from the variation attributes, in order to access the current Variation ID.\n")

    try:
        export = askopenfilename(initialdir="../",
                                title="The Export File from Plentymarkets as .csv",
                                filetypes=[ ("csv files", "*.csv") ])
    except FileNotFoundError: # pylint:disable=invalid-name,used-before-assignment
        print("No Export File!")
    except Exception as exc:
        print(exc)
        print("Something went wrong at the Export file import!")

    print("spreadsheet csv containing the export : ", export)

    try:
        print("Active, properties , features & price Upload")
        featureUpload(flatfile=sheet, feature='color_map', feature_id=1, folder=upload_folder)
        featureUpload(flatfile=sheet, feature='item_name', feature_id=13, folder=upload_folder)
        featureUpload(flatfile=sheet, feature='sleeve_type', feature_id=8, folder=upload_folder)
        featureUpload(flatfile=sheet, feature='pattern_type', feature_id=11, folder=upload_folder)
        featureUpload(flatfile=sheet, feature='collar_style', feature_id=12, folder=upload_folder)
        setActive(sheet, export, upload_folder)
        itemPropertyUpload(sheet, export, upload_folder)
        priceUpload(sheet, export, upload_folder)
    except FileNotFoundError as err:# pylint:disable=invalid-name,used-before-assignment
        print(err)
        print("Missing Data, check if you have\n - a flatfile\n - a intern file table\n - export file from plentymarkets\n - a sheet with the stock numbers!\n")
        sys.exit()

    print("\nOpen your amazon storage report and save it as an csv.\n")

    stocklist = askopenfilename(initialdir="../",
                            title="The Stockreport from Amazon as .csv",
                            filetypes=[ ("csv files", "*.csv") ])
    print("spreadsheet csv containing the FNSKU and ASIN : ", stocklist)

    EANUpload(sheet, export, stocklist, upload_folder)

    print("\nCreate a upload file for the SKU and Parent_SKU\nto connect existing items from amazon to plentyMarkets.\n")

    amazonSkuUpload(sheet, export, upload_folder)

    print("\nCreate a upload file for the additional Information to Amazon Products like bullet points, lifestyle etc.\n")

    amazonDataUpload(sheet, export, upload_folder)

    print("\nCollect the ASIN Numbers matching to the Variationnumber(Sku) and format them into the dataformat format.\n")

    asinUpload(export, stocklist, upload_folder)

    print("\nCollect the imagelinks from the flatfile, sorts them and assigns the variation ID.\n")

    try:
        imageUpload(sheet, export, upload_folder)
    except Exception as err:
        print(err)
        print("Image Upload failed!")

    print("\nActivate Marketconnection for Ebay & Amazon for all variation.\n")

    try:
        marketConnection(export, upload_folder, ebay=1, amazon=1)
    except Exception as err:
        print(err)
        print("Market connection failed!")

if __name__ == '__main__':
    main()
