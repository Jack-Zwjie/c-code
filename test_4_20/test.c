#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//struct Stu
//{
//	char tele[12];    //电话
//	char name[20];
//	char sex[10];   //性别
//	int age;
//}s4,s5,s6;     //这块的结构图变量是全局变量
//struct Stu s3;   //全局结构体变量
//int main()
//{
//	struct Stu s1;   //局部结构体变量
//	struct Stu s2;
//	return 0;
//}



//struct
//{
//	int a;
//	char c;
//}x;       //匿名结构体类型，只能在这定义变量
//
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}*psa;    //匿名结构体指针
//int main()
//{
//	psa = &x;
//	return 0;
//}



//typedef struct Node     //令struct Node重命名为Node
//{
//	int data;
//	//struct Node n;  //不行,不能自己调用自己作为属性
//	//struct Node* next;   //可以，大小是=指针大小+int的属性大小
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


////结构体内存对齐，vs2019默认对齐数是8,拿空间换取时间
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
//#pragma pack(4)   //设置默认对齐数是4
//#pragma pack()    //取消默认对齐数


//#include<stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	//offsetof();      //结构体成员对开始存储偏移量
//	printf("%d\n", offsetof(struct S, c));    //0
//	printf("%d\n", offsetof(struct S, i));    //4
//	printf("%d\n", offsetof(struct S, d));     //8
//	return 0;
//}



//结构体传参
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
	Init(&s);             //传参时传地址
	Print(s);
}
