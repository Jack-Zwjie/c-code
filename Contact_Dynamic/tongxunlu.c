#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"contach.h"
//ͨѶ¼
//���1000�����ѵ���Ϣ
//����  �绰  ����  �Ա�  סַ  
//���Ӻ�����Ϣ
//ɾ��������Ϣ
//���Һ�����Ϣ
//�޸ĺ�����Ϣ
//��ӡ������Ϣ
//����
void menu()
{
	printf("******************************************\n");
	printf("********** 1.���          2.ɾ�� ********\n");
	printf("********** 3.����          4.�޸� ********\n");
	printf("********** 5.��ӡ          6.���� ********\n");
	printf("********** 0.�˳�                 ********\n");
}
int main()
{
	int input = 0;
	struct contact con;    //con�����Ǵ�����ͨѶ¼
	initcontact(&con);   //��ʼ��ͨѶ¼
	do
	{
		menu();
		printf("��ѡ��:");
		scanf_s("%d", &input);
		switch (input)
		{
		case EXIT:
			DestroyContact(&con);
			printf("�Ƴ�ͨѶ¼��");
			break;
		case ADD:
			addcontact(&con);     //��ʼ��ͨѶ¼
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
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}