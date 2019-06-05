import tkinter
import tkinter.filedialog
import datetime
import re
import sys
from tkinter import messagebox as tmb
from packages import color as clr
from packages import item_upload

class LabelBox(tkinter.Frame):
    def __init__(self, master, similar_names):
        tkinter.Frame.__init__(self, master)
        self.master = master
        self.similar_names = similar_names
        self.element = []
        self.initialize()

    def initialize(self):
        self.grid()

        for num, name in enumerate(self.similar_names):
            rownum = num
            columnnum = 1
            if(num>15):
                rownum = num - 16
                columnnum = 2
            if(num>30):
                rownum = num - 31
                columnnum = 3
            if(num>45):
                rownum = num - 46
                columnnum = 4

            self.element.append( tkinter.Text(self, height=1, width=25) )
            self.element[num].insert(1.0, name)
            self.element[num].configure(bg=self.master.master.cget('bg'), relief='flat')
            self.element[num].configure(state='disabled')
            self.element[num].grid(row=rownum, column=columnnum, sticky='W')

class DropdownBox(tkinter.Frame):
    def __init__(self, master):
        tkinter.Frame.__init__(self, master)
        self.master = master
        self.variable = self.master.optionvar
        self.optionslist = self.master.options
        self.initialize()

    def initialize(self):
        self.grid()

        self.dropdown = tkinter.OptionMenu(self, self.variable, *self.optionslist)
        self.dropdown.grid(row=1, column=1, sticky='EW')


class InfoBox(tkinter.Frame):
    def __init__(self, master, options, colordict):
        tkinter.Frame.__init__(self, master)
        self.master = master
        self.colordict = colordict
        self.options = options
        self.optionvar = tkinter.StringVar()
        self.similarcolors = []
        self.initialize()

    def initialize(self):
        self.grid()

        self.optionvar.set("missing Colors")

        # Dropdown Box with all the missing colors
        self.dropdownbox = DropdownBox(self);
        self.dropdownbox.grid(row=1, column=1, columnspan=2, sticky="EW")

        self.optionvar.trace('w', self.change_dropdown)

        self.labelbox = tkinter.Label(self, text="similar colors")
        self.labelbox.grid(row=2, column=1, columnspan=3, sticky="NESW")

    def change_dropdown(self, *args):
        if(self.labelbox.winfo_exists() == 1):
            self.labelbox.destroy()
        for color in self.colordict:
            if(self.optionvar.get() == self.colordict[color]['color_name']):
                self.similarcolors = self.colordict[color]['similar_names']
        # Label grid with all the similar colors in Plentymarkets
        self.labelbox = LabelBox(self, self.similarcolors)
        self.labelbox.grid(row=2, column=1, columnspan=3, sticky="NESW")


class ButtonBox(tkinter.Frame):
    def __init__(self, master):
        tkinter.Frame.__init__(self, master)
        self.master = master
        self.initialize()

    def initialize(self):
        self.grid()

        self.continue_button = tkinter.Button(self, text="Continue", command=lambda: self.master.destroy_warningbox())
        self.continue_button.grid(row=1, column=1, sticky='EW', padx=20)

        self.create_button = tkinter.Button(self, text="Create a Syncfile", command=lambda: self.master.create_syncfile())
        self.create_button.grid(row=1, column=2, sticky='EW', padx=20)

        self.stop_button = tkinter.Button(self, text='Stop', command=lambda: self.master.destroy_root())
        self.stop_button.grid(row=1, column=3, sticky='EW', padx=20)

class WarningBox(tkinter.Frame):
    def __init__(self, master, colorlist, *args, **kwargs):
        tkinter.Frame.__init__(self, master, *args, **kwargs)
        self.master = master
        self.colorlist = colorlist
        self.colorlist_length = 0
        self.colorlist_string = str()
        self.colordict = self.master.master.missingcolors
        self.args = args
        self.kwargs = kwargs
        self.initialize()
        print('initialized!')

    def initialize(self):
        self.grid()

        if(re.search(r'list', str(type(self.colorlist)))):
            self.colorlist_length = len(self.colorlist)
            self.colorlist_string = self.create_colorstring(self.colorlist)
        else:
           print("ERROR @ WarningBox: colorlist has the wrong type (needs to be a list)\n{0}".format(type(colorlist)))

        self.boxdesc = tkinter.Label(self, text="The flatfile contains colors that are not found in Plentymarkets.")
        self.boxdesc.grid(row=1,column=1,columnspan=4, sticky='NESW', pady=20, padx=20)

        self.warningmessage = tkinter.Label(self, text="Number of missing colors: " + str( self.colorlist_length ) + "\nColors: " + self.colorlist_string)
        self.warningmessage.grid(row=2,column=1,columnspan=4, sticky='NESW')

        self.buttonbox = ButtonBox(master=self)
        self.buttonbox.grid(row=3,column=1,columnspan=3, sticky='NESW', pady=20, padx=20)

        self.infobox = InfoBox(master=self, options=self.colorlist, colordict=self.colordict)
        self.infobox.grid(row=4, column=1, columnspan=3, sticky='NESW', pady=20, padx=20)

    def create_syncfile(self):
        clr.create_attributesync(self.colordict, self.master.master.upath)
        self.master.withdraw()

    def destroy_warningbox(self):
        self.master.withdraw()

    def destroy_root(self):
        self.master.master.destroy()

    def create_colorstring(self, colorlist):
        colorstring = ''

        if(len(colorlist)>3):
           colorstring =  ' , '.join(colorlist[0:3]) + '...'
        else:
           colorstring = ' , '.join(colorlist)

        return colorstring

class DropdownChooser(tkinter.Frame):
    def __init__(self, master, *args, **kwargs):
        tkinter.Frame.__init__(self, master, *args, **kwargs)
        self.master = master
        self.args = args
        self.kwargs = kwargs
        self.initialize()

    def initialize(self):
        self.grid()

        self.optionvar = tkinter.StringVar(self)
        self.resultvar = tkinter.StringVar(self)

        self.options = {'Men.Aladinhose':'34',
                        'Men.Sommerhose':'36',
                        'Men.Stoffhose':'35',
                        'Men.Fischerhose':'85',
                        'Men.Hemden': '38',
                        'Men.Jacken' :'41',
                        'Men.Hoodie' : '40',
                        'Men.Tshirt' :'39',
                        'Women.Kleid' :'62',
                        'Women.Skirt' :'87',
                        'Women.Sarong-K' :'64',
                        'Women.Tunika' :'63',
                        'Women.Top' :'65',
                        'Women.Jacken' :'84',
                        'Women.Sarong-O' :'69',
                        'Women.Hoodie' :'68',
                        'Women.Tshirt' :'66',
                        'Women.Aladinhose' :'53',
                        'Women.Fischerhose' :'96',
                        'Women.Legging' :'73',
                        'Women.Hosenrock' :'72',
                        'Women.Sommerhose' :'71',
                        'Women.Stoffhose' :'70',
                        'Acce.Men.Patch' :'80',
                        'Acce.Men.Halstuch' :'91',
                        'Acce.Men.Sarong' :'89',
                        'Acce.Men.Suncatcher' :'83',
                        'Acce.Men.Kissen' :'82',
                        'Acce.Men.Airbrush' :'81',
                        'Acce.Women.Patch' :'76',
                        'Acce.Women.Halstuch' :'90',
                        'Acce.Women.Sarong' :'88',
                        'Acce.Women.Suncatcher' :'79',
                        'Acce.Women.Kissen' :'78',
                        'Acce.Women.Airbrush' :'77',
                        'Bags.Men.Schultertasche' :'58',
                        'Bags.Men.Rucksack' :'59',
                        'Bags.Women.Schultertasche' :'60',
                        'Bags.Women.Rucksack':'61'}

        self.optionvar.set('category')

        self.dropdown_menu = tkinter.OptionMenu(self, self.optionvar, *[ *self.options ])
        self.dropdown_menu.grid(row=0, column=0, sticky="EW")

        self.optionvar.trace('w', self.change_dropdown)
        self.resultvar.trace('w', self.add_desc)

        # Create a textbox to show the result of the choosing
        self.resultbox = tkinter.Entry(self, textvariable=self.resultvar, width=50, bg="white")
        self.resultbox.grid(row=1, column=0, columnspan=2, sticky="EW")

        # Create a label with an info about the standard category which hides if the entry is empty
        self.category_info = tkinter.Label(self, text="The first category in the list will be used as standard category!")

    def change_dropdown(self, *args):
        if( not( self.resultbox.get() ) ):
            self. resultbox.insert(tkinter.INSERT, self.options[ self.optionvar.get() ] )
        else:
            self.resultbox.insert(tkinter.INSERT, ', ' + self.options[ self.optionvar.get() ] )

    def add_desc(self, *args):
        if(len(self.resultvar.get())>1):
            self.category_info.grid(row=2, columnspan=2, sticky="EW")
        else:
            self.category_info.grid_remove()



class DescBox(tkinter.Frame):
    def __init__(self, master, desctext):
        tkinter.Frame.__init__(self, master)
        self.master = master
        self.desctext = desctext
        self.initialize()

    def initialize(self):
        self.grid()

        self.desc_label = tkinter.Label(self, text=self.desctext)
        self.desc_label.grid(rowspan=2,column=1, sticky="EW")


class CategoryChooser(tkinter.Tk):
    def __init__(self, master, upath='', flatfile='', atrpath='', atrdate=''):
        tkinter.Tk.__init__(self, master)
        self.master = master
        self.upath = upath
        self.flatfile = flatfile
        self.atrpath = atrpath
        self.atrdate = atrdate
        self.newpath = {'upload-path':'', 'attribute-path':''}
        self.data = {'name':'', 'categories':''}
        self.protocol("WM_WINDOW_DELETE", self.close_app)
        self.missingcolors = {}
        # Window position properties
        self.window_w = self.winfo_reqwidth()
        self.window_h = self.winfo_reqheight()
        self.screen_w = self.winfo_screenwidth()
        self.screen_h = self.winfo_screenheight()
        # For dual monitor
        if(self.screen_w/3 > self.screen_h):
            self.positionright = int(self.screen_w/4 - self.window_w)
            self.positiondown = int(self.screen_h/3 - self.window_h)
        # For single screen
        else:
            self.positionright = int(self.winfo_screenwidth()/2 - self.window_w)
            self.positiondown = int(self.winfo_screenheight()/3 - self.window_h)
        # geometry of the window and build the elements of the gui
        self.geometry("+{}+{}".format(self.positionright, self.positiondown))
        self.initialize()

    def initialize(self):
        self.grid()

        if(self.atrpath['path']):
            self.check_colors(self.flatfile, self.atrpath)

        self.pathdesc = DescBox(master=self, desctext="The current Upload path is: \n" + self.upath)
        self.pathdesc.grid(row=0, columnspan=3, pady=10, padx=10)

        self.attributedesc = DescBox(master=self, desctext="The current attribute file:\n" + self.atrpath['path'] + '\nUpload-date:\t' + self.atrdate)
        self.attributedesc.grid(row=1, columnspan=3, pady=10, padx=10)

        self.changepathbutton = tkinter.Button(self, text="Choose a new path", command=lambda: self.get_new_path("Choose a new upload folder", 'upload'))
        self.changepathbutton.grid(row=2, column=1, pady=10, padx=10)

        self.changeatrbutton = tkinter.Button(self, text="Choose the attribute file", command=lambda: self.get_new_path("Choose a new attribute file", 'atr'))
        self.changeatrbutton.grid(row=2, column=2, pady=10, padx=10)

        self.dropdesc = DescBox(master=self, desctext="Choose the categories for the product.")
        self.dropdesc.grid(row=3, columnspan=3, pady=10, padx=10)

        self.dropdown = DropdownChooser(master=self)
        self.dropdown.grid(row=4, column=1, columnspan=2)

        self.namedesc = DescBox(master=self, desctext="Choose a name for the product")
        self.namedesc.grid(row=5, columnspan=3, pady=10, padx=10)

        self.namechooser = tkinter.Entry(self, width=50, bg="white")
        self.namechooser.grid(row=6, columnspan=3, pady=10, padx=10)

        self.accept = tkinter.Button(self, text="Accept",
                                     command=lambda: self.get_input(self.dropdown.resultbox.get(), self.namechooser.get()))
        self.accept.grid(row=7, column=3, pady=10, padx=10)

    def get_input(self, categories, name):
        self.data['name'] = name
        self.data['categories'] = categories
        # Close the gui after accepting the input to stop the mainloop
        self.close_app()

    def get_new_path(self, title, option):
        if(option == 'upload'):
            print("Get the new path of the upload folder.")
            self.newpath['upload-path'] = tkinter.filedialog.askdirectory(title=title)
        elif(option == 'atr'):
            print("Get a new attribute file.")
            self.newpath['attribute-path'] = tkinter.filedialog.askopenfilename(title=title)
            self.atrdate = datetime.datetime.now().strftime("%d.%m.%Y-%H:%M")
            self.check_colors(self.flatfile, self.newpath['attribute-path'])

    def check_colors(self, flatfile, attributefile):
        attributefile = item_upload.check_encoding(attributefile)
        self.missingcolors = clr.missingColor(flatfile, attributefile)

        colorlist = []

        try:
            for color in self.missingcolors:
                colorlist.append(self.missingcolors[color]['color_name'])
            if(len(colorlist) > 0):
                self.toplevelWarning = tkinter.Toplevel(self)
                self.toplevelWarning.title("Warning missing Colors")
                self.toplevelWarning.lift(self)
                #self.toplevel_positiondown = int( self.winfo_screenheight()/1.3 - self.window_h)
                self.toplevelWarning.geometry("+{}+{}".format(self.positionright, self.positiondown))
                self.warningbox = WarningBox(self.toplevelWarning, colorlist)
        except Exception as err:
            print("Error @ checkcolor: {0} - line no.: {1}".format(err, sys.exc_info()[2].tb_lineno))

    def close_app(self):
        if(self.data['name'] and self.data['categories']):
            self.withdraw()
        else:
            tmb.showerror("NO INPUT", "Please enter a name and at least one category!")
