#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	//printf("%f", 111);     //0.000000
//	//printf("%e   %e   %e   %e", 123.456, 123.459789, 0.0123456789, 789);
//	//printf("%s", "hello\nwor\0il");
//	//printf("%4d%4d%4d\n", 2, 34567, 789);
//	//printf("%-5d%-5d%-5d\n", 2, 34567, 789);
//	//printf("%8.2f,%8.3f,%8.4f\n", 1.234, 19.87654, 100000.23);
//	//double r = 0;
//	//double s = 0;
//	//double pi = 3.1415;
//	//printf("请输入圆的半径:");
//	//scanf("%lf", &r);
//	//if (r >= 10&&r<0)
//	//{
//	//	printf("输入数据错误。\n");
//	//}
//	//else
//	//{
//	//	s = pi * r * r;
//	//	printf("%.2f", s);
//	//}
//
//	//int x = 0;
//	//double sex = 0;
//	//printf("请输入及格的人数:");
//	//scanf("%d", &x);
//	//sex = (double)x / 64;
//	//printf("%.2f=%d%%%d\n", sex, x, 64);
//
//	//char a;
//	//a = getchar();
//	////getchar();
//	//while (a == 'h')
//	//{
//	//	a = getchar();
//	//}
//	//printf("Hello,your programme is right!");
//
//
//	//double a = 0;
//	//double b = 0;
//	//double c = 0;
//	//double x1 = 0;
//	//double x2 = 0;
//	//double delta = 0;
//	//double sqrt_delta = 0;
//	//scanf("%f%f%f", &a, &b, &c);
//	//delta = b * b - 4 * a * c;
//	//if (delta >= 0)
//	//{
//	//	sqrt_delta = sqrt(delta);
//	//	x1 = ((-b + sqrt_delta) / (2 * a));
//	//	x2 = ((-b - sqrt_delta) / (2 * a));
//	//	printf("%f  %f\n", x1, x2);
//	//}
//
//
//
//
//
//
//
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	double x1 = 0.0, x2 = 0.0;
//	printf("请输入a b c的值:");
//	scanf("%lf%lf%lf", &a, &b, &c);
//	printf("您输入a b c的值是:");
//	printf("%lf  %lf  %lf\n", a, b, c);
//	double delta = b * b - 4 * a * c;
//	double sqrt_delta = sqrt(delta);
//	if (delta > 0)
//	{
//		printf("方程有两个实根,分别为:");
//		x1 = (-b + sqrt_delta) / (2 * a);
//		x2 = (-b - sqrt_delta) / (2 * a);
//		printf("x1=%lf   x2=%lf", x1, x2);
//	}
//	else if (delta == 0)
//	{
//		printf("方程有两个相同的实跟，为:");
//		x1 = -b / (2 * a);
//		printf("x1=%lf\n", x1);
//	}
//	else
//	{
//		printf("方程有两个共轭复根，分别为:");
//		x1 = -b / (2 * a) + sqrt_delta / (2 * a);
//		x2 = -b / (2 * a) - sqrt_delta / (2 * a);
//		printf("x1=%lf   x2=%lf", x1, x2);
//	}
//}



#include<stdio.h>
#include<math.h>
int main()
{
	/*float a = 0.0;
	float b = 0.0;
	char c;
	printf("请输入要计算的表达式:a+(-,*,/,%%)b:");
	scanf("%f%c%f", &a, &c, &b);
	switch (c)
	{
	case '+':
		printf("%.3f\n", a + b);
		break;
	case '-':
		printf("%.3f\n", a - b);
		break;
	case '*':
		printf("%.3f\n", a * b);
		break;
	case '/':
	{
		if (0 != b)
		{
			printf("%.3f\n", a / b);
			break;
		}
		else
		{
			printf("分母不能等于0。");
			break;
		}
		}
	case '%':
	{
		int c = (int)a;
		int d = (int)a;
		int e = c % d;
		printf("%d\n", e);
		break;
	}
	}*/


	//int a = 0;
	//int b = 0;
	//scanf("%d%d", &a, &b);
	//int max = a;
	//if (max < b)
	//	max = b;
	//printf("%d", max);

	//int a = 0;
	//int b = 0;
	//int c = 0;
	//scanf("%d%d%d", &a, &b, &c);
	//if (a < b)
	//{
	//	int max = a;
	//	a = b;
	//	b = max;
	//}
	//if (a < c)
	//{
	//	int max = a;
	//	a = c;
	//	c = max;
	//}
	//if (b < c)
	//{
	//	int max = b;
	//	b = c;
	//	c = max;
	//}
	//printf("%d %d %d", a, b, c);
	


	//int a = 0;
	//scanf("%d", &a);
	//if ((a % 3 == 0) && (a % 5 == 0) && (a % 7 == 0))
	//{
	//	printf("ok\n");
	//}
	//else
	//{
	//	printf("no\n");
	//}

	//int x = 0;
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//scanf("%d", &a);
	//a = x / 100;
	//b = (x - a * 100) / 10;
	//c = (x - a % 100 - b * 10) / 1;
	//if (x == (c * 100 + b * 10 + a * 1))
	//	printf("yes");
	//else
	//	printf("no");


	//int i = 0;
	//int sum = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 2 == 1)
	//	{
	//		sum = sum + i;
	//	}
	//	else
	//	{
	//		sum = sum;
	//	}
	//}
	//printf("%d", sum);


	//int i = 100;
	//int cout = 0;
	//for (i = 100; i <= 1000; i++)
	//{
	//	if ((i % 7 == 0) && (i % 11 == 0))
	//	{
	//		cout++;
	//		printf("%d  ", i);

	//		if (cout % 3 == 0)
	//			printf("\n");
	//	}
	//}

}