import tkinter as tk
from tkinter.filedialog import askopenfilename
import re
from os.path import isfile


class ItemUpload():
    def helloWorld(name="Greg"):
        print("Hello ", name)

    def byeWorld(name="Greg"):
        print("Bye ", name)


class ImportArea(tk.Frame):
    def __init__(self, master):
        tk.Frame.__init__(self, master)
        self.flatfile = ''
        self.intern = ''
        self.export = ''
        self.stock = ''
        self.button = []
        self.names = ['Flatfile', 'Intern Numbers',
                      'Export from PlentyMarkets', 'Stockfile']
        self.paths = [self.flatfile, self.intern, self.export, self.stock]
        self.initialize()

    def initialize(self):
        self.grid()

        for clm, name in enumerate(self.names):
            self.button.append(tk.Button(self, text=name,
                               command=lambda number = clm, path = self.paths:self.getPath(number, path)))
            self.button[-1].grid(sticky='WENS', row=0, column=clm, padx=1, pady=1)

    def getPath(self, num, var):
        var[num] = askopenfilename()
        for i, s in enumerate(self.paths):
            if self.paths[i] and i == 0:
                print(self.paths[i])
                app.checkArea.button[0].configure(state="normal")
                app.checkArea.button[1].configure(state="normal")
            if self.paths[i] and i == 2:
                app.checkArea.button[2].configure(state="normal")
                app.checkArea.button[3].configure(state="normal")
                app.checkArea.button[4].configure(state="normal")
                app.checkArea.button[6].configure(state="normal")
                app.checkArea.button[7].configure(state="normal")
                app.checkArea.button[8].configure(state="normal")
            if self.paths[i] and i == 3:
                app.checkArea.button[5].configure(state="normal")



# inherits from the tkinter class Frame
class CheckBoxArea(tk.Frame):
    def __init__(self, master):
        tk.Frame.__init__(self, master)
        self.master = master
        # initialize the variables from the checkbuttons
        self.itembox = tk.IntVar()
        self.variationbox = tk.IntVar()
        self.barcodebox = tk.IntVar()
        self.activebox = tk.IntVar()
        self.pricebox = tk.IntVar()
        self.stockbox = tk.IntVar()
        self.amadatabox = tk.IntVar()
        self.skubox = tk.IntVar()
        self.imgbox = tk.IntVar()
        self.desc = []
        self.button = []
        self.names = ["Item", "Variation", "Barcode",
                      "Active", "Price", "Stock",
                      "Amazon Data", "Sku", "Images"]
        self.states = [self.itembox, self.variationbox, self.barcodebox,
                       self.activebox, self.pricebox, self.stockbox,
                       self.amadatabox, self.skubox, self.imgbox]
        # create the gui elements
        self.initialize()

    def initialize(self):
        # initialize the grid window packaging
        self.grid()

        for clm, name in enumerate(self.names):
            self.desc.append(tk.Label(self, text=name))
            self.desc[-1].grid(sticky='WENS', row=0, column=clm,
                               padx=1, pady=1)

        for clm, name in enumerate(self.states):
            self.button.append(tk.Checkbutton(self, variable=name,
                               state="disabled"))
            self.button[-1].grid(sticky='WENS', row=1, column=clm,
                                 padx=1, pady=1)


class ExecutionArea(tk.Frame):
    def __init__(self, master, itemvar, variationvar, barcodevar, activevar,
                 pricevar, stockvar, amadatavar, skuvar, imgvar):
        tk.Frame.__init__(self, master)
        self.master = master
        self.itemvar = itemvar
        self.variationvar = variationvar
        self.barcodevar = barcodevar
        self.activevar = activevar
        self.pricevar = pricevar
        self.stockvar = stockvar
        self.amadatavar = amadatavar
        self.skuvar = skuvar
        self.imgvar = imgvar
        self.startScript = tk.BooleanVar()
        self.startScript.set(False)
        self.initialize()

    def initialize(self):
        self.grid()

        self.runButton = tk.Button(self, text="Run all checked Scripts",
                                   command=lambda itemvar=self.itemvar,
                                   variationvar=self.variationvar:
                                   self.hello(itemvar, variationvar))
        self.runButton.grid(row=0, column=0, sticky="EW")

    def hello(self, item, variation):
        for n in [self.itemvar, self.variationvar, self.barcodevar,
                  self.activevar, self.pricevar, self.stockvar,
                  self.amadatavar, self.skuvar, self.imgvar]:
            print(str(n) + ':' + str(n.get()))
        self.runButton.configure(state="disabled")


class UploadGUI(tk.Tk):
    def __init__(self, master):
        tk.Tk.__init__(self, master)
        self.master = master
        self.initialize()

    def initialize(self):
        self.grid()

        self.importArea = ImportArea(master=self)
        self.importArea.grid(row=0, column=0)

        self.checkArea = CheckBoxArea(master=self)
        self.checkArea.grid(row=1, column=0)

        self.exeArea = ExecutionArea(master=self,
                                     itemvar=self.checkArea.itembox,
                                     variationvar=self.checkArea.variationbox,
                                     barcodevar=self.checkArea.barcodebox,
                                     activevar=self.checkArea.activebox,
                                     pricevar=self.checkArea.pricebox,
                                     stockvar=self.checkArea.stockbox,
                                     amadatavar=self.checkArea.amadatabox,
                                     skuvar=self.checkArea.skubox,
                                     imgvar=self.checkArea.imgbox,)
        self.exeArea.grid(row=2, column=0)


# Set master(parent) to None because it is the root window
app = UploadGUI(master=None)
app.title = ("ONLY FOR TEST")

app.mainloop()
