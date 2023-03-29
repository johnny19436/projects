from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
import time

path=r"C:\Users\johnn\Desktop\PYTHON\chromedriver.exe"
driver=webdriver.Chrome(path)

driver.get("https://www.techwithtim.net/")
print(driver.title)

search=driver.find_element_by_name("s")
#search.clear()
search.send_keys("test")
search.send_keys(Keys.RETURN)#press Enter

driver.implicitly_wait(10)#wait till element founded

main=driver.find_element_by_id("main")

#print(main.text)
articles=main.find_elements_by_tag_name("article")
for article in articles:
    header=article.find_element_by_class_name("entry-summary")
    print(header.text)
#print(driver.page_source)#html code

time.sleep(5)
driver.quit()