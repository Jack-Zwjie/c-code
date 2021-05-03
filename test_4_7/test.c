//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
	//int a = 10;   //开辟一个空间存放10
	//int* p = &a; //用取地址符取a的地址，存放在指针p里面
	//printf("%d", sizeof(char*));  //4
	//printf("%d", sizeof(int*));   //4
	//printf("%d", sizeof(double*));   //4
	//printf("%d", sizeof(short*));  //4


	//int a = 0x11223344;
	////int* pa = &a;
	//char* pc = &a;
	////*pa = 0;
	//*pc = 0;                //指针类型决定论的解引用操作时能够访问空间的大小
	//						//int* p;*p能够访问4个字节  char* p;能够访问一个字节
	//                        //double* p;能够访问8个字节
	//printf("%p", &pc);




	//int a = 0x11223344;
	//int* pa = &a;
	//char* pc = &a;
	//printf("%p\n", pa);      //005AFEC4
	//printf("%p\n", pa+1);   //005AFEC8     相差四
	//printf("%p\n", pc);     //005AFEC4
	//printf("%p\n", pc+1);  //005AFEC5     相差一




	//int arr[10] = { 0 };   //0 0 0 0 0 0 0 0 0 0 
	////int* p=arr;       //arr是数组第一个元素的地址1 1 1 1 1 1 1 1 1 1 
	//char* p = arr;      //1 1 0 0 0 0 0 0 0 0
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = 0;
	//	
	//}
	//return 0;




	//int a;         //局部不变量未初始化，默认是随机值
	//int* p=&a;      //局部变量指针，未初始化，存放了一个随机值
	//*p = 20;
	//printf("%p\n", &p);5


	//int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int* p = arr;
	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d  ", *p);
	//	p+=2;
	//}



	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%d\n",&arr[9] - &arr[0]);     //指针减指针（地址减地址）是中间的元素个数



//int my_strlen(char* str)   //函数中给的是首元素地址
//{
//	char* start = str;         //指向'b'的指针
//	char* end = str;
//	while (*end != '\0')       //一个指向'\0'的指针
//	{
//		end++;
//	}
//	return end - start;    //一个指向'\0'的指针--指向'b'的指针
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	//
//	//strlen - 求字符串长度
//	//递归 - 模拟现实中的strlen - 技术方法1，递归方式2
//	//
//	char arr[] = "bit";
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//int arr[] = { 0 };
	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);


	//int a = 10;
	//int* pa = &a;
	//int** ppa = &pa;  //二级指针

	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//整形数组 - 存放整形
	//字符数组 - 存放数组
	//指针数组 - 存放指针

	int arr[10];
	int* arr2[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
		printf("%d  ", *(arr2[i]));

}