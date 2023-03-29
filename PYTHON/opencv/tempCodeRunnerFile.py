def getContours(img):
    contours,hierarchy=cv2.findContours(img,cv2.RETR_EXTERNAL,cv2.CHAIN_APPROX_NONE)
    for cnt in contours:
        area=cv2.contourArea(cnt)
        print(area)
        cv2.drawContours(imgContour,cnt,-1,(255,0,0),3)
        perl=cv2.arcLength(cnt,True)
        print(perl)
        approx=cv2.approxPolyDP(cnt,0.02*perl,True)
        print(len(approx))
        objCor=len(approx)
        x,y,w,h=cv2.boundingRect(approx)