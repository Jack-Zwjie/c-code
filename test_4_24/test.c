#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
//int main()
//{
	//1.对NULL指针解引用
	//int* p = malloc(40);
	//*p = 10;    //对NULL进行解引用操作


	//2.对动态内存进行越界访问
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i <= 10; i++)   //边界是9，越界访问了
	//	{
	//		*(p + i) = i;
	//	}
	//}
	//free(p);
	//p = NULL;


	//3.对非动态开辟内存使用free
	//int a = 10;
	//int* p = &a;
	//free(p);
	//p = NULL;



	//使用free使用动态开辟内存的一部分
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)   //边界是9，越界访问了
	//{
	//	*p++=i;   //p指针指向了开辟空间的后面，并不是最开始的位置
	//}
	//free(p);   //释放一部分不对



	//5.对同一块动态内存多次free
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//free(p);
	//p = NULL;
	//free(p);   //第二次释放，多次释放了



	//6.动态内存开辟未释放
	//while (1)
	//{
	//	malloc(4);    //没有释放
	//	Sleep(100);
	//}
//}




//错误
//void getmemory(char* p)   
//{
//	p = (char*)malloc(100);
//
//}
//void test(void)
//{
//	char* str = NULL;
//	getmemory(str);   //str以值形式传给p，p是getmemory形参，只能函数内部有效
//	strcpy(str, "hello world");   //未释放，内存泄露
//	printf(str);
//}

//修改
void getmemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}
void test(void)
{
	char* str = NULL;
	str=getmemory(str);   //str以值形式传给p，p是getmemory形参，只能函数内部有效
	strcpy(str, "hello world");   //未释放，内存泄露
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	test();
}