//#define _CRT_SECURE_NO_WARNINGS
////回调函数
//#include<stdio.h>
//#include<stdlib.h>   //qusort所引用的头文件
//#include<string.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
//void qusort(void *base,
//			size_t num,
//			size_t width,
//			int (*cmp)(const void* e1,const void* e2)
//			);
//int cmp_int(const void* e1, const void* e2)    //可以接收任意类型的指针
//{
//	return *(int*)e1 - *(int*)e2;   //先强制类型转换为int*,然后再解引用
//									//第一个元素小于第二个元素，返回小于0的数，
//									//第一个元素等于第二个元素，返回等于0的数，
//									//第一个元素大于第二个元素，返回大于0的数，
//}
//
//void test0()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//}
//
//
//int  cmp_float(const void* e1, const void* e2)    //可以接收任意类型的指针
//{
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}
//
//
//void test1()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f  ", f[i]);
//	}
//}
//
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//void test2()
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//void test3()
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	int a = 10;
//	void* pa = &a;        //可以接收任意类型的指针
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
//	//test0();
//	//test1();
//	//test2();
//	//test3();
//}
//

#include<stdio.h>   //32位平台
int main()
{
	//数组名是首元素地址,只有一下两种情况表示整个数组
	//1、sizeof(数组名) - 数组名表示整个数组
	//2、&数组名 - 数组名表示整个数组的地址
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));    //计算的是数组大小，单位是字节，所以是4*4=16
	//printf("%d\n", sizeof(a+0));   //4或8- 数组名这里表示首元素地址，a+0还是首元素地址，为4个字节
	//printf("%d\n", sizeof(*a));    //4 - 首元素大小，*a表示首元素
	//printf("%d\n", sizeof(a+1));   //4或8 - 第二个元素的地址
	//printf("%d\n", sizeof(a[1]));   //4 - 第二个元素大小
	//printf("%d\n", sizeof(&a));    //4 - 取出的整个数组的地址，地址大小为4
	//printf("%d\n", sizeof(*&a));   //16 - 取出整个数组地址然后解引用，*&相互抵消了，所以和sizeof(a)相同
	//printf("%d\n", sizeof(&a+1));   //4 - &a是数组的地址，&a+1跳过数组地址，但还是地址
	//printf("%d\n", sizeof(&a[0]));   //4
	//printf("%d\n", sizeof(&a[0]+1));  //4 - 第二个元素的地址

	//char a[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(a));    //计算的是数组大小，单位是字节，所以是6
	//printf("%d\n", sizeof(a + 0));   //4或8- 数组名这里表示首元素地址，a+0还是首元素地址，为4个字节
	//printf("%d\n", sizeof(*a));    //1 - 首元素大小，*a表示首元素
	//printf("%d\n", sizeof(a + 1));   //4或8 - 第二个元素的地址
	//printf("%d\n", sizeof(a[1]));   //1 - 第二个元素大小
	//printf("%d\n", sizeof(&a));    //4 - 取出的整个数组的地址，地址大小为4
	//printf("%d\n", sizeof(*&a));   //6 - 取出整个数组地址然后解引用，*&相互抵消了，所以和sizeof(a)相同
	//printf("%d\n", sizeof(&a + 1));   //4 - &a是数组的地址，&a+1跳过数组地址，但还是地址
	//printf("%d\n", sizeof(&a[0]));   //4
	//printf("%d\n", sizeof(&a[0] + 1));  //4 - 第二个元素的地址


	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr));    //随机值 - arr[]里面没有下标，在内存中直到找到'\0'停止
	//printf("%d\n", strlen(arr+0));  //随机值
	//printf("%d\n", strlen(*arr));   //程序错误
	//printf("%d\n", strlen(arr[1]));  //程序错误
	//printf("%d\n", strlen(&arr));   //随机值
	//printf("%d\n", strlen(&arr+1));  //随机值-6
	//printf("%d\n", strlen(&arr[0]+1)); //随机值-1
}
