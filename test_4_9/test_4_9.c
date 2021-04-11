#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i <= 12; i++)    //打印hehe死循环，当arr[12]的时候i变为0
//	{
//		printf("hehe\n");   //因为arr[12]和i的地址一样，局部变量在栈内存储，栈存储从高到低，
//		arr[i] = 0;         //当for循环越界访问时就出现了死循环的可能
//	}
//	return 0;
//}

//
//void my_strcpy(char* dest,char*  src)
//{
//	while (*src!='\0')    //当*str='\0'时停止循环
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;        //前面循环中吧bit已经放进dest中了，现在只剩下一个'\0',也给放进去
//}
//
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "%########";
//	char arr2[] = "bit";
//	//int sz = sizeof(arr2) / sizeof(arr1[0]);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);       //因为吧'b' 'i' 't' '\0'拷贝进arr1中，arr1中遇见'\0'就停止，所以
//								//后面的####就不用打印了
//}





//优化   1
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)    //当有一个是空指针时可能运行错误
//	{
//		while (*dest++ = *src++)    //拷贝到'\0'时停止，'\0'ASCLL码值是0
//		{
//			;     //先用后加
//		}
//		//*dest = *src;        //前面循环中吧bit已经放进dest中了，现在只剩下一个'\0',也给放进去
//	}
//}



//优化   2
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);     //当为空指针报错，不是的话不运行,叫断言
//	while (*dest++ = *src++)    //拷贝到'\0'时停止，'\0'ASCLL码值是0
//	{
//		;     //先用后加
//	}
//		//*dest = *src;        //前面循环中吧bit已经放进dest中了，现在只剩下一个'\0',也给放进去
//}
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "%########";
//	char arr2[] = "bit";
//	//int sz = sizeof(arr2) / sizeof(arr1[0]);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);       //因为吧'b' 'i' 't' '\0'拷贝进arr1中，arr1中遇见'\0'就停止，所以
//								//后面的####就不用打印了
//}
//
//
//
////优化   3
//void my_strcpy(char* dest, const char* src) //当判断条件相反是报错
//{
//	assert(dest != NULL);
//	assert(src != NULL);     //当为空指针报错，不是的话不运行,叫断言
//	while (*dest++ = *src++)    //拷贝完'\0'时停止
//	{
//		;     //先用后加
//	}
//	//*dest = *src;        //前面循环中吧bit已经放进dest中了，现在只剩下一个'\0',也给放进去
//}
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "%########";
//	char arr2[] = "bit";
//	//int sz = sizeof(arr2) / sizeof(arr1[0]);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);       //因为吧'b' 'i' 't' '\0'拷贝进arr1中，arr1中遇见'\0'就停止，所以
//								//后面的####就不用打印了
//}




//int main()
//{
//	const int num = 10;   //不允许改变num的值
//	int n = 100;
//
//	int*const p = &num;   //const
//	//*p = &num;
//	p = n;
//	printf("%d\n", num);
//}


int main()
{

	return 0;

}