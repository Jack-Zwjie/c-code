#人脸检测
import cv2

print("detection python file...")

flag=0
def face_detection():
    cap = cv2.VideoCapture(0)  # cv2表示opencv模块，打开默认摄像头
    faceCascade = cv2.CascadeClassifier('D:\MobileFile\opencv\sources\data\haarcascades/haarcascade_frontalface_default.xml')  ##加载xml文件

    while True:
        global flag;
        ok,img=cap.read() #ok表示是否读到数据 img表示放在img里面
        gray=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)#彩色照片准换黑白

        faces=faceCascade.detectMultiScale(   #faces放了所有脸的坐标
            gray,
            scaleFactor=1.5,
            minNeighbors=5,
            minSize=(32,32)
        )
        for (x, y, w, h) in faces:
            cv2.rectangle(img, (x, y), (x + w, y + h), (255, 0, 0), 2)  # 圈住人脸，控制边框的颜色
        cv2.imshow('video', img)  # 展示opencv自带的窗口，img是显示的数据

        k = cv2.waitKey(1)

        if k == 27 or flag==1:    #跳出循环
            break

    cap.release()
    cv2.destroyAllWindows()

def close_cam():
    global flag;
    flag=1
    print(flag)