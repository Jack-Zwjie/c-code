#include<stdio.h>
/*int main()
{
	printf("hello word.\n");
	printf("hello word.\n");
	printf("hello word.\n");



	return 0;
}
int main()
{
	//char  ch = 'A';   //打印字符方式
	//printf("%c\n", ch);
	int  a, b;
	a = 10;
	b = 5;
	printf("%\n %d\n", a, b);
	return 0;

}*/
/*int main()
{
	printf("%d\n", sizeof(char));      //内存大小1
	printf("%d\n", sizeof(int));       //内存大小4
	printf("%d\n", sizeof(double));    //内存大小8
	printf("%d\n", sizeof(float));     //内存大小4
	printf("%d\n", sizeof(long));      //内存大小4
	printf("%d\n", sizeof(long long)); //内存大小8a
	printf("%d\n", sizeof(short));     //内存大小2
	return 0;
}*/
/*int main()
{
	short age = 20;    //申请两个字节存年龄
	return 0;
}*/
/*int b = 5;
int main()

{
	int a2 = 10;
	printf("%d    %d"  ,a2 , b);
}*/
/*
int  a = 10;
int main()
{
	int a = 1;
	char b = 'x';
	printf("%d  %c", a, b);
	return 0;
}*/
/*
int main()    //计算两个数的相加
{
	int sum = 0;
	int a1 = 0;
	int a2 = 0;
	scanf_s("%d%d", &a1, &a2);//取地址符号&，&a1表示取a1的地址
	sum = a1 + a2;
	printf("%d\n", sum);
}*/

/*
int a = 10;
void test();
int main()
{
	test();
	printf("%d\n", a);
	return 0;
}
void test()
{
		printf("a=%d\n", a);
}*/
/*
int main()
{
	extern int g_val;  //extern  声明外部符号，即声明test1里的变量。
	printf("g_val=%d", g_val);  //未声名的标识符
	return 0;
}*/
/*int main()
{
	{
		int a = 10;
		printf("a=%d\n", a);  //ok
	}
	printf("a=%d\n", a);
	return 0;
}*/
