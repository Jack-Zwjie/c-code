#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)     //0--=-1,��-1����һ���޷���������Ϊ�ܴ����
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//}
//
//
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d  ", strlen(a));   //255,��Ϊһֵ��-128----127֮��
//}





//int main()
//{
//	float d = 1E10;   //��ѧ������
//	printf("%f\n", d);
//	return 0;
//}



//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("%d\n", n);
//	printf("%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("%d\n", n);0
//		++++++++++++++++++++++0o.............................+
//		9
//	printf("%f\n", *pFloat);
//}



//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);    //һ������Ĵ�С��һ��int�ͱ����Ĵ�С=4/4=1
//	printf("%d\n", sz);         //1
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}



//int main()
//{
//	const char* p = "asdfgh";
//	*p = 'W';         //����constʹ*p�����޸�
//	printf("%s\n", p);
//}



//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "acbdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1 == arr2)
//		printf("hehe\n");
//	else
//		printf("haha\n");    //��ӡhaha����Ϊarr1��arr2����ʼ��ַ��ͬ
//
//	if (p1 == p2)
//		printf("hehe\n");      //��ӡhehe����p1��p2ָ��ͬһ����ַ
//	else
//		printf("haha\n");    
//}



//ָ������
int main()  
{
	int arr[10] = { 0 };
	char ch[5] = { 0 };
	int* parr[4];   //���ָ�������
	char* pch[5];
}