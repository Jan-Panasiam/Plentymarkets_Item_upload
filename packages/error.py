import sys
try:
    import colorama
    if sys.platform.startswith('win'):
        colorama.init(convert=True)
except ImportError as err:
    print("colorama module required for enhanced error display")


try:
    def errorPrint(msg, err, linenumber):
        print(colorama.Fore.LIGHTRED_EX)
        if err:
            print("ERROR:\nline:{0}\t{1}\tError:{2}"
                  .format(linenumber, msg, err))
        else:
            print("ERROR:\nline:{0}\t{1}"
                  .format(linenumber, msg))
        print(colorama.Style.RESET_ALL)
except AttributeError:
    def errorPrint(msg, err, linenumber):
        if err:
            print("ERROR:\nline:{0}\t{1}\tError:{2}"
                  .format(linenumber, msg, err))
        else:
            print("ERROR:\nline:{0}\t{1}"
                  .format(linenumber, msg))

try:
    def warnPrint(msg, err, linenumber):
        print(colorama.Fore.YELLOW)
        if err:
            print("WARNING:\nline:{0}\t{1}\tWarning:{2}"
                  .format(linenumber, msg, err))
        else:
            print("WARNING:\nline:{0}\t{1}"
                  .format(linenumber, msg))
        print(colorama.Style.RESET_ALL)
except AttributeError:
    def warnPrint(msg, linenumber, err=''):
        if err:
            print("WARNING:\nline:{0}\t{1}\tWarning:{2}"
                  .format(linenumber, msg, err))
        else:
            print("WARNING:\nline:{0}\t{1}"
                  .format(linenumber, msg))

try:
    def infoPrint(msg):
        print(colorama.Fore.LIGHTBLUE_EX)
        print(f"INFO:{msg}\n")
        print(colorama.Style.RESET_ALL)
except AttributeError:
    def infoPrint(msg):
        print(f"INFO:{msg}\n")
