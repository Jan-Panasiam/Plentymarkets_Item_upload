import os
import sys
import inspect
import logging

def function_logger(path, file_level, console_level = None):
    function_name = inspect.stack()[1][3]
    logger = logging.getLogger(function_name)
    logger.setLevel(logging.DEBUG) #By default, logs all messages

    if console_level != None:
        ch = logging.StreamHandler() #StreamHandler logs to console
        ch.setLevel(console_level)
        ch_format = logging.Formatter('%(asctime)s - %(message)s')
        ch.setFormatter(ch_format)
        logger.addHandler(ch)

    fh = logging.FileHandler(os.path.join(path, 'Error.log'))
    fh.setLevel(file_level)
    fh_format = logging.Formatter('%(asctime)s - %(lineno)d - %(levelname)-8s - %(message)s')
    fh.setFormatter(fh_format)
    logger.addHandler(fh)

    return logger

def fileNotFoundLog(log_path, step_number, step_desc, file_name):
    fileNotFoundLogger = function_logger(log_path, logging.ERROR, logging.ERROR)
    fileNotFoundLogger.error("ERROR : The required file {2} was not found at Step {0} line no: {3} : {1}"
                             .format(step_number, step_desc, file_name, sys.exc_info()[2].tb_lineno))

def keyErrorLog(log_path, step_number, step_desc, key_name, file_name):
    keyErrorLogger = function_logger(log_path, logging.ERROR, logging.ERROR)
    keyErrorLogger.error("ERROR : There was no match for the key: {2} in the file {3} at Step{0} : {1}"
                             .format(step_number, step_desc, key_name, file_name))

def wrongEncodingLog(log_path, step_number, step_desc, file_name):
    wrongEncodingLogger = function_logger(log_path, logging.ERROR, logging.ERROR)
    wrongEncodingLogger.error("ERROR : The file {2} has symptoms of a different encoding, please use UTF-8. At Step {0} : {1}"
                             .format(step_number, step_desc, file_name))

def unboundLocalLog(log_path, step_number, step_desc, variable_name, file_name):
    unboundLocalLogger = function_logger(log_path, logging.ERROR, logging.ERROR)
    unboundLocalLogger.error("ERROR : In the file {2}, the variable {3} was used before any value was assigned to it.\nAt Step {0} : {1}."
                             .format(step_number, step_desc, file_name, variable_name))
def emptyFieldWarningLog(log_path, step_number, step_desc, field_name, file_name):
    emptyFieldLogger = function_logger(log_path, logging.WARN, logging.WARN)
    emptyFieldLogger.warning("EMPTY FIELD: In the file {3}, the field {2} is empty! At Step {0} : {1}.".format(step_number, step_desc, field_name, file_name))
