#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>     //malloc��ͷ�ļ�
#include<errno.h>
#include<string.h>
//MALLOC  �����ڴ�� ��������void* 

//int main()
//{
//	int* p = (void*)malloc(10 * sizeof(int));//���ڴ�����10�����εĿռ�
//	if (p == NULL)    //����ʧ�ܷ��ؿ�ָ��
//	{
//		printf("%s\n",strerror(errno));   //��ӡ����ԭ��ķ�ʽ
//	}
//	else   //���ٳɹ�����ʼ��
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d\n", *(p+i));
//		}
//	}
//	free(p);    //�ͷ��ڴ�ռ�
//	p = NULL;
//	return 0;
//}


//calloc
//int main()
//{
//	//maloc(10*sizeof(int))
//	int* p = calloc(10, sizeof(int));   //10��Ԫ�أ�ÿ����Сint
//	if (p == NULL)    //����ʧ�ܷ��ؿ�ָ��
//	{
//		printf("%s\n",strerror(errno));   //��ӡ����ԭ��ķ�ʽ
//	}
//	else   //���ٳɹ���ÿ��Ԫ�س�ʼ��Ϊ0
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d\n", *(p+i));
//		}
//	}
//	free(p);
//	return 0;
//}

//
//int main()
//{
//	//realloc    //���������ڴ��С
//	int* p = (int*)malloc(20);   //20���ֽ�
//	if (p == NULL)    //����ʧ�ܷ��ؿ�ָ��
//	{
//		printf("%s\n",strerror(errno));   //��ӡ����ԭ��ķ�ʽ
//	}
//	else   //���ٳɹ�
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;      
//		}
//	} 
//	//ʹ��malloc���ٵĿռ䣬����20���ֽڲ�����Ҫ��40������reallow�����ڴ��С
//	//reallocʹ�õ�ע������	
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӷ���p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���zealloc������������һ���µ��ڴ棬
//	//����һ����������Ŀռ䣬����ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬��󷵻��¿�ʼ����
//	//���ڴ�ռ��ַ
//	//3.�������ʧ�ܵ���һ���µı���������realloc�����ķ���ֵ
//	int* p2=realloc(p, INT_MAX);   //����20���ֽ�(40-20),��20���ֽ���4��int���ͣ��������ֵ
//	if (p2 == NULL)
//	{
//		p = p2;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d\n", *(p2 + i));
//		}
//	}
//	free(p);
//}


int main()
{
	//1.Ҫ�жϿ�ָ��
	//int* p = (int*)malloc(40);  //��һ����ʧ��p�ͱ���ֵΪ��ָ��
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//return 0;


	//2.�Զ�̬�ڴ����Խ�����
	int* p = (int*)malloc(5, sizeof(int));
	if (p == NULL)
	{
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)   //Խ�����
		{
			*(p + i) = i;
		}
	}
	free(p);
	return 0;
}