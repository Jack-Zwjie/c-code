//#define _CRT_SECURE_NO_WARNINGS
////预处理指令 
////test.c   ---编译 链接---  test.exe二进制文件  ---运行
////            翻译环境                   执行环境
////编译（编译器）            链接（连接器）
////预编译（文本操作（1、头文件的包含#include 2、注册删除 3、#define））
////编译 汇编(语法分析、词法分析、语义分析、符号汇总（例、add.c有符号add，test.c有符号add
////和main符号）) 
////目标文件(已经把汇编代码准换为二进制文件)
////每一个源文件都经过编译器处理，最后经过连接器链接
////#include<stdio.h>
////extern int add(int x, int y);
////int main()
////{
////	int a = 10;
////	int b = 20;
////	int c = add(a, b);    //add    main
////	printf("%d", c);
////}
////编译  链接
//
////程序执行过程:1、程序载入内存 2、程序执行开始 3、开始执行程序代码
////3、终止程序（正常，意外）
//
//
//#include<stdio.h>
//#include<malloc.h>
//int main()
//{
//	//	char* p = NULL;
//	//	p = (char*)malloc(100);
//	//	if (p == NULL)
//	//	{
//	//		return;
//	//	}
//	//	else
//	//	{
//	//		scanf("%s", p);
//	//		//p = p + 5;
//	//		printf("%s", p);
//	//	}
//	//	free(p);
//	//}
//
//
//	//int a[5] = { 0 };
//	//int p = a;
//	//p++;   //p是一个地址变量，可以改变
//	//a++;    //a是一个常量，不能改变
//
//
//	//printf("%s\n", __FILE__);   //代码所在的路径
//	//printf("%d\n", __LINE__);   //代码所在的行数
//	//printf("%s\n", __DATE__);   //代码的日期
//	//printf("%s\n", __TIME__);   //时间
//}

//#include<stdio.h>
//#define max 100;  //可以是字符串  是关键字  是一段代码
//                 //加了;表示用max表示（100;），并不会出错，所以下面int a=max;为两条语句，
//				 //一条是空语句
//int main()
//{
//	int a = max;    //两条语句 int a=max;   ;
//	printf("%d\n", a);
//}


#include<stdio.h>
//#define SQUARE(X) X*X     //X表示参数，SQUARE(X)是一个宏，宏是替换的，并不是传参
//#define DOUBLE(X) X+X    //宏定义时尽量对操作符的运行有一定的预见，并加上适当的括号
//int main()
//{
//	int ret = SQUARE(5);    //25
//	int a = SQUARE(5+1);    //11    5+1*5+1=11
//	int b = 10 * DOUBLE(5);  //55   10*5+5
//	printf("%d  %d  %d\n", ret, a, b);
//}


#include<stdio.h>
//用函数不能正确输出
//用宏可以
//#define PRINT(X) printf("hufxjnv asfjxhcxk "#X" jvskv %d\n", X)
//void print(int a)
//{
//	printf("hufxjnv asfjxhcxk jvskv %d\n", a);//函数不能把数字插入字符串
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	print(a);
//	print(b);
//	//PRINT(a);
//	//PRINT(b);
//}

#define CAT(X,Y) X##Y
int main()
{
	int class84 = 2019;
	printf("%d\n", CAT(class, 84));   //##直接吧两边的符号合在一起
	                                  //这题吧class和84连接在一起为class84，就是2019
}