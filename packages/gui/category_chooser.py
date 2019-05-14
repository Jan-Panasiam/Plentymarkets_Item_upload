import tkinter
import tkinter.filedialog

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

        self.optionvar.set('pants')

        self.dropdown_menu = tkinter.OptionMenu(self, self.optionvar, *[ *self.options ])
        self.dropdown_menu.grid(row=0, column=0, sticky="EW")

        self.optionvar.trace('w', self.change_dropdown)

        # Create a textbox to show the result of the choosing
        self.resultbox = tkinter.Entry(self, width=50, bg="white")
        self.resultbox.grid(row=1, column=0, columnspan=2, sticky="EW")

    def change_dropdown(self, *args):
        if( not( self.resultbox.get() ) ):
            self. resultbox.insert(tkinter.INSERT, self.options[ self.optionvar.get() ] )
        else:
            self.resultbox.insert(tkinter.INSERT, ', ' + self.options[ self.optionvar.get() ] )


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
    def __init__(self, master, upath=''):
        tkinter.Tk.__init__(self, master)
        self.master = master
        self.upath = upath
        self.newpath = ''
        self.data = {'name':'', 'categories':''}
        self.initialize()
        self.protocol("WM_WINDOW_DELETE", self.close_app)

    def initialize(self):
        self.grid()

        self.pathdesc = DescBox(master=self, desctext="The current Upload path is: \n" + self.upath)
        self.pathdesc.grid(row=0, columnspan=2, pady=10, padx=10)

        self.changepathbutton = tkinter.Button(self, text="Choose a new path", command=lambda: self.get_new_path())
        self.changepathbutton.grid(row=1, column=1, pady=10, padx=10)

        self.dropdesc = DescBox(master=self, desctext="Choose the categories for the product.")
        self.dropdesc.grid(row=2, columnspan=2, pady=10, padx=10)

        self.dropdown = DropdownChooser(master=self)
        self.dropdown.grid(row=3, column=1)

        self.namedesc = DescBox(master=self, desctext="Choose a name for the product")
        self.namedesc.grid(row=4, columnspan=2, pady=10, padx=10)

        self.namechooser = tkinter.Entry(self, width=50, bg="white")
        self.namechooser.grid(row=5, columnspan=2, pady=10, padx=10)

        self.accept = tkinter.Button(self, text="Accept",
                                     command=lambda: self.get_input(self.dropdown.resultbox.get(), self.namechooser.get()))
        self.accept.grid(row=6, column=2, pady=10, padx=10)

    def get_input(self, categories, name):
        self.data['name'] = name
        self.data['categories'] = categories
        # Close the gui after accepting the input to stop the mainloop
        self.close_app()

    def get_new_path(self):
        print("Get the new path of the upload folder.")
        self.newpath = tkinter.filedialog.askdirectory()

    def close_app(self):
        self.withdraw()

