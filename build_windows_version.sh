#!/bin/bash

cd Windows_version/
echo "Delete all existing content of 'Windows_version'"
rm -irf *

if [ ! -f $PWD/item_upload ]; then
    echo "Build the script into a executable file using pyinstaller"
    pyinstaller -y -F -i "C:/Users/bkkas/Downloads/LogoNameless.ico" -n item_upload     "C:/Users/bkkas/Dropbox/Scripts/Item_Upload/product_import.py"
    cp C://Desktop/config.ini C://Users/bkkas/Dropbox/Scripts/Item_Upload/Windows_Version/config.ini

fi

cp ../example_config.txt Windows_version/dist/config.txt
