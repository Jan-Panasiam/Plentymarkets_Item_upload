import unittest
from packages.category import CategoryConfig

class TestCategory(unittest.TestCase):
    def test_readConfig(self):
        print('test readConfig')
        test = dict()
        test['Women.pants'] = 24
        test['Men.shirts'] = 30
        test_empty = dict()
        test_result = []
        expect_result = [True, False, False]

        instance = CategoryConfig(proj_root='', log_path='')
        instance.raw_data = ['Women.pants=24', 'Men.shirts=30']
        test_result.append(instance.readConfig())
        self.assertDictEqual(instance.id_list, test)

        empty = CategoryConfig(proj_root='', log_path='')
        instance.raw_data = []
        test_result.append(empty.readConfig())
        self.assertDictEqual(test_empty, empty.id_list)

        wrong = CategoryConfig(proj_root='', log_path='')
        wrong.raw_data = ['=24', 'Men=']
        test_result.append(wrong.readConfig())
        self.assertDictEqual(wrong.id_list, test_empty)

        self.assertListEqual(test_result, expect_result)

if __name__ == '__main__':
    unittest.main()
