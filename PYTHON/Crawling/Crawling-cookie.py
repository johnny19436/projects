#抓原始碼
import urllib.request as req
def getData(url):
    #建立request物件,附加Request-headers的資訊
    request=req.Request(url,headers={
        "cookie":"over18=1",
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
    nextLink=root.find("a",string="‹ 上頁")#找到內文是上頁的
    return nextLink["href"]
#抓取頁面的標題
pageURL="https://www.ptt.cc/bbs/Gossiping/index.html"
cnt=0
while cnt<5:
    print("\n")
    pageURL="https://www.ptt.cc"+getData(pageURL)
    cnt+=1