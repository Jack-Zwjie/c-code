#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//int is_left_move(char* str1[], char* str2)
//{
//	//str1后追加一个str1字符串
//	//判断str2指向的字符串是st1指向的字符串字串
//	//strcat(str1, str1);   //追加，给str1后面加一个str1,这个函数自己给自己追加时会出错
//	//int len1=strlen(str1);
//	//int len2 = strlen(str2);
//	//if (len1 != len2)
//	//	return 0;
//	strncat(str1, str1, len);    //追加字符串，str1,str1时在第一个字符串追加第二个字符串，len表示在第二个ste1
//								//选择几个字母追加
//	char* ret=strstr(str1, str2);//在str1里面里找str2的字串
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;	
//}
//int main()
//{
//	char arr1[30] = "abcdef";  //abcdefabcdef,这个字符串里面有所有字串，给30的空间，防止越界访问
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes");
//	}
//	else
//	{
//		printf("No");
//	}
//	return 0;
//}



////杨氏矩阵
////有一个矩阵，矩阵每行从左到右递增，从上倒下递增，查找数字
////1 2 3
////4 5 6
////7 8 9
//
//int FindNum(int arr[3][3], int k, int* px, int* py)  //row=行坐标    col=竖坐标
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x<=*py-1&&y>=0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;    //用指针接收函数值
//			return 1;
//		}
//	}
//	//找不到
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//
//	int ret = FindNum(arr, k, &x, &y);  //传地址函数可以接受主函数的值
//	if (ret == 1)
//	{
//
//		printf("yes\n");
//		printf("%d   %d", x, y);
//	}
//	else
//		printf("no");	
//}

//
//strlen
//int my_strlen(const char* str)   //计数器     修饰无法改动
//{
//	assert(str != NULL);
//
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;    //计数器自加
//		str++;      //指针指向自加
//	}
//	return count;
//}
////不创建临时变量计算字符串长度---递归
//
//
////指针
//int main()
//{
//	//int len = "abcdef";    //a b c d e f \0,遇到\0就停止，计算\0前面的字符数量
//	//int len1[] = { 'a','b','c' };
//	//int b = strlen(len1);    //随机值,错误示范
//	//int a = strlen(len);    //6
//	/*int a = my_strlen(len);*/
//	if (strlen("abc") - strlen("abcdef") > 0)  //strlen用无符号数修饰,所以相减也是一个无符号数，3-6=-3
//		                                      //-3被当作无符号数，所以大于3
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");    //呵呵
//	}
///*	printf("%d  %d\n", a); */   
//}



//
////strcpy    字符串拷贝函数
//my_strcpy(char* str1,const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);   //保证指针的有效性
//	char* ret = str1;
//	while (*str2 != '\0')     //不到'\0'不停止
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = *str2;     //循环到这块，*str2指向'\0',*str1指向'd'，吧'\0'赋值给'd'
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);    //arr1:目的地的地址      arr2:要拷贝的     拷贝过程中拷贝\0
//	printf("%s", arr1);
//}


