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
            item.write('attribute_file=\n')
            item.write('file_change_date=\n')
    if(os.path.isfile(configpath)):
        return configpath
    else:
        return None

def config_read(configpath):
    config = {'upload_folder':'', 'data_folder':'',
              'attribute_file':'', 'file_change_date':''}
    if(not(configpath)):
        configpath = config_creation()
    with open(configpath, mode='r') as item:
        rows = [row.strip(' ').strip('\n').split(';') for row in item]

        for row in rows:
            option = "".join(row[0]).split('=')

            if(option[0].strip(' ') == 'upload_folder'):
                config[ 'upload_folder' ] = option[1].strip(' ')
            if(option[0].strip(' ') == 'data_folder'):
                config[ 'data_folder' ] = option[1].strip(' ')
            if(option[0].strip(' ') == 'attribute_file'):
                config[ 'attribute_file' ] = option[1].strip(' ')
            if(option[0].strip(' ') == 'file_change_date'):
                config[ 'file_change_date' ] = option[1].strip(' ')

    return config

def config_write(configpath, data):
    # read the current content of the config
    with open(configpath, mode='w') as item:
        writer = csv.DictWriter(item, delimiter='=', lineterminator='\n', fieldnames=['title', 'value'])

        for row in data:
            writer.writerow(data[row])

