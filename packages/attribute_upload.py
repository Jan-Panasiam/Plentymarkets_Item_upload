from csv import DictWriter, DictReader
from os.path import isfile
try:
    from sortedcontainers import SortedDict
except ImportError:
    print("the sortedcontainers module is required to run this program.")
    raise ImportError


def attributeUpload(filepath):
    #The list of column names for the upload file
    column_names_output = ['AttributeBackendName','AttributeContentPage','AttributeFrontendName','AttributeID'
                           ,'AttributeImage','AttributePosition','AttributeValueBackendName','AttributeValueComment'
                           ,'AttributeValueFrontendName','AttributeValueID','AttributeValuePosition','Lang']
    
    #initialize a Dict and a set for each attribute
    Data = SortedDict()
    colorset = set()
    sizeset = set()
    materialset = set()
    
    #open the flatfile and add each color, size and material to a set
    with open(filepath, mode='r') as item:
        reader = DictReader(item, delimiter=';')
        for row in reader:
            if(not(row['color_name']=='')):
                colorset.add(row['color_name'])
            if(not(row['size_name']=='')):
                sizeset.add(row['size_name'])
            if(not(row['outer_material_type']=='')):
                materialset.add(row['outer_material_type'])
            
    for i in range(len(colorset)):
        values = ['color_name','0','Farbname', '4', '0', '1', list(colorset)[i], '', list(colorset)[i], '',i+1, 'de']
        Data['color' + str(i+1)] = SortedDict(zip(column_names_output, values))
    for i in range(len(sizeset)):
        values = ['size_name','0','Größe', '5', '0', '2', list(sizeset)[i], '', list(sizeset)[i], '',i+1, 'de']
        Data['size' + str(i+1)] = SortedDict(zip(column_names_output, values))
    for i in range(len(materialset)):
        values = ['material_name','0','Material', '6', '0', '3', list(materialset)[i], '', list(materialset)[i], '',i+1, 'de']
        Data['material' + str(i+1)] = SortedDict(zip(column_names_output, values))
        
    #Write Data into new CSV for Upload
    #OUTPUT
    #--------------------------------------------------------------
    
    output_path_number = 1
    datatype = ".csv"
    output_path = "Upload/attribute_upload_" + str(output_path_number) + datatype
    
    while(isfile(output_path)):
        output_path_number = int(output_path_number) + 1
        output_path = "Upload/attribute_upload_" + str(output_path_number) + datatype
        
    with open(output_path, mode='a') as item:
        writer = DictWriter(item, delimiter = ";", fieldnames=column_names_output)
        writer.writeheader()
        for row in Data:
            writer.writerow(Data[row])
        
    if(isfile(output_path)):
        print("Upload file successfully created under {0}".format(output_path))