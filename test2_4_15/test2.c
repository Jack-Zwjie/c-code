#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);   //输入的是上半部分的行数
//	int i = 0;
//	for (i = 0; i < line; i++)//打印上半部分
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)//打印空格,第j行打印的空格是，例：第四行空格位3，i=3，j=7-1-3
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)//打印*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)//打印下半部分
//	{
//		int j = 0;
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i)-1; j++)//打印*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}


//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int empty = 0;
//	int money = 0;
//	printf("请输入你有多少钱:");
//	scanf("%d", &money);
//	count = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		int empty1 = empty;   //先将empty开始的值保存起来，防止取余的时候empty是除完以后的值
//		empty = empty / 2;   //换回来的汽水
//		count = empty + count;
//		empty = empty + empty1 % 2;//兑换以后的空瓶数+上次兑换剩下的空瓶数
//	}
//	printf("%d\n", count);
//}


//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int empty = 0;
//	int money = 0;
//	printf("请输入你有多少钱:");
//	scanf("%d", &money);
//	if (money == 0)
//		count = 0;
//	else 
//		count = money * 2 - 1;   //总结下来喝的汽水数量是两倍的空瓶减一
//	printf("%d\n", count);
//}




//#include<stdio.h>
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d   ", arr[i]);
//	}
//	printf("\n");
//}
//void move(int arr[],int sz)
//{
//	int i = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (left < right && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		while (left < right && (arr[left] % 2 == 1))  //判断奇数条件成立，左下标++
//		{
//			left++;
//		}
//		if (left < right)  //交换奇数和偶数
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//}


