#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
//int main()
//{
	//1.��NULLָ�������
	//int* p = malloc(40);
	//*p = 10;    //��NULL���н����ò���


	//2.�Զ�̬�ڴ����Խ�����
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i <= 10; i++)   //�߽���9��Խ�������
	//	{
	//		*(p + i) = i;
	//	}
	//}
	//free(p);
	//p = NULL;


	//3.�ԷǶ�̬�����ڴ�ʹ��free
	//int a = 10;
	//int* p = &a;
	//free(p);
	//p = NULL;



	//ʹ��freeʹ�ö�̬�����ڴ��һ����
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)   //�߽���9��Խ�������
	//{
	//	*p++=i;   //pָ��ָ���˿��ٿռ�ĺ��棬�������ʼ��λ��
	//}
	//free(p);   //�ͷ�һ���ֲ���



	//5.��ͬһ�鶯̬�ڴ���free
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//free(p);
	//p = NULL;
	//free(p);   //�ڶ����ͷţ�����ͷ���



	//6.��̬�ڴ濪��δ�ͷ�
	//while (1)
	//{
	//	malloc(4);    //û���ͷ�
	//	Sleep(100);
	//}
//}




//����
//void getmemory(char* p)   
//{
//	p = (char*)malloc(100);
//
//}
//void test(void)
//{
//	char* str = NULL;
//	getmemory(str);   //str��ֵ��ʽ����p��p��getmemory�βΣ�ֻ�ܺ����ڲ���Ч
//	strcpy(str, "hello world");   //δ�ͷţ��ڴ�й¶
//	printf(str);
//}

//�޸�
void getmemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}
void test(void)
{
	char* str = NULL;
	str=getmemory(str);   //str��ֵ��ʽ����p��p��getmemory�βΣ�ֻ�ܺ����ڲ���Ч
	strcpy(str, "hello world");   //δ�ͷţ��ڴ�й¶
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	test();
}