#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"game.h"
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < j-i-1; j++)
//		{
//
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 5,2,8,7,3,4,6,1,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//}




void menu()
{
	printf("***************************\n");
	printf("****1.play       0.exit****\n");
	printf("***************************\n");
}

void game()
{
	//printf("ɨ��\n");
	char mine[ROWS][COLS] = { 0 };//�׵���Ϣ�洢1�����ú��׵���Ϣ  
	char show[ROWS][COLS] = { 0 };   //�Ų���׵���Ϣ
	InitBoard(mine, ROWS, COLS,'0');  //��ʼ��
	InitBoard(show, ROWS, COLS,'*');
	//DisplayBoard(mine, ROW, COL);  //��ӡ
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);     //������
	//DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW,COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��=>");
		scanf_s("%d", &input);
		switch(input)
		{
			case 1:
				game();
				//printf("ɨ��\n");
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("�����������������\n");
		}
	
	} while (input);
}

int main()
{
	test();
	return 0;
}