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
	//printf("扫雷\n");
	char mine[ROWS][COLS] = { 0 };//雷的信息存储1、布置好雷的信息  
	char show[ROWS][COLS] = { 0 };   //排查出雷的信息
	InitBoard(mine, ROWS, COLS,'0');  //初始化
	InitBoard(show, ROWS, COLS,'*');
	//DisplayBoard(mine, ROW, COL);  //打印
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);     //布置雷
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
		printf("请选择=>");
		scanf_s("%d", &input);
		switch(input)
		{
			case 1:
				game();
				//printf("扫雷\n");
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("输入错误，请重新输入\n");
		}
	
	} while (input);
}

int main()
{
	test();
	return 0;
}