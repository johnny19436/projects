import cv2
import numpy as np

img=cv2.imread("Resources/card.jpg")

img2=cv2.resize(img,(500,500))

width,hight=250,350
pts1=np.float32([[31,19],[287,188],[154,482],[352,440]])
pts2=np.float32([[0,0],[width,0],[0,hight],[width,hight]])
matrix=cv2.getPerspectiveTransform(pts1,pts2)
imgOutput=cv2.warpPerspective(img2,matrix,(width,hight))

cv2.imshow("Output",imgOutput)

cv2.waitKey(0)