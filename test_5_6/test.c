//#define _CRT_SECURE_NO_WARNINGS
////Ԥ����ָ�� 
////test.c   ---���� ����---  test.exe�������ļ�  ---����
////            ���뻷��                   ִ�л���
////���루��������            ���ӣ���������
////Ԥ���루�ı�������1��ͷ�ļ��İ���#include 2��ע��ɾ�� 3��#define����
////���� ���(�﷨�������ʷ�������������������Ż��ܣ�����add.c�з���add��test.c�з���add
////��main���ţ�) 
////Ŀ���ļ�(�Ѿ��ѻ�����׼��Ϊ�������ļ�)
////ÿһ��Դ�ļ�������������������󾭹�����������
////#include<stdio.h>
////extern int add(int x, int y);
////int main()
////{
////	int a = 10;
////	int b = 20;
////	int c = add(a, b);    //add    main
////	printf("%d", c);
////}
////����  ����
//
////����ִ�й���:1�����������ڴ� 2������ִ�п�ʼ 3����ʼִ�г������
////3����ֹ�������������⣩
//
//
//#include<stdio.h>
//#include<malloc.h>
//int main()
//{
//	//	char* p = NULL;
//	//	p = (char*)malloc(100);
//	//	if (p == NULL)
//	//	{
//	//		return;
//	//	}
//	//	else
//	//	{
//	//		scanf("%s", p);
//	//		//p = p + 5;
//	//		printf("%s", p);
//	//	}
//	//	free(p);
//	//}
//
//
//	//int a[5] = { 0 };
//	//int p = a;
//	//p++;   //p��һ����ַ���������Ըı�
//	//a++;    //a��һ�����������ܸı�
//
//
//	//printf("%s\n", __FILE__);   //�������ڵ�·��
//	//printf("%d\n", __LINE__);   //�������ڵ�����
//	//printf("%s\n", __DATE__);   //���������
//	//printf("%s\n", __TIME__);   //ʱ��
//}

//#include<stdio.h>
//#define max 100;  //�������ַ���  �ǹؼ���  ��һ�δ���
//                 //����;��ʾ��max��ʾ��100;���������������������int a=max;Ϊ������䣬
//				 //һ���ǿ����
//int main()
//{
//	int a = max;    //������� int a=max;   ;
//	printf("%d\n", a);
//}


#include<stdio.h>
//#define SQUARE(X) X*X     //X��ʾ������SQUARE(X)��һ���꣬�����滻�ģ������Ǵ���
//#define DOUBLE(X) X+X    //�궨��ʱ�����Բ�������������һ����Ԥ�����������ʵ�������
//int main()
//{
//	int ret = SQUARE(5);    //25
//	int a = SQUARE(5+1);    //11    5+1*5+1=11
//	int b = 10 * DOUBLE(5);  //55   10*5+5
//	printf("%d  %d  %d\n", ret, a, b);
//}


#include<stdio.h>
//�ú���������ȷ���
//�ú����
//#define PRINT(X) printf("hufxjnv asfjxhcxk "#X" jvskv %d\n", X)
//void print(int a)
//{
//	printf("hufxjnv asfjxhcxk jvskv %d\n", a);//�������ܰ����ֲ����ַ���
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	print(a);
//	print(b);
//	//PRINT(a);
//	//PRINT(b);
//}

#define CAT(X,Y) X##Y
int main()
{
	int class84 = 2019;
	printf("%d\n", CAT(class, 84));   //##ֱ�Ӱ����ߵķ��ź���һ��
	                                  //�����class��84������һ��Ϊclass84������2019
}