#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//struct Stu
//{
//	char tele[12];    //�绰
//	char name[20];
//	char sex[10];   //�Ա�
//	int age;
//}s4,s5,s6;     //���Ľṹͼ������ȫ�ֱ���
//struct Stu s3;   //ȫ�ֽṹ�����
//int main()
//{
//	struct Stu s1;   //�ֲ��ṹ�����
//	struct Stu s2;
//	return 0;
//}



//struct
//{
//	int a;
//	char c;
//}x;       //�����ṹ�����ͣ�ֻ�����ⶨ�����
//
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}*psa;    //�����ṹ��ָ��
//int main()
//{
//	psa = &x;
//	return 0;
//}



//typedef struct Node     //��struct Node������ΪNode
//{
//	int data;
//	//struct Node n;  //����,�����Լ������Լ���Ϊ����
//	//struct Node* next;   //���ԣ���С��=ָ���С+int�����Դ�С
//	char a;
//	double d;
//}Node;
//int main()
//{
//	struct Node n1 = { 5,'c',3.14 };
//	printf("%d  %c  %lf", n1.data, n1.a, n1.d);
//	//Node n2;
//	return 0;
//}


////�ṹ���ڴ���룬vs2019Ĭ�϶�������8,�ÿռ任ȡʱ��
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));    //12
//	struct S2 s2 = { 0 }; 
//	printf("%d\n", sizeof(s2));    //8
//	printf("%d", sizeof(double)); //8
//}
//#pragma pack(4)   //����Ĭ�϶�������4
//#pragma pack()    //ȡ��Ĭ�϶�����


//#include<stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	//offsetof();      //�ṹ���Ա�Կ�ʼ�洢ƫ����
//	printf("%d\n", offsetof(struct S, c));    //0
//	printf("%d\n", offsetof(struct S, i));    //4
//	printf("%d\n", offsetof(struct S, d));     //8
//	return 0;
//}



//�ṹ�崫��
struct S
{
	char c;
	int a;
	double d;
};
void Init(struct S* tmp)
{
	tmp->a = 100;
	tmp->c = 'w';
	tmp->d = 3.14;
}
void Print(struct S tmp)
{
	printf("%d  %c  %lf", tmp.a, tmp.c, tmp.d);
}
int main()
{
	struct S s = { 0 };
	Init(&s);             //����ʱ����ַ
	Print(s);
}
