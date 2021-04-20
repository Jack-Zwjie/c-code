#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//int main()
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int x = 20;
//	int y = 20;
//	int z = 0;
//	z=add(x, y);
//	printf("%d\n", z);
//}
//{
//	char arr[] = { 0 };
//	
//	//system("shutdown - s - t 60");
//again:
//	printf("你的电脑将在60秒后关机，如果你输入我是猪就取消关机。\n");
//	printf("请输入：");
//	scanf_s("%s", &arr);
//	if (strcmp(arr, "我是猪"))
//	{
//		system("shutdown -a");
//		printf("取消关机\n");
//	}
//	else
//	{
//		goto again;
//	}
//}
//void change(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//void change1(int* pa,int *pb)
//{
//	int tmp = 0;
//	tmp = *pa;          //外边的a给tmp
//	*pa = *pb;
//	*pb = tmp;
//
//}
//int main()
//{
//
//	int* a = 10;
//	int* b = 20;
//	change(a, b);              //不能交换a和b的值
//	printf("%d %d\n", a, b);
//	change1(&a, &b);              //引用指针后可以交换a和b的值
//	printf("%d %d\n", a, b);
//}

//int is_prime(int n)        //是素数返回1，否则返回0
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j==0)
//		{
//			return 0;
//		}
//	}
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


//is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))     //瑞年的判断条件
//		return 1;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//}


//int binary_search(int arr[],int k,int sz)  //arr[]传递过去的为首元素的的地址，本质上arr[]为指针
//{                                         //所以在函数内部求数组大小不靠谱，所以在函数外部计算
//	int left = 0;                        //只需在函数在形参中传递数组大小
//	int right = sz - 1;                 //sz=sizeof(arr)/sizeof(arr[0]);
//	while (left<=right)                //每次都应该计算中间元素，所以mid在循环里面
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left=mid+1;             //左下标加1
//		}
//		else if (arr[mid] > k)
//		{
//			right=mid - 1;        //右下标减1
//		}
//		else
//		{
//			return mid;
//		}
//	}
//}
//
//int main()
//{
//	//二分查找
//	//找到了返回这个数的下标，找不到返回-1
//	int k = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入你要查找的的数k：");
//	scanf_s("%d", &k);
//	int ret = binary_search(arr, k, sz);
//	if (ret == 1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标为：%d\n",ret);
//	}
//} 


int add(int* num)     //要改变num的内容，用指针变量，num为主函数num的地址
{
	(*num)++;           //解引用，指针指向的内容进行操作
}

int main()
{
	//每执行一次add(&num)num+1
	int num = 0;
	add(&num);
	printf("%d  ", num);
	add(&num);
	printf("%d  ", num);
	add(&num);
	printf("%d  ", num);
	return 0;
}