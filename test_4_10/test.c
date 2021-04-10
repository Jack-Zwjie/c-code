#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)     //0--=-1,吧-1放在一个无符号数里面为很大的数
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
//	printf("%d  ", strlen(a));   //255,因为一值在-128----127之间
//}





//int main()
//{
//	float d = 1E10;   //科学计数法
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
//	int sz = sizeof(arr) / sizeof(arr[0]);    //一个数组的大小除一个int型变量的大小=4/4=1
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
//	*p = 'W';         //报错，const使*p不能修改
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
//		printf("haha\n");    //打印haha，因为arr1和arr2的起始地址不同
//
//	if (p1 == p2)
//		printf("hehe\n");      //打印hehe，因p1和p2指向同一个地址
//	else
//		printf("haha\n");    
//}



//指针数组
int main()  
{
	int arr[10] = { 0 };
	char ch[5] = { 0 };
	int* parr[4];   //存放指针的数组
	char* pch[5];
}