#define _CRT_SECURE_NO_WARNINGS
//柔性数组 
//代码简单，不容易出错
//少用malloc就能更少的产生时间碎片，节约空间
//内存连续，访问速率快
#include<stdio.h>
//struct S
//{
//	int n;
//	int arr[];     //柔性数组，在结构体大小计算中不大小,可变化
//};
//int main()
//{
//	struct S s;
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	//前面四个字节给n开辟的，后面24个字节是给arr开辟的
//	ps->n = 100;
//	int i = 0;
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr=realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}


struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* ps = malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d   ", ps->arr[i]);
	}
	//调整大小小
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (NULL)
	{
		ps->arr[i] = ptr;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d", ps->arr[i]);
	}
	free(ps->arr);    //使用了两次malloc，所以释放了两次，而且顺序会影响代码，容易导致错误
	ps->arr = NULL;   //空间浪费多
	free(ps);
	return 0;
}