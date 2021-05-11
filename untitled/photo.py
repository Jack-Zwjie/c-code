#人脸采集
import cv2

print("photo python file....")

def take_photo():

    cap = cv2.VideoCapture(0)  # cv2表示opencv模块，打开默认摄像头

    faceCascade = cv2.CascadeClassifier('D:\MobileFile\opencv\sources\data\haarcascades/haarcascade_frontalface_default.xml')  ##加载xml文件

    user_id = input("请输入用户id:")
    count = 1
    while True:

        ok,img=cap.read() #ok表示是否读到数据 img表示放在img里面

        gray=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)#彩色照片准换黑白

        faces=faceCascade.detectMultiScale(   #faces放了所有脸的坐标
            gray,
            scaleFactor=1.5,
            minNeighbors=5,
            minSize=(32,32)
        )
        for(x,y,w,h)in faces:
            #cv2.putText(img,'zhang',(x+w+5,y-5),font,2,(0,3,255),2) #在边框上写字
            cv2.imwrite("./Facedata/User."+user_id+"."+str(count)+".jpg",gray[y:y+h,x:x+w]) #拍取照片并把脸存在文件
            cv2.rectangle(img, (x, y), (x + w, y + h), (0, 0, 255), 2)  # 圈住人脸，控制边框的颜色
            count+=1
        if count==101:
            break

        cv2.imshow('video',img)   #展示opencv自带的窗口，img是显示的数据

        key=cv2.waitKey(1)

        if key==27:
            break
    cap.release()
    cv2.destroyAllWindows()