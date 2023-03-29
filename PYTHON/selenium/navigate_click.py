from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
import time

path=r"C:\Users\johnn\Desktop\PYTHON\chromedriver.exe"
driver=webdriver.Chrome(path)

driver.get("https://www.techwithtim.net/")

link=driver.find_element_by_link_text("Python Programming")
link.click()


driver.implicitly_wait(10)
element=driver.find_element_by_link_text("Beginner Python Tutorials")
element.click()

driver.implicitly_wait(10)
element=driver.find_element_by_id("sow-button-19310003")
element.click()

#driver.back()
#driver.forward()
