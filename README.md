AmazonToPlentyMarkets

Guide to import your clothing products from your Amazon Flatfile to PlentyMarkets

Preperation

Check your Flatfile Version, the current version of this program works with the appereal flatfile of 2019.

Make sure to prepare your PlentyMarkets Account you need the following list of dataformats:
	- Item upload:
	Erstellung der Parentartikel, der Artikel aggiert dabei als eine Art Hülle zum eigentlich parent.
	Die Grund version nutzt, eine Liste, interner Nummern um die ItemID zu bestimmen. Dies ist aber 
	nicht notwendig.
	Creation of the Parentarticle, the article acts as a shell for the actual parentvariation.
	The basic version of the program uses a intern number list to fill in the ItemID. But this is no
	- Item Upload
		{
			[Typ: Item]
			CategoryLevel1Name: IMPORT
			CategoryLevel2Name: IMPORT
			CategoryLevel3Name: IMPORT
			CategoryLevel4Name: IMPORT
			CategoryLevel5Name: IMPORT
			CategoryLevel6Name: IMPORT
			ItemID: IMPORT
			PrimaryVariationCustomNumber: IMPORT
			PrimaryVariationLengthMM: IMPORT
			PrimaryVariationWidthMM: IMPORT
			PrimaryVariationHeightMM: IMPORT
			PrimaryVariationWeightG: IMPORT
			PrimaryVariationName: IMPORT
			PrimaryVariationPurchasePrice: IMPORT
			PrimaryVariationMainWarehouse: IMPORT
			ItemOriginCountry: IMPORT
			ItemProducer: IMPORT
			ItemProducerID: IMPORT
			ItemTextName: IMPORT
			ItemTextDescription: IMPORT
		}
	- Variation Upload:
	Erstellung der Variationen, diese werden dem im Itemupload hochgeladenen parent zugewiesen.
		{
			[Typ: Variation]
		 	ItemID: IMPORT
			VariationID: ABGLEICH <---		
			VariationNumber: IMPORT 		
			VariationName: IMPORT
			Position: IMPORT
			LengthMM: IMPORT
			WidthMM: IMPORT
			HeightMM : IMPORT
			WeightG: IMPORT
			VariationAttributes: IMPORT 		
			PurchasePrice: IMPORT 		
			MainWarehouse: IMPORT 		
			Availability: IMPORT 		
			AutoStockVisible: IMPORT
		}
	- Attribute Upload
	Erstellung der in der Liste genutzten Farben ,Größen und Materialien im Plentymarket system. 
		{
			VORBEDINGUNG für alle anderen Uploads
			[Typ: Attribute]
		 	AttributeBackendName: ABGLEICH <---		
			AttributeID: ABGLEICH <---		
			AttributeValueBackendName: IMPORT		
			AttributeValueFrontendName: IMPORT
			AttributeValuePosition: IMPORT 		
			Lang
		}
	- Active Upload:
		{
			VORBEDINGUNG: Kategorien gesetzt
			MUSS extra durchgeführt werden und kann nicht im Variation Upload gesetzt werden.
			[Typ: Variation]
		 	Active: IMPORT 		
			VariationID: ABGLEICH <---	
		}
	- SalePrice Upload:
		{
			[Typ: Variation_Sales_Price]
		 	VariationID: ABGLEICH <---	 		
			IsNet: IMPORT 		
			VariationPrice: IMPORT 		
			SalesPriceID: ABGLEICH <---	
		}
	- Variation Barcode Upload:
	Wenn vorhanden können hiermit die EAN(UPC), GTIN oder ISBN Nummern hochgeladen werden.
		{
			[Typ: Variation_Barcode]
		 	BarcodeID: IMPORT  		
			BarcodeName: NOTHING  			
			BarcodeType: NOTHING 			
			Code: IMPORT  		
			VariationID: IMPORT  		
			VariationNumber: ABGLEICH <---	
		}