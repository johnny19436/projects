import unittest
from selenium import webdriver
import page



class PythonOrgSearch(unittest.TestCase):

    def setUp(self):
        self.driver = webdriver.Chrome(r"C:\Users\johnn\Desktop\PYTHON\chromedriver.exe")
        self.driver.get("http://www.python.org")
    
    def test_example(self)

    def tearDown(self):
        self.driver.close()