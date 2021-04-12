AmazonToPlentyMarkets

Guide to import your clothing products from your Amazon Flatfile to PlentyMarkets

Preperation

Check your Flatfile Version, the current version of this program works with the appereal flatfile of 2019.

Make sure to prepare your PlentyMarkets Account you need the following list of dataformats:

	de = [Erstellung der Parentartikel, der Artikel aggiert dabei als eine Art Hülle zum eigentlich parent.
		Die Grund version nutzt, eine Liste, interner Nummern um die ItemID zu bestimmen. Dies ist aber 
		nicht notwendig.]
	en = [Creation of the Parentarticle, the article acts as a shell for the actual parentvariation.
		The basic version of the program uses a intern number list to fill in the ItemID. But this is not
		necessary.]
	- Item Upload
		{
			[Typ: Item]
			ItemID: IMPORT,											[1]
			PrimaryVariationCustomNumber: IMPORT,					[2]
            PrimaryVariationLengthMM: IMPORT,						[3]
            PrimaryVariationWidthMM: IMPORT,						[4]
            PrimaryVariationHeightMM: IMPORT,						[5] 
            PrimaryVariationWeightG: IMPORT,						[6]
            PrimaryVariationName: IMPORT, 							[7]
            PrimaryVariationMainWarehouse: IMPORT,					[8]
            PrimaryVariationPurchasePrice: IMPORT,					[9] 
            ItemOriginCountry: IMPORT,								[10]
            ItemProducer: IMPORT,									[11] 
            ItemProducerID: IMPORT,									[12]
            ItemProductType: IMPORT,								[13]
            ItemTextName: IMPORT,									[14] 
            ItemTextDescription: IMPORT,							[15] 
            ItemTextKeywords: IMPORT,								[16]
            ItemTextLang: IMPORT,									[17] 
            PrimaryVariationExternalID: IMPORT,						[18]
            PrimaryVariationActive: IMPORT,							[19]
            PrimaryVariationAutoStockInvisible: IMPORT,				[20]
            PrimaryVariationAutoStockNoPositiveStockIcon: IMPORT,	[21]
            PrimaryVariationAutoStockPositiveStockIcon: IMPORT,		[22]
            PrimaryVariationAutoStockVisible: IMPORT,				[23]
            PrimaryVariationAvailability: IMPORT,					[24]
            ItemMarking1: IMPORT, 									[25]
            ItemMarking2: IMPORT 									[26]
		}
	- Variation Upload:
	Erstellung der Variationen, diese werden dem im item_upload hochgeladenen parent zugewiesen.
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
			ExternalID: Import
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