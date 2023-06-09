import cv2
import numpy as np

#cv2->(x,y)
#else->(y,x)

img=np.zeros((512,512,3),np.uint8)
#print(img)
#img[200:300,100:300]=255,0,0 #(y,x)draw colors

cv2.line(img,(0,0),(img.shape[1],img.shape[0]),(0,255,0),3)#(img,start(x,y),end(x,y),color,粗細)
cv2.rectangle(img,(0,0),(250,350),(0,0,255),cv2.FILLED)
cv2.circle(img,(400,50),30,(255,255,0),5)#(img,start,r,color,粗度粗度)
cv2.putText(img," OPENCV ",(300,200),cv2.FONT_HERSHEY_COMPLEX,1,(0,150,0),3)#(img,text,start,font,size,color,粗度)

cv2.imshow("Image",img)

cv2.waitKey(0)