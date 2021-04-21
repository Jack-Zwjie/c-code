#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//枚举    //初始值按顺序自增
//一一列举
//
//可读性更高
//和#define定义的标识符比较美具有类型检查，更加严谨
//防止命名污染
//便于调试
//使用方便，一次可以定义多个常量
//enum sex
//{
//	//枚举的可能取值
//	MALE = 2,    //2
//	FEMALE,   //3
//	SECRET = 15  //15      //给常量赋初始值
//};
//enum color
//{
//	RED,      //0
//	YELLOW,   //1 
//	BLUE       //2
//};
//int main()
//{
//	//enum sex s = MALE;
//	//enum color c = BLUE;
//	printf("%d  %d  %d", RED, YELLOW, BLUE);
//}



//#include<stdio.h>
//联合,成员共用一块空间，空间最小的大小是最大一个成员的大小,联合体大小和结构体计算相同
//union un    //联合里面的c和i占同一个空间，使用i的时候不能用c，反之亦然
//{
//	char c;   //1
//	int i;    //4
//};
//int main()
//{
//	union un u;
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	printf("%d\n", sizeof(u));    //4
//}



//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int a = 1;      //01 00 00 00小端存储           00 00 00 01大端存储
//	int ret = check_sys();
//	if (ret == 1)
//
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//}



//enum sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum sex s = MALE;
//	printf("%d\n", sizeof(s));
//	return 0;
//}