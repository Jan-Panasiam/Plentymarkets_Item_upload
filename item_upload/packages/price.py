"""
    Author: Sebastian Fricke
    License: GPLv3
    Date: 2020-04-27

    Functions for working with the price field of the Amazon Flatfile
"""

import inspect
import pandas

from loguru import logger


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
                         sep=';',
                         dtype={'parent_sku':str, 'item_sku':str})

    if df.empty:
        logger.error(f"Couldn't read {flatfile['path']}")
        return -1

    variation = df[df['parent_sku'] == parent]
    if variation.empty:
        logger.error(f"No variation for {parent} in {flatfile['path']}")
        return -1

    with_price = variation['standard_price'].notnull()
    if variation[with_price].empty:
        logger.warning(f"No variation of {parent} has a price")
        return 0


    variation = variation.astype({'standard_price':float})
    result = variation['standard_price'].values.max()

    return result
