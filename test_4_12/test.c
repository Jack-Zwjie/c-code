#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)   //有三个小数组
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d  ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//}




//数组指针，是一个指针
//#include<stdio.h>
//int main()
//{
	//int* p = NULL;    //整形指针，指向整形的指针，可以存放整形的地址
	//char* pc = NULL;  //字符指针，指向字符的指针，可以存放字符的地址
	////int arr[10] = { 0 };//数组指针，指向数组的指针，可以存放数组的地址
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int (*p)[10] = &arr;        //数组的地址要存起来
	//int i = 0;


	//int* p1[10];       //存放指针的数组
	//int(*p2)[10];      //存放数组的指针

	//char* arr[5];
	//char* (*p1)[5] = &arr;    //存放在一个char*类型的数组指针内

	//int arr1[10] = { 0 };
	//int(*p2)[10] = &arr1;

//	return 0;
//}




#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d     ", (*pa)[i]);
//	//}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d     ", *(*pa + i));
//	//}
//}


//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d  ",arr[i][j] );
//		}
//		printf("\n");
//	}
//}
//
//
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d  ", (*(*(p + i) + j)));  //*（p+i）表示第几行，*（p+i）+j表示第几行第几列
//			                                    //(*(*(p+i)+j))表示取第几行第几列的地址
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7,} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//}


//int arr[5];      //整型数组
//int* parr1[10];   //数组指针
//int(*parr2)[10];  //指针数组
//int(*parr3[10])[5];   //是一个数组，有十个元素，，每个元素是一个指针,
//                       //该数组指针指向的数组有五个元素，每个元素值int


