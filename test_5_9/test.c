#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//时间复杂度是O（n），求一个数组中少了0--n的哪一个
//int miss(int* arr,int sz)
//{
//	int i = 0;
//	int add = 0;
//	int a[5] = { 0,1,2,3,4 };
//	for (i = 0; i < 5; i++)
//	{
//		add = add + a[i];
//	}
//	for (i = 0; i < sz; i++)
//	{
//		add = add - *(arr + i);
//	}
//	return add;
//}
//int main()
//{
//	int arr[5] = { 4,2,3,0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int x = miss(arr, sz);
//	printf("%d\n", x);
//}



//求单身狗，时间复杂度为O(n),空间复杂度为O(1)
int difference(int* array, int n)
{
	int one = 0;
	for (int i = 0; i < n; i++)
	{
		one = one ^ (*(array + i));
	}
	return one;
}
int main()
{
	int arr[11] = { 9,6,9,7,6,4,5,4,5,7,3 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//printf("%d\n", sz);
	int x = difference(arr , sz);
	printf("%d\n", x);
}