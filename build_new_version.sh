#!bin/bash

cd Linux_Version/
if [ -f $PWD/product_import.dist ]; then
    echo "Delete all existing content of 'Linux_Version'"
    rm -irf *
fi
if [ ! -f $PWD/product_import.dist ]; then
    echo "Build the script into a executable file using nuitka"
    python3 -m nuitka --standalone --experimental=use_pefile --experimental=use_pefile_recurse --experimental=use_pefile_fullrecurse ../product_import.py
fi
echo "Link the executable to a command in /usr/bin"
sudo ln -is $PWD/product_import.dist/product_import /usr/bin/product-import-plenty
