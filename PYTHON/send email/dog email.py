import os
import smtplib
import requests
from email.message import EmailMessage

dog_info=requests.get('https://api.thedogapi.com/v1/images/search').json()[0]
dog_url=dog_info['url']

EMAIL_ADDRESS = "johnny194369672@gmail.com"
EMAIL_PASSWORD = "a194369672"

msg = EmailMessage()
msg['Subject'] = "Dog!"
msg['From'] = ["johnny194369672@gmail.com"]
msg['To'] = ['johnny194369672@gmail.com']

msg.set_content(f'Here is your dog!\n{dog_url}')
msg.add_alternative(f'Here is your dog!\n<img src="{dog_url}" width="300px">',subtype='html')

with smtplib.SMTP_SSL('smtp.gmail.com', 465) as smtp:
    smtp.login(EMAIL_ADDRESS, EMAIL_PASSWORD)
    smtp.send_message(msg)