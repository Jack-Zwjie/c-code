#define _CRT_SECURE_NO_WARNINGS
//�������� 
//����򵥣������׳���
//����malloc���ܸ��ٵĲ���ʱ����Ƭ����Լ�ռ�
//�ڴ��������������ʿ�
#include<stdio.h>
//struct S
//{
//	int n;
//	int arr[];     //�������飬�ڽṹ���С�����в���С,�ɱ仯
//};
//int main()
//{
//	struct S s;
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	//ǰ���ĸ��ֽڸ�n���ٵģ�����24���ֽ��Ǹ�arr���ٵ�
//	ps->n = 100;
//	int i = 0;
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr=realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}


struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* ps = malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d   ", ps->arr[i]);
	}
	//������СС
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (NULL)
	{
		ps->arr[i] = ptr;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d", ps->arr[i]);
	}
	free(ps->arr);    //ʹ��������malloc�������ͷ������Σ�����˳���Ӱ����룬���׵��´���
	ps->arr = NULL;   //�ռ��˷Ѷ�
	free(ps);
	return 0;
}