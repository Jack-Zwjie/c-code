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
//	for (i = 0; i < 3; i++)   //������С����
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d  ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//}




//����ָ�룬��һ��ָ��
//#include<stdio.h>
//int main()
//{
	//int* p = NULL;    //����ָ�룬ָ�����ε�ָ�룬���Դ�����εĵ�ַ
	//char* pc = NULL;  //�ַ�ָ�룬ָ���ַ���ָ�룬���Դ���ַ��ĵ�ַ
	////int arr[10] = { 0 };//����ָ�룬ָ�������ָ�룬���Դ������ĵ�ַ
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int (*p)[10] = &arr;        //����ĵ�ַҪ������
	//int i = 0;


	//int* p1[10];       //���ָ�������
	//int(*p2)[10];      //��������ָ��

	//char* arr[5];
	//char* (*p1)[5] = &arr;    //�����һ��char*���͵�����ָ����

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
//			printf("%d  ", (*(*(p + i) + j)));  //*��p+i����ʾ�ڼ��У�*��p+i��+j��ʾ�ڼ��еڼ���
//			                                    //(*(*(p+i)+j))��ʾȡ�ڼ��еڼ��еĵ�ַ
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


//int arr[5];      //��������
//int* parr1[10];   //����ָ��
//int(*parr2)[10];  //ָ������
//int(*parr3[10])[5];   //��һ�����飬��ʮ��Ԫ�أ���ÿ��Ԫ����һ��ָ��,
//                       //������ָ��ָ������������Ԫ�أ�ÿ��Ԫ��ֵint


