//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
	//int a = 10;   //����һ���ռ���10
	//int* p = &a; //��ȡ��ַ��ȡa�ĵ�ַ�������ָ��p����
	//printf("%d", sizeof(char*));  //4
	//printf("%d", sizeof(int*));   //4
	//printf("%d", sizeof(double*));   //4
	//printf("%d", sizeof(short*));  //4


	//int a = 0x11223344;
	////int* pa = &a;
	//char* pc = &a;
	////*pa = 0;
	//*pc = 0;                //ָ�����;����۵Ľ����ò���ʱ�ܹ����ʿռ�Ĵ�С
	//						//int* p;*p�ܹ�����4���ֽ�  char* p;�ܹ�����һ���ֽ�
	//                        //double* p;�ܹ�����8���ֽ�
	//printf("%p", &pc);




	//int a = 0x11223344;
	//int* pa = &a;
	//char* pc = &a;
	//printf("%p\n", pa);      //005AFEC4
	//printf("%p\n", pa+1);   //005AFEC8     �����
	//printf("%p\n", pc);     //005AFEC4
	//printf("%p\n", pc+1);  //005AFEC5     ���һ




	//int arr[10] = { 0 };   //0 0 0 0 0 0 0 0 0 0 
	////int* p=arr;       //arr�������һ��Ԫ�صĵ�ַ1 1 1 1 1 1 1 1 1 1 
	//char* p = arr;      //1 1 0 0 0 0 0 0 0 0
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = 0;
	//	
	//}
	//return 0;




	//int a;         //�ֲ�������δ��ʼ����Ĭ�������ֵ
	//int* p=&a;      //�ֲ�����ָ�룬δ��ʼ���������һ�����ֵ
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
	//printf("%d\n",&arr[9] - &arr[0]);     //ָ���ָ�루��ַ����ַ�����м��Ԫ�ظ���



//int my_strlen(char* str)   //�����и�������Ԫ�ص�ַ
//{
//	char* start = str;         //ָ��'b'��ָ��
//	char* end = str;
//	while (*end != '\0')       //һ��ָ��'\0'��ָ��
//	{
//		end++;
//	}
//	return end - start;    //һ��ָ��'\0'��ָ��--ָ��'b'��ָ��
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	//
//	//strlen - ���ַ�������
//	//�ݹ� - ģ����ʵ�е�strlen - ��������1���ݹ鷽ʽ2
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
	//int** ppa = &pa;  //����ָ��

	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//�������� - �������
	//�ַ����� - �������
	//ָ������ - ���ָ��

	int arr[10];
	int* arr2[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
		printf("%d  ", *(arr2[i]));

}