#训练照片
import cv2
import os
import numpy as np
from PIL import Image
def train_face():
    recognizer = cv2.face.LBPHFaceRecognizer_create()  # 创建一个训练器

    faceCascade = cv2.CascadeClassifier('D:\MobileFile\opencv\sources\data\haarcascades/haarcascade_frontalface_default.xml')  ##加载xml文

    img_path = 'Facedata'

    all_image_paths = [os.path.join(img_path, f) for f in os.listdir(img_path)]
    print(all_image_paths)

    ids = []
    face_samples = []  # 放脸的信息

    for each_img in all_image_paths:
        id =  int(os.path.split(each_img)[1].split('.')[1])

        PIL_img = Image.open(each_img).convert('L')  # 把图片转换为灰度数据#把图片转换成新联所需要的数据

        np_img = np.array(PIL_img, 'uint8')  ##将图片数据进行格式长度转换  8位

        faces = faceCascade.detectMultiScale(np_img)  ##检测数据化的矩阵里面有没有脸

        for (x, y, w, h) in faces:
            face_samples.append(np_img[y:y + h, x:x + w])  # 脸的信息放入数组
            ids.append(id)

    print(np.array(ids))
    recognizer.train(face_samples, np.array(ids))  ##进行训练需要两个要求， ids放的是所有的ID np。array[id]，重新排序
    recognizer.write('people.yml')  ##people.yml训练完的照片特征文件，识别的时候会用到