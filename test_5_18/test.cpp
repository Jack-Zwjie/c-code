#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define set 0
#if set
void big(char* p,int sz)
{
	int i = 0;
	int a = 0;
	int b = 0;
	for (i = 0; i < sz-1; i++)
	{
		if ((*p >= 'a') && (*p <= 'z'))
			a++;
		else if ((*p >= 'A') && (*p <= 'Z'))
			b++;
		p++;
	}
	printf("小写字母有%d个\n", a);
	printf("大写字母有%d个\n", b);
}

int main()
{
	char arr[] = { "advdcAfdFddW" };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//printf("%d", sz);
	big(arr,sz);
}
#else 1

int asds(int a, int b)
{
	int c = 0;
	int d = 0;
	d = a;
	if (d < b)
	{
		d = b;
	}
	while (b)
	{
		c = b;
		b = a % b;
		a = c;
	}
	return c;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请随机输入两个大于0的数\n");
	scanf("%d %d", &a, &b);
	if ((a > 0) && (b > 0))
	{
		c = asds(a, b);
		printf("%d", c);
	}
	else
	{
		printf("输入错误\n");
	}
}
#endif