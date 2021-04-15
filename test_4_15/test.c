#define _CRT_SECURE_NO_WARNINGS
////#include<stdio.h>
////#include<string.h>
////void reverse(char* str)
////{
////	int i = 0;
////	int len = strlen(str);
////	char* left = str;
////	char* right = len+str-1;
////	for (i = 0; i < len / 2; i++)
////	{
////		char tmp = *left;
////		*left = *right;
////		*right = tmp;
////		left++;
////		right--;
////	}
////}
////int main()
////{
////	char arr[255] = { 0 };
//////	scanf("%s", &arr);
////  gets(arr);   //读一行字符，放在arr里面取
////	reverse(arr);
////	printf("%s\n", arr);
////	return 0;
////}
//
//
//
////#include<stdio.h>
////int main()
////{
////	int a = 0;
////	int n = 0;
////	scanf("%d%d", &a, &n); 
////	int ret = 0;    //技术器，下一项是上一项乘10+a
////	int sum = 0;
////	int i = 0;
////	for (i = 0; i < n; i++)
////	{
////		ret = 10 * ret + a;   //实现数字的出现和循环过程中的相加准备
////		sum += ret;
////	}
////	printf("%d\n", sum);
////}
//
//
//#include<stdio.h>
//#include<math.h>
//int print()                //计算位数的函数
//{	
//	int i = 0;	
//	for (i = 0; i < 100000; i++)
//	{
//		int n = 1;
//		int sum = 0;
//		int tmp = i;
//		if(tmp / 10 != 0)
//		{
//			tmp = tmp / 10;
//			n++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, n);
//			tmp = tmp % 10;
//		}
//		if (i == sum)
//		{
//			printf("%d", i);
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)   //判断i是不是水仙花数
//	{
//		//1、计算位数n
//		//2、计算每位的n次方之和
//		//3、比较i==sum
//		int n = 1;
//		int sum = 0;
//		int tmp = i;
//		while(tmp/10)
//		{
//			tmp = tmp / 10;
//			n++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		if (i == sum)
//		{
//			printf("%d    ", i);
//		}
//	}
//}

//
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);   //输入的是上半部分的行数
//	int i = 0;
//	for (i = 0; i < line; i++)//打印上半部分
//	{
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)//打印空格,第j行打印的空格是，例：第四行空格位3，i=3，j=7-1-3
//		{
//			printf(" ");
//		}
//		for (j = 0; i < 2*i + 1; j++)//打印*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i+1; j++)//打印空格,第j行打印的空格是，例：第四行空格位3，i=3，j=7-1-3
//		{
//			printf(" ");
//		}
//		for (j = 0; i < 2 *(line-1-i); j++)//打印*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}