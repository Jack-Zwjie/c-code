#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define max(x,y) ((x)>(y)?(x):(y))   //������ ���ܵ���
//#define MALLOC(num,type) ((type*)malloc(num*sizeof(type)))
//int main()
//{
	//int a = add(5);
	//printf("%d", a);


	//int a = 10;
	//int b = a + 1;     //û�ı�
	//int b = ++a;    //a��ֵ�ı��ˣ��в����˸�����


	//�����鴫���и����õĺ����
	//int a = 10;
	//int b = 11;
	//int c = max(a++, b++);  //((a++)>(b++)?(a++):(b++)) �ڶ���a++ûִ��
	//printf("%d\n", c);   //12
	//printf("%d\n", a);   //11
	//printf("%d\n", b);   //13


	//int* p = (int*)malloc(10 * sizeof(int));
	//int* q = MALLOC(10, int);
//}


//��������
//#define DEFINE    //��������ӡ�����Ӳ���ӡ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG       //��������
//		printf("%d   ", arr[i]);
//#endif
//	}
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d   ", arr[i]);
	//	count++;
	//	if (count % 5 == 0)
	//	{
	//		printf("\n");
	//	}
	//}

//
//#if 1==1     //��if...else������ƣ�1==1����ִ��printf��������һ��if
//	printf("haha\n");
//#elif 2 == 1
//	printf("hehe\n");
//#else
//	printf("lala\n");
//#endif


//#ifdef DEFINE      //ǰ�涨��DEFINE�ʹ�ӡ�����򲻴�ӡ
//	printf("haha");
//	printf("haha");
//	printf("haha");
//#endif
//
//
//#ifndef DEFINE      //ǰ��û����DEFINE�ʹ�ӡ�����򲻴�ӡ
//	printf("haha");
//	printf("haha");
//	printf("haha");
//#endif
//}