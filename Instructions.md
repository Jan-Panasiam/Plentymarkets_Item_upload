Version 15.04.2019 Sebastian Fricke V0.1



1. Open the Folder for the Input Files:
            =========DE============
---Öffne den Ordner für Eingabe Datein:

    Save the flatfile part of the desired item as .csv and paste
    the height, length, width and weigth to the parent
            =========DE============
----Speichere die Flatfile von dem gewünschten Artikel als .csv
    und ergänze die Höhe, Länge, Breite und Gewicht zum Vaterartikel

    Open the Intern_Number spreadsheet and copy the full_number, article_id
    and the amzon_sku to a new .csv add the postion from 0 upwards
            =========DE============
----Öffne die Intern_Number Liste und kopiere die full_number, article_id
    und die amazon_sku zu einem neuen .csv und ergänze die Position von 0 ab.

    Open your Amazon Storage Report and save the SKU(MASTER), asin, quantity(Badel 26...)
    and fnsku colums in a new .csv
            =========DE============
----Öffne deine Amazon Lagerbestandsdatei und speichere die SKU(MASTER), asin, menge(Badel 26...)
    und fnsku spalten in einer neuen .csv

2. Start the Script by either executing the file on the desktop/
    the file in Amazon2PlentySync/Windows__Version/product_import.dist/product_import.exe
            =========DE============
----Starte den Skript durch das ausführen der Datei auf dem Desktop oder mit
    der Datei in Amazon2PlentySync/Windows__Version/product_import.dist/product_import.exe

    Choose the flatfile first, then choose the Intern_Number list after that the script asks you
    to point to a destination for the upload files.
            =========DE============
----Wähle die flatfile zuerst, danach die Intern_Number Liste im Anschluss fragt der Skript dich
    nach einem Speicherort für die hochzuladenden Datein.

        Possible Mistakes: If the script error message includes a key error, then there is probably
                           a mistake inside the input file, most likely a wrong header, check the example file.
            =========DE============
--------Mögliche Fehler:   Wenn die Skript Fehlermeldung einen key error enthält, ist in der Input Datei
                           möglicherweise ein Fehler, höchstwarscheinlich die falschen Spaltennamen, vergleiche
                           mit der Beispiel Datei.

3. Upload the file item_upload to plentymarkets via the dynamic import for every new upload choose the option
    "create a new data set"
            =========DE============
----Lade die Datei item_upload hoch zu Plentymarkets durch den dynamischen Import für jeden neuen Upload
    wähle die Option "Neuen Datensatz anlegen"

        Open the item inside plentymarkets via the edit items tab, search for non active items and choose this item
            =========DE============
--------Öffne das Item in Plentymarkets durch den Artikel bearbeiten tab, suche nach nicht aktiven Artikeln und
        wähle diesen Artikel.

        Add the position of the item inside the main variation, set it to active and switch to categories choose a
        category and set the standard category
        SAVE
        Delete the item_upload_x.csv
            =========DE============
--------Ergänze die position von dem Artikel in der Hauptvariation(Parent) und setze diese Aktiv, dann Wechsel zu
        den Kategorien und wähle eine Standardkategorie.
        SPEICHERN
        Lösche die item_upload_x.csv

4. Upload the file variation_upload next.
            =========DE============
---Lade als nächstes den variation_upload hoch.

        Check if every variation was succesfully imported and if the color names are correct
            =========DE============
--------Überprüfe ob jede Variation erfolgreich importiert wurde und ob die Farbnamen stimmen.

        Go to dynamic export and choose the data format which gives every attribute of variations
        filter for the item_id (which you can find on top of the item within "edit items")
            =========DE============
--------Wechsel zum dynamischen Export und wähle das Dateiformat mit jedem Attribut einer Variante
        Filter die Ergebnisse nach der ItemID (Welche unter Artikel bearbeiten ganz oben im Artikel steht)

        Download the export, open it and save it within the input file folder.
            =========DE============
--------Lade den Export herunter, öffne ihn und speichere ihn im Input Datei Ordner.

5. The script will ask after the enter input for the export file, choose it and continue.
            =========DE============
---Der Skript wird nach dem tippen der Enter Taste nach der Export Datei fragen, wähle sie und fahre fort.

6. Then do the same for the stocklist and check the upload files for obvious mistakes before the upload
            =========DE============
---Tue das selbe bei der Lagerliste(stocklist) und überprüfe die hochzuladenden Dateien vor dem Upload
