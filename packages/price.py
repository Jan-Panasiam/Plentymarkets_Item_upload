"""
    Author: Sebastian Fricke
    License: GPLv3
    Date: 2020-04-27

    Functions for working with the price field of the Amazon Flatfile
"""

import inspect
import pandas
from packages import error


def find_price(flatfile, parent):
    """
        Parameter:
            flatfile [Dictionary] => path and encoding as strings
                                     of the flatfile
            parent [String] => Name of the parent that requires a price

        Description:
            Transfer the variation price to the parent price if the
            parent doesn't own a price

        Return:
            result [float] => price
                                0 = No variation has a price
                               -1 = Error
    """

    df = pandas.read_csv(flatfile['path'],
                         encoding=flatfile['encoding'],
                         sep=';')

    if df.empty:
        error.errorPrint(
            msg=str(f"Couldn't read {flatfile['path']}"), err='',
            linenumber=inspect.currentframe().f_back.f_lineno)
        return -1

    variation = df[df['parent_sku'] == parent]
    if variation.empty:
        error.errorPrint(
            msg=str(f"No variation for {parent} in {flatfile['path']}"),
            err='', linenumber=inspect.currentframe().f_back.f_lineno)
        return -1

    with_price = variation['standard_price'].notnull()
    if variation[with_price].empty:
        error.warnPrint(
            msg=str(f"No variation of {parent} has a price"), err='',
            linenumber=inspect.currentframe().f_back.f_lineno)
        return 0


    variation = variation.astype({'standard_price':float})
    result = variation['standard_price'].values.max()

    return result
