#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"contach.h"
//通讯录
//存放1000个好友的信息
//名字  电话  年龄  性别  住址  
//增加好友信息
//删除好友信息
//查找好友信息
//修改好友信息
//打印好友信息
//排序
void menu()
{
	printf("******************************************\n");
	printf("********** 1.添加          2.删除 ********\n");
	printf("********** 3.查找          4.修改 ********\n");
	printf("********** 5.打印          6.排序 ********\n");
	printf("********** 0.退出                 ********\n");
}
int main()
{
	int input = 0;
	struct contact con;    //con是我们创建的通讯录
	initcontact(&con);   //初始化通讯录
	do
	{
		menu();
		printf("请选择:");
		scanf_s("%d", &input);
		switch (input)
		{
		case EXIT:
			DestroyContact(&con);
			printf("推出通讯录。");
			break;
		case ADD:
			addcontact(&con);     //初始化通讯录
			break;
		case DEL:
			delcontact(&con);
			break;
		case SEARCH:
			searchcontact(&con);
			break;
		case MODIFY:
			modifycontact(&con);
			break;
		case SHOW:
			showcontact(&con);
			break;
		case SORT:
			sortcontact(&con);
			break;
		default:
			printf("选择错误，请重新选择。\n");
			break;
		}
	} while (input);
	return 0;
}