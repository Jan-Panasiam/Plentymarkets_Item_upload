import tkinter
import tkinter.filedialog
import os
import csv
import enum
import datetime


class State(enum.Enum):
    CONFIG_UPLOAD_EXIST = 0
    CONFIG_DATA_EXIST = 1
    CONFIG_ATTR_EXIST = 2
    CONFIG_NOT_FOUND = 3
    CONFIG_BAD = 4


fields = [
    'upload_folder', 'data_folder',
    'attribute_file', 'file_change_date',
    'category_config'
]


def config_open(path, option):
    if(option not in ['r', 'w', 'a']):
        print("Bad file opening option: [{1}] used with path {0}"
              .format(path, option))
        return []

    with open(path, mode=option) as item:
        # remove spaces/newlines, create list of options between ;
        rows = [row.strip(' ').strip('\n').split(';') for row in item]

    return rows


def config_creation():
    current_path = ''
    configpath = ''

    root = tkinter.Tk()
    root.withdraw()

    current_path = os.getcwd()
    configpath = os.path.join(current_path, 'config.txt')
    if(not( os.path.isfile(configpath))):
        with open(configpath, mode='w') as item:
            item.write('upload_folder=\n')
            item.write('data_folder=\n')
            item.write('attribute_file=\n')
            item.write('file_change_date=\n')
            item.write('category_config=\n')
    if(os.path.isfile(configpath)):
        return configpath
    else:
        return None


def config_read(configpath):
    config = {'upload_folder': '', 'data_folder': '',
              'attribute_file': '', 'file_change_date': '',
              'category_config': ''}
    rows = config_open(path=configpath, option='r')

    for row in rows:
        option = "".join(row[0]).split('=')

        for field in fields:
            if(option[0].strip(' ') == field):
                config[field] = option[1].strip(' ')

    return config


def config_write(configpath, data):
    with open(configpath, mode='w') as item:
        writer = csv.DictWriter(item, delimiter='=', lineterminator='\n',
                                fieldnames=['title', 'value'])
        try:
            for row in data:
                writer.writerow(data[row])
        except Exception as err:
            print("Error @ config write: error: {0}"
                  .format(err))


def config_check(path):
    states = []
    if(not(path)):
        return [State.CONFIG_NOT_FOUND]

    rows = config_open(path=path, option='r')

    # Check if all required fields are present
    for field in fields:
        # DEBUG TEST NOT FINAL
        if(field not in rows):
            print("ERROR: field:{0} not found in {1}"
                  .format(field, rows))
            return [State.CONFIG_BAD]

    for row in rows:
        # Check if a equal sign exists
        if('=' not in row):
            print("ERROR: config options have to be split by =, = not found")
            return [State.CONFIG_BAD]

        # Check if only one equal sign was used
        elif(row.count('=') > 1):
            print("ERROR: equal sign can only be used as delimiter!")
            return [State.CONFIG_BAD]

        # Add each working file/dir from the config to the state list
        for index, field in enumerate(fields):
            option = "".join(row[0]).split('=')
            if(field == 'file_change_date' and option[1]):
                states.append(index)
            if(option[0].strip(' ') == field and option[1]):
                if(field == 'attribute_file'):
                    if(os.path.isfile(option[1].strip(' '))):
                        states.append(index)
                else:
                    if(os.path.exists(option[1].strip(' '))):
                        states.append(index)

        return states


def get_path(message, path_type, initialdir):
    path = ''
    if(path_type == 'dir'):
        path = tkinter.filedilag.askdirectory(title=message,
                                              initialdir=initialdir)
    elif(path_type == 'file'):
        path = tkinter.filedialog.askopenfilename(title=message,
                                                  initialdir=initialdir)
    return path


def get_options(configpath, initialdir):
    options = {'uploadpath': '',
               'datapath': '',
               'attributefile': '',
               'date': '',
               'category_config': ''}

    # Check the config for mistakes and correct them
    config_state = []
    config_state = config_check(path=configpath)

    if(State.CONFIG_NOT_FOUND in config_state):
        configpath = config_creation()

    elif(State.CONFIG_BAD in config_state):
        os.remove(configpath)
        configpath = config_creation

    if(State.CONFIG_UPLOAD_EXIST not in config_state or
       State.CONFIG_DATA_EXIST not in config_state or
       State.CONFIG_ATTR_EXIST not in config_state or
       State.CONFIG_NOT_FOUND in config_state or
       State.CONFIG_BAD in config_state):
        options['uploadpath'] = get_path(message='Path for Upload files',
                                         path_type='dir',
                                         initialdir=initialdir)
        options['datapath'] = get_path(message='Path for Input files',
                                       path_type='dir',
                                       initialdir=initialdir)
        options['attributefile'] = get_path(message='Path for attribute file',
                                            path_type='file',
                                            initialdir=initialdir)

        options['date'] = datetime.datetime.now().strftime("%d.%m.%Y-%H:%M")

        options['category_config'] = get_path(
                                        message='Path for the category config',
                                        path_type='file',
                                        initialdir=initialdir)

    config_write(configpath=configpath, data=options)

    return options
