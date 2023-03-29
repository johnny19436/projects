import cv2
import numpy as np

img=cv2.imread("Resources/cat.jpg")

print(img.shape)#(y,x)

imgResize=cv2.resize(img,(600,300))#(x,y)

print(imgResize.shape)

imgCorpped=img[0:100,150:300]#(y,x)切割

cv2.imshow("Image",img)
cv2.imshow("Image Resize",imgResize)
cv2.imshow("Image Corpped",imgCorpped)

cv2.waitKey(0)