#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
//char*	my_strcat(char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);   //��ָ֤�����Ч��
//	char* ret = str1;
//	while (*str1 != '\0')
//	{
//		str1++;    //str1����������һλ
//	}
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "bit";
//	my_strcat(arr1, arr2);    //׷��
//	printf("%s", arr1);
//}
//



//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdefg";
//	int ret=strcmp(p1, p2);      //�Ƚ��ַ��Ĵ�С��ǰ��abcdef��ȣ�p2��g������p2��
//	if (strcmp(p1, p2) > 0)
//		printf("p1>p2");
//	else if (strcmp(p1, p2) < 0)
//		printf("p1<p2");
//	else if (strcmp(p1, p2) == 0)
//		printf("p1=p2");
//	printf("%d\n", ret);        //-1   
//}



//my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;   //����
//	}
//	else if (*str1 < *str2)
//	{
//		return -1;  //С��
//	}
//
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//}


//int main()
//{
//	char arr1[10] = "abcd";
//	char arr2[] = "hello world";
//	strncpy(arr1, arr2, 4);     //��arr2����ǰ�ĸ�������arr1  �������̫�󣬷�'\0'  ģ��ʵ��
//	printf("%s", arr1);
//}



//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "wolrd";
//	strncat(arr1, arr2, 3);   //�������3̫�󣬷�'\0'��Ͳ�����   ģ��ʵ��0
//	printf("%s", arr1);
//}



//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//}




////strstr����ִ�
//char* my_strstr(const char* p1,const char* p2)
//{
//	assert(p1 && p2);
//	char* ret1 = (char*)p1;
//	char* ret2 = (char*)p2;      //���ص�ǰֵʱ���ܸı��βΣ�����Ҫ���±���������
//	char* start = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*start)
//	{
//		ret1 = start;
//		ret2 = (char*)p2;
//		while ((*ret1 == *ret2) && (*ret2 != '\0') && (*ret1 == *ret2))
//		{
//			ret1++;
//			ret2++;
//		}
//		if (*ret2 == '\0')
//		{
//			return start;    //��ret2ƥ�䵽'\0'ʱ��ret2���ˣ�����ƥ��ɹ�
//		}
//		start++;   //�����ÿƥ��ɹ�����ô��p1����һ���ֽڿ�ʼ����
//	}
//	return NULL;
//}
//int main()
//{
//	const char* arr1 = "abcdefi";
//	const char* arr2 = "cdef";
//	char* ret=my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("��������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//}



//int main()
//{
//	char arr[] = "zp@bitedu.tech";
//	char* p = "@.";
//	char buf[1042] = { 0 };
//	strcpy(buf, arr);
//
//
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//}




//�ڴ溯��
//memcpy - �ڴ濽��    void* - �����͵�ָ��
//struct S
//{
//	char namr[20];
//	int age;
//};
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct S arr3[] = { {"����",20},{"����",30} };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr1, arr2, sizeof(arr1));
//	my_memcpy(arr3, arr4, sizeof(arr3));
//	return 0;
//}


//
//void* my_memmove(void* dest, const void* str, size_t count)
//{
//	assert(dest && str);
//	void* ret = dest;
//	if (dest < str)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)str;
//			++(char*)dest;
//			++(char*)str;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)str + count);
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	my_memmove(arr + 2, arr, 20);   //�������ص������鿽��
//	for(i=0;i<10;i++)
//	{
//		printf("%d  ", arr[i]);
//	}	
//	return 0;
//}




//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 1,2,5,4,3,6 };
//	int ret =memcmp(arr1, arr2, 9);    //�ڴ�����Ƚ�
//	printf("%d\n", ret);
//}


//int main()
//{
//	char arr[10] = "";
//	memset(arr, '#', 10);      //���û�����,arr:��������������'#':������,10���ı�����ֽ�
//}