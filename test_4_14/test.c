#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
	//char* p = "abcdef";    //放的a的地址，因为指针只能存储四个字节，存不下6个，所以放不下，
	//						//只能放第一个元素的地址
	//printf("%d\n", sizeof(p));    //4
	//printf("%d\n", sizeof(p+1));  //4
	//printf("%d\n", sizeof(*p));   //1 第一个字符
	//printf("%d\n", sizeof(p[0]));  //1
	//printf("%d\n", sizeof(&p));   //4
	//printf("%d\n", sizeof(&p+1));  //4
	//printf("%d\n", sizeof(&p[0]+1));  //4

	//printf("%d\n", strlen(p));  //6 - 存的a的地址
	//printf("%d\n", strlen(p+1));  //5
	//printf("%d\n", strlen(*p));   //err
	//printf("%d\n", strlen(p[0]));  //err
	//printf("%d\n", strlen(&p));   //随机值
	//printf("%d\n", strlen(&p+1));  //随机值
	//printf("%d\n", strlen(&p[0]+1)); //5


	//int p[3][4] = { 0 };
	//printf("%d\n", sizeof(p));    //48   3*4*4=48
	//printf("%d\n", sizeof(p[0][0]));  //4
	//printf("%d\n", sizeof(p[0]));   //16 - p[0]相当于第一行作为数组名，把数组名单独放在sizeof()内
	//								//计算第一行的大小
	//printf("%d\n", sizeof(p[0]+1));  //4 - p[0]表示第一行第一个元素的地址
	//                                  //所以p[0]+1第一行第二个元素的地址,地址大小位4
	//printf("%d\n", sizeof(*(p[0]+1))); //4 - 第一行第二个元素，大小是4
	//printf("%d\n", sizeof(p + 1));  //4 - a表示的第一行的地址，a+1表示第二行数组的地址，地址大小是4
	//printf("%d\n", sizeof(*(p + 1)));  //16 - 第二行的大小
	//printf("%d\n", sizeof(&p[0] + 1));  //4 - 第二行的地址&p[0],第一行的地址，&p[0]+1第二行的地址
	//printf("%d\n", sizeof(*(&p[0] + 1)));  //16
	//printf("%d\n", sizeof( *p ));  //16 - p表示第一行的地址，*p表示第一行的大小
	//printf("%d\n", sizeof(p[3]));  //16


//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);    //&a+1表示跳过数组，（int *）表示强制类型转换
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));//*（a+1）是第二个元素                  *(ptr-1)是5
//}



//#include<stdio.h>
//struct test 
//{
//	int num;
//	char pcname;
//	short sdata;
//	char cha[2];
//	short sba[4];
//}* p;
//p的值位0x100000，结构体大小是20字节
//int main()
//{
//	p = (struct test*)0x100000;
//	printf("%p\n", p + 0x1);   //p加一个结构体,结构体大小是20，所以是0x00100014
//	printf("%p\n", (unsigned long)p + 0x1); //转换为long类型的无符号数，加1，所以是0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//转换为int型的无符号数，加4，所以位0x00100004
//}

//#include<stdio.h>
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x, %x", ptr1[-1], *ptr2);  //ptr1[-1]=4     *ptr2= 0x02 00 00
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//注意逗号表达式
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);          //1
//	//printf("%d\n", sizeof(a[0]));
//}



#include<stdio.h>
int main()
{
	//int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* ptr1 = (int*)(&aa + 1);
	//int* ptr2 = (int*)(*(aa + 1));
	//printf("%d,  %d", *(ptr1 - 1), *(ptr2 - 1));  //*(ptr1-1)=10    *(ptr2-1)=5


	//char* a[] = { "work","at","alibaba" };
	//char** pa = a;    //*pa表示pa指向的元素是char*类型
	//pa++;         //跳过一个char*跳过
	//printf("%s", *pa);      //*pa=at    



	//char* c[] = { "ENTER","NEW","POINT","FIRST" };//内存方式：EN   NE   PO    FI
	//char** cp[] = { c + 3,c + 2,c + 1,c };        //          c    c+1  c+2   c+3
	//char*** cpp[] = cp;

	//printf("%s\n", **++cpp);         //POINT
	//printf("%s\n", *--*++cpp + 3);  //ENTER
	//printf("%s\n", *cpp[-2]+3);    //FIRST
	//printf("%s\n", cpp[-1][-1]+1);//NEW
	
}