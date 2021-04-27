#define _CRT_SECURE_NO_WARNINGS
//文件操作----程序文件、数据文件
//数据存储在数据文件-----取出数据文件里的数据
//文件包括:文件路径+文件名主干+文件后缀
//例:c:\code\test.txt
//文本文件     能看得懂
//二进制文件



//文件缓冲区  采用缓冲文件系统，系统自动为内存开辟一块文件缓冲区
//printf输出-----输出缓冲区-----屏幕
//#include<stdio.h>
//#include<string.h>
//int main()
//{
	//int a = 10000;
	//FILE* pf = fopen("test.txt", "wb");  //打开这个文件，以二进制形式写(wb)
	//fwrite(&a, 4, 1, pf);   //如果没有这个文件就创建一个
	//fclose(pf);
	//pf = NULL;


	//打开文件
	//fopen("test.txt","r");
	//..表示上一级路径
	//. 表示当前路径


	//FILE* pf = fopen("test.txt", "r");   //打开文件时文件不存在出错,只读文件
	//if (pf == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//	return 0;
	//}  //打开成功
	////读文件
	//
	//fclose(pf);//关闭文件
	//pf = NULL;
	//return 0;

//	int ch = fgetch(stdin);
//	fpuch(ch, stdout);
//	return 0;
//}


#include<stdio.h>
int main()
{
	//int a = 0;
	//int b = 0;
	//int c = (a = 12, b = 100, c = a + b);
	//printf("%d\n", c);
	//printf("%d  %f\n", (1.0) / 2, (1.0) / 2);  //112  0.000000

	//int a = 5;
	//int b = 0;
	//b = ++a + a++;   //++a=6  a++=7     
	//printf("%d  %d", a, b);
//	int a = 0;
//	scanf("%d", &a);
//	if (a > -5 && a < 10)
//	{
//		printf("1\n");
//	}
//	else
//	{
//		printf("0\n");
//	}
//}

//	int a = 0;
//	printf("%d", !(a > 10));   //0>10为假  !0=1


/*	int a = 0;
	scanf("%d", &a);
	printf("%f", (double)a); */    

	//int a = -100;   //补码形式存在
	//				//10000000 00000000 00000000 01100100
	//				//11111111 11111111 11111111 10011011
	//				//11111111 11111111 11111111 10011100        ffffff9c
	////char a = '#';
	//printf("%x\n%c", a, a);
	//printf("\n%d", '#');

	//char a = 0;
	//char b = 0;
	//a = getchar();
	//b = getchar();	
	//putchar(a);
	//putchar('\n');
	//putchar(b);
	//putchar('\n');
	//printf("%d", a - b);   //输入的时候中间不能加空格

	char a;
	a = getchar();
	if (a >= '0' && a <= '9')
	{
		printf("数字\n");
	}
	else if (a >= 'a' && a <= 'z')
	{
		printf("小写\n");
	}
	else if (a >= 'A' && a < 'Z')
	{
		printf("大写\n");
	}
	else
	{
		printf("其他\n");
	}
}