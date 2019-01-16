from tkinter import Tk
from tkinter.filedialog import askopenfilename
from sys import exit
from packages.item_upload import itemUpload
from packages.attribute_upload import attributeUpload
from packages.variation_upload import variationUpload, setActive, EANUpload
from packages.stock_upload import stockUpload, priceUpload
from packages.UploadGUI import UploadGUI


def main():
    #app = UploadGUI(None)
    #app.title("Amazon Flatfile to PlentyMarkets Upload")
    # app.mainloop()
    '''
    Command Line Test Version will be used within the GUI as soon as it is finished
    '''
    root = Tk()
    root.withdraw()
    sheet = askopenfilename()
    intern_number = askopenfilename()
    print("spreadsheet csv containing the flatfile : ", sheet)
    print("spreadsheet csv containing the intern numbers : ", intern_number)
    try:
        itempath = itemUpload(sheet, intern_number)
    except Exception as exc:
        print(exc)
        print("Item Upload failed!")

    try:
        variationpath = variationUpload(sheet, intern_number)
    except Exception as exc:
        print(exc)
        print("VariationUpload failed!")

    print("\nGet a dataexport from the plentymarket site from the variation attributes, in order to access the current Variation ID.\n")
    try:
        export = askopenfilename()
    except FileNotFoundError:
        print("No Export File!")
    except Exception as exc:
        print(exc)
        print("Something went wrong at the Export file import!")
    print("spreadsheet csv containing the export : ", export)
    try:
        EANUpload(sheet, export)
        setActive(sheet, export)
        priceUpload(sheet, export)
    except FileNotFoundError as err:
        print(err)
        print("Missing Data, check if you have\n - a flatfile\n - a intern file table\n - export file from plentymarkets\n - a sheet with the stock numbers!\n")
        exit()
    print("\nOpen your amazon storage report and save it as an csv.\n")
    stocklist = askopenfilename()
    print("spreadsheet csv containing the current stock : ", stocklist)

    stockUpload(sheet, export, stocklist)
    # try:

    # In case of new attributes uncomment and watch attribute_upload.py first
    # try:
        # attributeUpload(sheet)
    # except:
        #print("Attribute Upload failed!")


if __name__ == '__main__':
    main()


