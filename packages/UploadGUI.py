import tkinter
from os.path import isfile

# class checkBoxes(tkinter.Frame):
# def __init__(self, master,


class UploadGUI(tkinter.Tk):
    def __init__(self, master):
        tkinter.Tk.__init__(self, master)
        self.master = master
        self.initialize()

    def initialize(self):
        self.grid()

        self.bg = "chocolate1"
        self.txtcolor = "black"
        self.bordercolor = "red4"
        if(isfile('/home/basti/Documents/PyProjects/CSV-Project/PlentyMarkets/packages/gfx/checkbox-unchecked.png')):
            self.uncheckedimg = tkinter.PhotoImage(
                file='/home/basti/Documents/PyProjects/CSV-Project/PlentyMarkets/packages/gfx/checkbox-unchecked.png')
            print("OK img1")
        if(isfile('/home/basti/Documents/PyProjects/CSV-Project/PlentyMarkets/packages/gfx/checkbox-checked.png')):
            self.checkedimg = tkinter.PhotoImage(
                file='/home/basti/Documents/PyProjects/CSV-Project/PlentyMarkets/packages/gfx/checkbox-checked.png')
            print("OK img2")

        self.header = tkinter.Label(self, text="Choose which upload files you want to create and upload the required files.\n",
                                    anchor="w", fg=self.txtcolor, bg=self.bg)
        self.header.grid(column=0, row=0, columnspan=5, rowspan=2, sticky="EW")

        self.itemup_desc = tkinter.Label(self, text="Item Upload(Parent)\t",
                                         anchor="center", fg=self.txtcolor, bg=self.bg)
        self.itemup_desc.grid(column=0, row=3, sticky="EW")

        self.variationup_desc = tkinter.Label(
            self, text="Variation Upload\t", anchor="center", fg=self.txtcolor, bg=self.bg)
        self.variationup_desc.grid(column=1, row=3, sticky="EW")

        self.activeup_desc = tkinter.Label(self, text="variation status to active\t",
                                           anchor="center", fg=self.txtcolor, bg=self.bg)
        self.activeup_desc.grid(column=2, row=3, sticky="EW")

        self.barcodeup_desc = tkinter.Label(self, text="barcode Upload\t",
                                            anchor="center", fg=self.txtcolor, bg=self.bg)
        self.barcodeup_desc.grid(column=3, row=3, sticky="EW")

        # Trying to use a canvas as a checkbox for cosmetic reasons
        #=========================================================

        # self.itemup_check = tkinter.Canvas(width=150,height=40,bg=self.bg
        #, bd=0, highlightthickness=0)
        #self.itemup_check.bind("<Button-1>", lambda event, item = self.itemup_check, check = self.item_state, image1 = self.uncheckedimg, image2 = self.checkedimg : self.switchImage(item, check, image1, image2))
        # self.itemup_check.create_image(0,0,image=self.uncheckedimg,anchor="nw")
        #self.itemup_check.grid(column=0, row=4,sticky="EW")

        # self.variationup_check = tkinter.Canvas(width=150,height=40,bg=self.bg
        #, bd=0, highlightthickness=0)
        #self.variationup_check.bind("<Button-1>", )
        # self.variationup_check.create_image(0,0,image=self.uncheckedimg,anchor="nw")
        #self.variationup_check.grid(column=1, row=4,sticky="EW")

        # self.active_check = tkinter.Canvas(width=150,height=40,bg=self.bg
        #, bd=0, highlightthickness=0)
        #self.active_check.bind("<Button-1>", )
        # self.active_check.create_image(0,0,image=self.uncheckedimg,anchor="nw")
        #self.active_check.grid(column=2, row=4,sticky="EW")

        # self.barcodeup_check = tkinter.Canvas(width=150,height=40,bg=self.bg
        #, bd=0, highlightthickness=0)
        #self.barcodeup_check.bind("<Button-1>", )
        # self.barcodeup_check.create_image(0,0,image=self.uncheckedimg,anchor="nw")
        #self.barcodeup_check.grid(column=3, row=4,sticky="EW")

    # def switchImage(self, element, check, image1, image2):
        # for state in [self.item_state, self.variation_state, self.active_state, self.barcode_state]:
        # if(id(check) == id(state)):
        # if(state):
        # element.create_image(0,0,image=image1,anchor="nw")
        # else:
        # element.create_image(0,0,image=image2,anchor="nw")
