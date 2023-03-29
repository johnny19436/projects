import os
import smtplib
from email.message import EmailMessage

EMAIL_ADDRESS = "johnny194369672@gmail.com"
EMAIL_PASSWORD = "a194369672"

msg = EmailMessage()
msg['Subject'] = "Test email!"
msg['From'] = ["johnny194369672@gmail.com"]
msg['To'] = ['johnny194369672@gmail.com']

msg.set_content('This is a test email!')

with smtplib.SMTP_SSL('smtp.gmail.com', 465) as smtp:
    smtp.login(EMAIL_ADDRESS, EMAIL_PASSWORD)
    smtp.send_message(msg)