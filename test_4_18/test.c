#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//int is_left_move(char* str1[], char* str2)
//{
//	//str1��׷��һ��str1�ַ���
//	//�ж�str2ָ����ַ�����st1ָ����ַ����ִ�
//	//strcat(str1, str1);   //׷�ӣ���str1�����һ��str1,��������Լ����Լ�׷��ʱ�����
//	//int len1=strlen(str1);
//	//int len2 = strlen(str2);
//	//if (len1 != len2)
//	//	return 0;
//	strncat(str1, str1, len);    //׷���ַ�����str1,str1ʱ�ڵ�һ���ַ���׷�ӵڶ����ַ�����len��ʾ�ڵڶ���ste1
//								//ѡ�񼸸���ĸ׷��
//	char* ret=strstr(str1, str2);//��str1��������str2���ִ�
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;	
//}
//int main()
//{
//	char arr1[30] = "abcdef";  //abcdefabcdef,����ַ��������������ִ�����30�Ŀռ䣬��ֹԽ�����
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



////���Ͼ���
////��һ�����󣬾���ÿ�д����ҵ��������ϵ��µ�������������
////1 2 3
////4 5 6
////7 8 9
//
//int FindNum(int arr[3][3], int k, int* px, int* py)  //row=������    col=������
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
//			*py = y;    //��ָ����պ���ֵ
//			return 1;
//		}
//	}
//	//�Ҳ���
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//
//	int ret = FindNum(arr, k, &x, &y);  //����ַ�������Խ�����������ֵ
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
//int my_strlen(const char* str)   //������     �����޷��Ķ�
//{
//	assert(str != NULL);
//
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;    //�������Լ�
//		str++;      //ָ��ָ���Լ�
//	}
//	return count;
//}
////��������ʱ���������ַ�������---�ݹ�
//
//
////ָ��
//int main()
//{
//	//int len = "abcdef";    //a b c d e f \0,����\0��ֹͣ������\0ǰ����ַ�����
//	//int len1[] = { 'a','b','c' };
//	//int b = strlen(len1);    //���ֵ,����ʾ��
//	//int a = strlen(len);    //6
//	/*int a = my_strlen(len);*/
//	if (strlen("abc") - strlen("abcdef") > 0)  //strlen���޷���������,�������Ҳ��һ���޷�������3-6=-3
//		                                      //-3�������޷����������Դ���3
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");    //�Ǻ�
//	}
///*	printf("%d  %d\n", a); */   
//}



//
////strcpy    �ַ�����������
//my_strcpy(char* str1,const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);   //��ָ֤�����Ч��
//	char* ret = str1;
//	while (*str2 != '\0')     //����'\0'��ֹͣ
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = *str2;     //ѭ������飬*str2ָ��'\0',*str1ָ��'d'����'\0'��ֵ��'d'
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);    //arr1:Ŀ�ĵصĵ�ַ      arr2:Ҫ������     ���������п���\0
//	printf("%s", arr1);
//}


