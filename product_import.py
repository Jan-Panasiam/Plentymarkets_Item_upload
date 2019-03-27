from tkinter import Tk
from tkinter.filedialog import askopenfilename
from sys import exit
from packages.item_upload import itemUpload, itemPropertyUpload
# from packages.attribute_upload import attributeUpload
from packages.variation_upload import variationUpload, setActive, EANUpload, marketConnection
from packages.stock_upload import stockUpload, priceUpload
from packages.amazon_data_upload import amazonSkuUpload, amazonDataUpload, asinUpload
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
    sheet = askopenfilename()
    intern_number = askopenfilename()
    print("spreadsheet csv containing the flatfile : ", sheet)
    print("spreadsheet csv containing the intern numbers : ", intern_number)
    try:
        print("\nItem Upload\n")
        itemUpload(sheet, intern_number)
    except Exception as exc:
        print(exc)
        print("Item Upload failed!")

    try:
        print("\nVariation Upload\n")
        variationUpload(sheet, intern_number)
    except Exception as exc:
        print(exc)
        print("VariationUpload failed!")

    print("###########################################################")
    print("\nUpload the files in plentymarkets, make sure that the categories are set because they are necessary for the active Upload.\n")

    moveon = input("Continue(ENTER)")

    print("\nGet a dataexport from the plentymarket site from the variation attributes, in order to access the current Variation ID.\n")
    try:
        export = askopenfilename()
    except FileNotFoundError: # pylint:disable=invalid-name,used-before-assignment
        print("No Export File!")
    except Exception as exc:
        print(exc)
        print("Something went wrong at the Export file import!")
    print("spreadsheet csv containing the export : ", export)
    try:
        print("Active, Merkmale & Price Upload")
        setActive(sheet, export)
        itemPropertyUpload(sheet, export)
        priceUpload(sheet, export)
    except FileNotFoundError as err:
        print(err)
        print("Missing Data, check if you have\n - a flatfile\n - a intern file table\n - export file from plentymarkets\n - a sheet with the stock numbers!\n")
        exit()
    print("\nOpen your amazon storage report and save it as an csv.\n")
    stocklist = askopenfilename()
    print("spreadsheet csv containing the current stock : ", stocklist)

    EANUpload(sheet, export, stocklist)
    stockUpload(sheet, stocklist)

    print("\nCreate a upload file for the SKU and Parent_SKU\nto connect existing items from amazon to plentyMarkets.\n")

    amazonSkuUpload(sheet, export)

    print("\nCreate a upload file for the additional Information to Amazon Products like bullet points, lifestyle etc.\n")

    amazonDataUpload(sheet, export)

    print("\nCollect the ASIN Numbers matching to the Variationnumber(Sku) and format them into the dataformat format.\n")

    asinUpload(export, stocklist)

    print("\nCollect the imagelinks from the flatfile, sorts them and assigns the variation ID.\n")
    try:
        imageUpload(sheet, export)
    except Exception as err:
        print(err)
        print("Image Upload failed!")

    print("\nActivate Marketconnection for Ebay & Amazon for all variation.\n")

    try:
        marketConnection(export, ebay=1, amazon=1)
    except Exception as err:
        print(err)
        print("Market connection failed!")

    # In case of new attributes uncomment and watch attribute_upload.py first
    # try:
    # attributeUpload(sheet)
    # except:
    # print("Attribute Upload failed!")


if __name__ == '__main__':
    main()
