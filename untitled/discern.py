#识别照片

import numpy as np
import os
import cv2
from PIL import Image
def discern_face():

    cap=cv2.VideoCapture(0)
    font=cv2.FONT_HERSHEY_SIMPLEX

    recognizer=cv2.face.LBPHFaceRecognizer_create()#创建一个训练器

    faceCascade = cv2.CascadeClassifier('D:\MobileFile\opencv\sources\data\haarcascades/haarcascade_frontalface_default.xml')  ##加载xml文

    recognizer.read('people.yml')

    while True:
        ok,img=cap.read()
        gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)  # 彩色照片准换黑白
        faces = faceCascade.detectMultiScale(  # faces放了所有脸的坐标
            gray,
            scaleFactor=1.5,
            minNeighbors=5,
            minSize=(32, 32)
        )
        for (x, y, w, h) in faces:
            cv2.rectangle(img, (x, y), (x + w, y + h), (0, 0, 255), 2)  # 圈住人脸，控制边框的颜色
            id,con=recognizer.predict(gray[y:y+h,x:x+w]) #识别后返回id和精准度
            if id==1001:
                name='zhangsan'
            if id==1002:
                name='lisi'
            cv2.putText(img,str(id),(x+5,y-5),font,2,(0,0,255),2)

        cv2.imshow('video',img)
        key=cv2.waitKey(1)
        if key==27:
            break