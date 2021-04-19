#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
//char*	my_strcat(char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);   //保证指针的有效性
//	char* ret = str1;
//	while (*str1 != '\0')
//	{
//		str1++;    //str1继续往后移一位
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
//	my_strcat(arr1, arr2);    //追加
//	printf("%s", arr1);
//}
//



//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdefg";
//	int ret=strcmp(p1, p2);      //比较字符的大小，前面abcdef相等，p2有g，所以p2大
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
//		return 1;   //大于
//	}
//	else if (*str1 < *str2)
//	{
//		return -1;  //小于
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
//	strncpy(arr1, arr2, 4);     //将arr2里面前四个拷贝进arr1  如果参数太大，放'\0'  模拟实现
//	printf("%s", arr1);
//}



//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "wolrd";
//	strncat(arr1, arr2, 3);   //如果参数3太大，放'\0'后就不管了   模拟实现0
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




////strstr检查字串
//char* my_strstr(const char* p1,const char* p2)
//{
//	assert(p1 && p2);
//	char* ret1 = (char*)p1;
//	char* ret2 = (char*)p2;      //当回调前值时不能改变形参，所以要用新变量来代替
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
//			return start;    //当ret2匹配到'\0'时，ret2完了，所以匹配成功
//		}
//		start++;   //当这次每匹配成功，呢么用p1的下一个字节开始遍历
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
//		printf("并不存在\n");
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




//内存函数
//memcpy - 内存拷贝    void* - 无类型的指针
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
//	struct S arr3[] = { {"张三",20},{"李四",30} };
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
//	my_memmove(arr + 2, arr, 20);   //处理有重叠的数组拷贝
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
//	int ret =memcmp(arr1, arr2, 9);    //内存数组比较
//	printf("%d\n", ret);
//}


//int main()
//{
//	char arr[10] = "";
//	memset(arr, '#', 10);      //设置缓冲区,arr:操作的数组名，'#':操作数,10：改变多少字节
//}