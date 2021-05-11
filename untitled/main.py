
##登录界面

import sys                ##导入进来的
from detection import face_detection,close_cam
from photo import take_photo
from train import train_face
from discern import discern_face
from PyQt5.QtWidgets import QApplication, QWidget, QPushButton, QLineEdit, QLabel  ##包含参数，写登陆页面

def do_take_photo():
    close_cam()
    print("开始采集100张照片")
    take_photo()
    print("采集结束..")


def do_discern():
    print("开始识别人脸")
    discern_face()

def do_train():
    print("开始训练人脸")
    train_face()
    print("训练完成")


def do_thing():

    if user_edit.text()=="1" and user_edit1.text()=="1":  ##当密码和账号相匹配的时候显示登陆成功
        print("登录成功")
        user_edit1.hide()
        user_edit.hide()
        login_bit.hide()
        login_bit1.hide()
        usr_label.hide()
        usr_label1.hide()
        discern_btn.show()
        train_btn.show()
        photo_btn.show()

        face_detection()  #检测人脸
    else:                      ##只有一个用户
        print("登陆失败")




if __name__ == "__main__":
    app=QApplication(sys.argv)
    my_win=QWidget()         ##设置一窗口
    my_win.setWindowTitle("登录窗口")
    my_win.resize(450,250)          ##设置窗口大小400*400


    usr_label=QLabel("用户名:",my_win)
    usr_label.setGeometry(50,40,100,50)
    usr_label1=QLabel("密码:",my_win)
    usr_label1.setGeometry(50,90,100,50)


    login_bit=QPushButton("登录",my_win)     ##登录按钮,放在my_win里面
    login_bit.setGeometry(50,180,120,30)         ##宽80，高40
    login_bit.clicked.connect(do_thing)         ##绑定点击，点击以后进行操作

    train_btn=QPushButton("训练",my_win)#创建两个按钮  训练 识别
    train_btn.setGeometry(100,90,80,40)
    train_btn.clicked.connect(do_train)
    train_btn.hide();    #隐藏

    photo_btn=QPushButton("采集照片",my_win)
    photo_btn.setGeometry(195,90,80,40)
    photo_btn.clicked.connect(do_take_photo)
    photo_btn.hide();

    discern_btn=QPushButton("开始识别",my_win)#识别的按钮
    discern_btn.setGeometry(280,90,80,40)
    discern_btn.clicked.connect(do_discern)
    discern_btn.hide();



    login_bit1=QPushButton("返回",my_win)
    login_bit1.setGeometry(270,180,120,30)


    user_edit=QLineEdit(my_win)        ##编辑框
    user_edit.setGeometry(140,50,250,30)   ##位置
    user_edit1=QLineEdit(my_win)
    user_edit1.setGeometry(140,100,250,30)
    user_edit1.setEchoMode(QLineEdit.Password)          ##密码米格显示



    my_win.show()            ##输出窗口
    sys.exit(app.exec_())           ##防止运行结果闪退