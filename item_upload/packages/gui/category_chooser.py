import tkinter
import tkinter.filedialog
import datetime
import re
import sys
from tkinter import messagebox as tmb
from item_upload.packages import color as clr
from item_upload.packages import item_upload


class MarkingDropdown(tkinter.Frame):
    def __init__(self, master, *args, **kwargs):
        tkinter.Frame.__init__(self, master, *args, **kwargs)
        self.master = master
        self.args = args
        self.kwargs = kwargs
        self.resultvar = str()
        self.initialize()

    def initialize(self):
        self.grid()

        self.optionvar = tkinter.StringVar(self)
        self.resultvar = tkinter.StringVar(self)

        self.options = {
            'Neu': '14',
            'Alt': '9',
            'Item im Upload Prozess': '28'
        }

        self.optionvar.set('marking')

        self.dropdown_menu = tkinter.OptionMenu(self, self.optionvar,
                                                *list(self.options.keys()))
        self.dropdown_menu.grid(row=1, column=0, sticky="EW", padx=50)

        self.optionvar.trace('w', self.changeDropdown)

    def changeDropdown(self, *args):
        if self.optionvar.get() and not self.optionvar.get() == 'marking':
            self.resultvar = self.options[self.optionvar.get()]


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
            if num > 15:
                rownum = num - 16
                columnnum = 2
            if num > 30:
                rownum = num - 31
                columnnum = 3
            if num > 45:
                rownum = num - 46
                columnnum = 4

            self.element.append(tkinter.Text(self, height=1, width=25))
            self.element[num].insert(1.0, name)
            self.element[num].configure(bg=self.master.master.cget('bg'),
                                        relief='flat')
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

        self.dropdown = tkinter.OptionMenu(self, self.variable,
                                           *self.optionslist)
        self.dropdown.grid(row=1, column=1, sticky='EW')


class InfoBox(tkinter.Frame):
    def __init__(self, master, options, colordict):
        tkinter.Frame.__init__(self, master)
        self.master = master
        self.colordict = colordict
        self.options = options
        self.optionvar = tkinter.StringVar()
        self.similarcolors = []
        self.labelbox = 0
        self.initialize()

    def initialize(self):
        self.grid()

        self.optionvar.set("missing Colors")

        # Dropdown Box with all the missing colors
        self.dropdownbox = DropdownBox(self)
        self.dropdownbox.grid(row=1, column=1, columnspan=2, sticky="EW")

        self.optionvar.trace('w', self.changeDropdown)

        self.labelbox = tkinter.Label(self, text="similar colors")
        self.labelbox.grid(row=2, column=1, columnspan=3, sticky="NESW")

    def changeDropdown(self, *args):
        if self.labelbox.winfo_exists() == 1:
            self.labelbox.destroy()
        for color in self.colordict:
            if self.optionvar.get() == self.colordict[color]['color_name']:
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

        self.continue_button = tkinter.Button(self, text="Continue",
                                              command=lambda:
                                              self.master.destroyWarningbox())
        self.continue_button.grid(row=1, column=1, sticky='EW', padx=20)

        self.create_button = tkinter.Button(self, text="Create a Syncfile",
                                            command=lambda:
                                            self.master.createSyncfile())
        self.create_button.grid(row=1, column=2, sticky='EW', padx=20)

        self.stop_button = tkinter.Button(self, text='Stop',
                                          command=lambda:
                                          self.master.destroyRoot())
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

    def initialize(self):
        self.grid()

        if re.search(r'list', str(type(self.colorlist))):
            self.colorlist_length = len(self.colorlist)
            self.colorlist_string = self.createColorstring()
        else:
            print("ERROR @ WarningBox: colorlist needs to be a list\n{0}"
                  .format(type(self.colorlist)))

        self.boxdesc = \
            tkinter.Label(self,
                          text="Flatfile colors not found in Plentymarkets.")
        self.boxdesc.grid(row=1, column=1, columnspan=4,
                          sticky='NESW', pady=20, padx=20)

        self.warningmessage = tkinter.Label(self,
                                            text="Number of missing colors: " +
                                            str(self.colorlist_length) +
                                            "\nColors: " +
                                            self.colorlist_string)
        self.warningmessage.grid(row=2, column=1,
                                 columnspan=4, sticky='NESW')

        self.buttonbox = ButtonBox(master=self)
        self.buttonbox.grid(row=3, column=1, columnspan=3,
                            sticky='NESW', pady=20, padx=20)

        self.infobox = InfoBox(master=self, options=self.colorlist,
                               colordict=self.colordict)
        self.infobox.grid(row=4, column=1, columnspan=3,
                          sticky='NESW', pady=20, padx=20)

    def createSyncfile(self):
        clr.create_attributesync(self.colordict, self.master.master.upath)
        self.master.withdraw()

    def destroyWarningbox(self):
        self.master.withdraw()

    def destroyRoot(self):
        self.master.master.destroy()

    def createColorstring(self):
        colorstring = ''

        if len(self.colorlist) > 3:
            colorstring = ' , '.join(self.colorlist[0:3]) + '...'
        else:
            colorstring = ' , '.join(self.colorlist)

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
        self.activityvar = tkinter.StringVar(self)
        self.resultvar = tkinter.StringVar(self)

        self.options = self.master.cat

        self.optionvar.set('category')

        self.menu_header_major = tkinter.Label(self, text='category')
        self.menu_header_major.grid(row=0, column=0, sticky='NESW')

        self.dropdown_menu = tkinter.OptionMenu(self, self.optionvar,
                                                *list(self.options.keys()))
        self.dropdown_menu.grid(row=1, column=0, sticky="EW", padx=50)

        self.optionvar.trace('w', self.changeDropdown)
        self.resultvar.trace('w', self.addDesc)

        # Create a textbox to show the result of the choosing
        self.resultbox = tkinter.Entry(self, textvariable=self.resultvar,
                                       width=50, bg="white")
        self.resultbox.grid(row=2, column=0, columnspan=2,
                            sticky="EW", padx=50)

        # Create a label with an info about the standard category
        # which hides if the entry is empty
        self.category_info =\
            tkinter.Label(self,
                          text="first entry used as standard category!")

    def changeDropdown(self, *args):
        if not self.resultbox.get():
            self. resultbox.insert(tkinter.INSERT,
                                   self.options[self.optionvar.get()])
        else:
            if(self.optionvar.get() and
               not(self.options[self.optionvar.get()] in
                   [int(i) for i in self.resultbox.get().strip(' ').split(',')])):
                self.resultbox.insert(tkinter.INSERT, ', ' +
                                      str(self.options[self.optionvar.get()]))

    def addDesc(self, *args):
        if len(self.resultvar.get()) > 1:
            self.category_info.grid(row=3, columnspan=2, sticky="EW")
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
        self.desc_label.grid(rowspan=2, column=1, sticky="EW")


class CategoryChooser(tkinter.Tk):
    def __init__(self, master, categories, upath='', flatfile='',
                 atrpath='', atrdate=''):
        tkinter.Tk.__init__(self, master)
        self.master = master
        self.upath = upath
        self.flatfile = flatfile
        self.atrpath = atrpath
        self.atrdate = atrdate
        self.cat = categories
        self.newpath = {'upload-path': '', 'attribute-path': ''}
        self.data = {'name': '', 'categories': '', 'webshopname': ''}
        self.protocol("WM_WINDOW_DELETE", self.closeApp)
        self.missingcolors = {}
        self.toplevel_warning = 0
        self.warningbox = 0
        # Window position properties
        self.window_w = self.winfo_reqwidth()
        self.window_h = self.winfo_reqheight()
        self.screen_w = self.winfo_screenwidth()
        self.screen_h = self.winfo_screenheight()
        # For dual monitor
        if self.screen_w/3 > self.screen_h:
            self.positionright = int(self.screen_w/4 - self.window_w)
            self.positiondown = int(self.screen_h/3 - self.window_h)
        # For single screen
        else:
            self.positionright = int(self.winfo_screenwidth()/2 -
                                     self.window_w)
            self.positiondown = int(self.winfo_screenheight()/3 -
                                    self.window_h)
        # geometry of the window and build the elements of the gui
        self.geometry("+{}+{}".format(self.positionright, self.positiondown))
        self.initialize()

    def initialize(self):
        self.grid()

        if self.atrpath['path']:
            self.checkColors(self.flatfile, self.atrpath)

        self.pathdesc = DescBox(master=self,
                                desctext="The current Upload path is: \n" +
                                self.upath)
        self.pathdesc.grid(row=0, columnspan=3, pady=10, padx=10)

        self.attributedesc = DescBox(master=self,
                                     desctext="The current attribute file:\n" +
                                     self.atrpath['path'] +
                                     '\nUpload-date:\t' + self.atrdate)
        self.attributedesc.grid(row=1, columnspan=3, pady=10, padx=10)

        self.changepathbutton =\
            tkinter.Button(self, text="Choose a new path",
                           command=lambda:
                           self.getNewPath("Choose a new upload folder",
                                           'upload'))
        self.changepathbutton.grid(row=2, column=1, pady=10, padx=10)

        self.changeatrbutton =\
            tkinter.Button(self, text="Choose the attribute file",
                           command=lambda:
                           self.getNewPath("Choose a new attribute file",
                                           'atr'))
        self.changeatrbutton.grid(row=2, column=2, pady=10, padx=10)

        self.dropdesc =\
            DescBox(master=self,
                    desctext="Choose the categories for the product.")
        self.dropdesc.grid(row=3, columnspan=3, pady=10, padx=10)

        self.dropdown = DropdownChooser(master=self)
        self.dropdown.grid(row=4, column=1, columnspan=2)

        self.namedesc = DescBox(
            master=self,
            desctext="Choose a name for the product (Name 1 - intern)")
        self.namedesc.grid(row=5, columnspan=3, pady=10, padx=10)

        self.namechooser = tkinter.Entry(self, width=50, bg="white")
        self.namechooser.grid(row=6, columnspan=3, pady=10, padx=10)

        self.webshopname_desc = DescBox(
            master=self,
            desctext="Choose the display name for the webshop (Name 3)")
        self.webshopname_desc.grid(row=7, columnspan=3, pady=10, padx=10)

        self.webshopname = tkinter.Entry(self, width=50, bg="white")
        self.webshopname.grid(row=8, columnspan=3, pady=10, padx=10)

        self.accept =\
            tkinter.Button(self, text="Accept",
                           command=lambda:
                           self.getInput(self.dropdown.resultbox.get(),
                                         self.namechooser.get(),
                                         self.webshopname.get()))
        self.accept.grid(row=9, column=3, pady=10, padx=10)

    def getInput(self, categories, name, webshopname):
        self.data['name'] = name
        self.data['categories'] = categories
        self.data['webshopname'] = webshopname
        # Close the gui after accepting the input to stop the mainloop
        self.closeApp()

    def getNewPath(self, title, option):
        if option == 'upload':
            print("Get the new path of the upload folder.")
            self.newpath['upload-path'] =\
                tkinter.filedialog.askdirectory(title=title)
        elif option == 'atr':
            print("Get a new attribute file.")
            self.newpath['attribute-path'] =\
                tkinter.filedialog.askopenfilename(title=title)
            self.atrdate = datetime.datetime.now().strftime("%d.%m.%Y-%H:%M")
            new_attr={'path':self.newpath['attribute-path'], 'encoding':''}
            new_attr = item_upload.checkEncoding(new_attr)
            self.checkColors(self.flatfile, new_attr)

    def checkColors(self, flatfile, attributefile):
        attributefile = item_upload.checkEncoding(attributefile)
        self.missingcolors = clr.missing_color(flatfile, attributefile)

        colorlist = []

        try:
            for color in self.missingcolors:
                colorlist.append(self.missingcolors[color]['color_name'])
            if colorlist:
                self.toplevel_warning = tkinter.Toplevel(self)
                self.toplevel_warning.title("Warning missing Colors")
                self.toplevel_warning.lift(self)
                self.toplevel_warning.geometry("+{}+{}"
                                              .format(self.positionright,
                                                      self.positiondown))
                self.warningbox = WarningBox(self.toplevel_warning, colorlist)
        except Exception as err:
            print("Error @ checkcolor: {0} - line no.: {1}"
                  .format(err, sys.exc_info()[2].tb_lineno))

    def closeApp(self):
        if self.data['name'] and self.data['categories']:
            self.withdraw()
        else:
            tmb.showerror("NO INPUT",
                          "Please enter a name and at least one category!")
