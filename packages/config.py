import tkinter
import tkinter.filedialog
import csv
import os

def config_creation():
    # variable declaration
    current_path = str('')
    configpath = str('')

    # path choosing dialog gui
    root = tkinter.Tk()
    root.withdraw()

    current_path = os.getcwd()
    configpath = os.path.join(current_path, 'config.txt')
    if(not( os.path.isfile(configpath) )):
        with open(configpath, mode='w') as item:
            item.write('upload_folder=\n')
            item.write('data_folder=\n')
    if(os.path.isfile(configpath)):
        return configpath
    else:
        return None

def config_read(configpath):
    folder = { 'upload_folder':'', 'data_folder':''}
    if(not(configpath)):
        configpath = config_creation()
    with open(configpath, mode='r') as item:
        rows = [row.strip(' ').strip('\n').split(';') for row in item]

        for row in rows:
            option = "".join(row[0]).split('=')

            if(option[0].strip(' ') == 'upload_folder'):
                folder[ 'upload_folder' ] = option[1].strip(' ')
            if(option[0].strip(' ') == 'data_folder'):
                folder[ 'data_folder' ] = option[1].strip(' ')

    return folder

def config_write(configpath, data):
    # read the current content of the config
    with open(configpath, mode='w') as item:
        writer = csv.DictWriter(item, delimiter='=', lineterminator='\n', fieldnames=['title', 'path'])

        for row in data:
            writer.writerow(data[row])

