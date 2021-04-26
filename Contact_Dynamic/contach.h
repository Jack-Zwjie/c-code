#pragma once

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDER 50
#define DEFAULT_SZ 3


#include<stdio.h>
#include<string.h>
#include<stdlib.h>



enum option
{
	EXIT,  //0
	ADD,  //1
	DEL,  //2
	SEARCH,  //3
	MODIFY,  //4
	SHOW,  //5
	SORT  //6
};


struct people
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char adder[MAX_ADDER];
};


struct contact
{
	struct people *arr;    //存放1000个信息
	int size;     //记录当前已有的元素个数
	int capacity;  //当亲通讯录的最大容量
};


void initcontact(struct contact* ps);   //初始化通讯录
void addcontact(struct contact* ps);  //增加一个人的信息
void showcontact(const struct contact* ps);  //打印信息
void delcontact(struct contact* ps);   //删除
void searchcontact(const struct contact* ps);      //查找
void modifycontact(struct contact* ps);       //修改
void sortcontact(struct contact* ps);    //排序
void DestroyContact(struct contact* ps);   //释放空间