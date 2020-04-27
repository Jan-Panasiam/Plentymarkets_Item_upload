import pytest

from packages import price

@pytest.fixture
def price_file():
    pfile = {'path':'./tests/files/test_price_sample.csv', 'encoding':'utf-8'}
    return pfile

@pytest.fixture
def bad_file():
    pfile = {'path':'./tests/files/test_price_sample_bad.csv',
             'encoding':'utf-8'}
    return pfile

def test_find_price_good(price_file):
    parent = 'A_parent'
    result = 0

    result = price.find_price(price_file, parent)

    assert 16.8 == result

def test_find_price_bad(bad_file):
    parent = 'A_parent'
    result = 0

    result = price.find_price(bad_file, parent)

    assert 0 == result
