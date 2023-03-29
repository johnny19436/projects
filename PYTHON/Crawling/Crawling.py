#抓原始碼
import urllib.request as req
url="https://www.ptt.cc/bbs/movie/index.html"
#建立request物件,附加Request-headers的資訊
request=req.Request(url,headers={
    "User-Agent":"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.102 Safari/537.36"
})
with req.urlopen(request) as response:
    data=response.read().decode("utf-8")
import bs4
root=bs4.BeautifulSoup(data,"html.parser")
titles=root.find_all("div",class_="title")
for title in titles:
    if title.a !=None:
        print(title.a.string)