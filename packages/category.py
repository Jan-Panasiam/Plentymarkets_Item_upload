from re import search

#It is possible to take the Categories from the Intern Sorting Numbers by splitting the string
def determineCategory(name, producttype, gender, level):
    output = ''
    # Determine the first Category by checking the producttype
    if(level == 1):
        if(search(r'bags',producttype.lower())):
            output = 'Bags'
        elif(search(r'accessoires',producttype.lower())):
            output = 'Accessoires'
        elif(not(search(r'(accessoires|bags)',producttype.lower()))):
            output = 'Bekleidung'
        else:
            output = ''
    elif(level == 2):
        