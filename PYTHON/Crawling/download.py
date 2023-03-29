import requests


url = 'https://query1.finance.yahoo.com/v7/finance/download/INMD?period1=1565222400&period2=1607126400&interval=1d&events=history&includeAdjustedClose=true'

req = requests.get(url)
name='DAL'
filename = f'C:/Users/johnn/Desktop/Trading/Data/{name}.csv'.format(name)
 
with open(filename, 'wb') as f:
    for chunk in req.iter_content(chunk_size=8192):
        if chunk:
            f.write(chunk)
 
#--------------------function----------------------
def download_file(url, filename=''):
    try:
        with requests.get(url) as req:
            with open(filename, 'wb') as f:
                for chunk in req.iter_content(chunk_size=8192):
                    if chunk:
                        f.write(chunk)
            return filename
    except Exception as e:
        print(e)
        return None