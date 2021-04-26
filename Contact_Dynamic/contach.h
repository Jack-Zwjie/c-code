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
	struct people *arr;    //���1000����Ϣ
	int size;     //��¼��ǰ���е�Ԫ�ظ���
	int capacity;  //����ͨѶ¼���������
};


void initcontact(struct contact* ps);   //��ʼ��ͨѶ¼
void addcontact(struct contact* ps);  //����һ���˵���Ϣ
void showcontact(const struct contact* ps);  //��ӡ��Ϣ
void delcontact(struct contact* ps);   //ɾ��
void searchcontact(const struct contact* ps);      //����
void modifycontact(struct contact* ps);       //�޸�
void sortcontact(struct contact* ps);    //����
void DestroyContact(struct contact* ps);   //�ͷſռ�