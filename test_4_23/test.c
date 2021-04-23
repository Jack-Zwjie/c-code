#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>     //malloc的头文件
#include<errno.h>
#include<string.h>
//MALLOC  开辟内存块 返回类型void* 

//int main()
//{
//	int* p = (void*)malloc(10 * sizeof(int));//像内存申请10个整形的空间
//	if (p == NULL)    //开辟失败返回空指针
//	{
//		printf("%s\n",strerror(errno));   //打印错误原因的方式
//	}
//	else   //开辟成功不初始化
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d\n", *(p+i));
//		}
//	}
//	free(p);    //释放内存空间
//	p = NULL;
//	return 0;
//}


//calloc
//int main()
//{
//	//maloc(10*sizeof(int))
//	int* p = calloc(10, sizeof(int));   //10个元素，每个大小int
//	if (p == NULL)    //开辟失败返回空指针
//	{
//		printf("%s\n",strerror(errno));   //打印错误原因的方式
//	}
//	else   //开辟成功后每个元素初始化为0
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d\n", *(p+i));
//		}
//	}
//	free(p);
//	return 0;
//}

//
//int main()
//{
//	//realloc    //调整开辟内存大小
//	int* p = (int*)malloc(20);   //20个字节
//	if (p == NULL)    //开辟失败返回空指针
//	{
//		printf("%s\n",strerror(errno));   //打印错误原因的方式
//	}
//	else   //开辟成功
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;      
//		}
//	} 
//	//使用malloc开辟的空间，假设20个字节不够，要用40个，用reallow调整内存大小
//	//realloc使用的注意事项	
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加，则zealloc函数会重新找一个新的内存，
//	//开辟一块满足需求的空间，并把原来内存中的数据拷贝回来，释放旧的内存空间，最后返回新开始开辟
//	//的内存空间地址
//	//3.如果开辟失败得用一个新的变量来接受realloc函数的返回值
//	int* p2=realloc(p, INT_MAX);   //增加20个字节(40-20),呢20个字节是4个int类型，随机分配值
//	if (p2 == NULL)
//	{
//		p = p2;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d\n", *(p2 + i));
//		}
//	}
//	free(p);
//}


int main()
{
	//1.要判断空指针
	//int* p = (int*)malloc(40);  //万一开辟失败p就被赋值为空指针
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//return 0;


	//2.对动态内存进行越界访问
	int* p = (int*)malloc(5, sizeof(int));
	if (p == NULL)
	{
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)   //越界访问
		{
			*(p + i) = i;
		}
	}
	free(p);
	return 0;
}