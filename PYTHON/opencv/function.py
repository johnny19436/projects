import cv2
import numpy as np

img=cv2.imread("Resources/cat.jpg")
kernel=np.ones((5,5),np.uint8)#for Dialation

imgGray=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)#灰色
imgBlur=cv2.GaussianBlur(imgGray,(7,7),0)#模糊
imgCanny=cv2.Canny(img,75,75)#素描
imgDialation=cv2.dilate(imgCanny,kernel,iterations=1)#白方格
imgEroded=cv2.erode(imgDialation,kernel,iterations=1)#黑方格

cv2.imshow("Gray Image",imgGray)
cv2.imshow("Blur Image",imgBlur)
cv2.imshow("Canny Image",imgCanny)
cv2.imshow("Dialation Image",imgDialation)
cv2.imshow("Eroded Image",imgEroded)
cv2.waitKey(0)