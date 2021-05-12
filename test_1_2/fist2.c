#include<stdio.h>
#include<string.h>
/*int main()     //常量
{
	double a = 0;
	double b = 0;
	double c = 0;
	scanf_s("%lf%lf", &a, &b);
	c = a + b;
	printf("c=%lf\n", c);
	return 0;
}*/

/*int main()
{
	100;   //字面常量
	4;     //字面常量
	const int a = 10;
	printf("%d\n", a);
	a = 20;
	printf("%d\n", a);
	return 0;
}*/
/*int main()
{
	const int n = 10;
	int a[8] = { 0 };
	//n = 20;
	int a[n] = { 0 };
}*/
/*#define max 10  //以后出现max就是10
//#define 定义的标识符常量
int main()
{
	int a[max] = { 0 };
	printf("%d\n", max);
	return 0;
}*/
/*enum sex  //枚举常量
{
	male,
	female,
	secret,
};

int main()
{
	enum sex s = female;
	printf("%d\n", male);
	printf("%d\n", female);
	printf("%d\n",secret );
}*/



/*
int main()   //字符串
{
	"abcdef";
	"zhangwenjie";  //空字符串
}*/
/*int main()
{
	char arr1[] = "abc";  //数组   内存状态为"abc"--'a' 'b' 'c' '\0'----"\0"表示字符串的结束标志
	char arr2[] = { 'a', 'b', 'c' ,0};  //'a'--97  '\0'=0
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;

}*/
/*int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' ,'\0'};
	printf("%d\n", strlen(arr1));   //结果3
	printf("%d\n", strlen(arr2));   //结果15
	return 0;
}*/
/*int main()
{
	printf("(we de tian??)\n");
	printf("%c\n", '\'');
	printf("%d\n",strlen("c:\test\32\test.c"));
	printf("%c\n", '\32');
	return 0;
}*/

/*int main()
{
	int input = 0;
	printf("加入比特.\n");
	printf("你要好好学习吗？\n");
	scanf_s("%d", &input);
	if (input==1)
	{
		printf("好offer");
	}
	else
	{
		printf("卖红薯");
	}
	return 0;

}*/
/*int main()
{
	
	int line = 0;
	printf("加入比特。\n");
		while (line < 20000)
		{
			printf("敲代码  %d\n",line);
			line++;

		}
		printf("好OFFER");*/
	//printf("每天买彩票\n");
	//scanf_s("%d", &input);
	//for (i = 0; i++; i=2000)
	//{

		//printf("赢取白富美");
	//}
	//for (i = 0; i++; i=)
	//{
		//printf("好好学习");
	//}

	
//}
/*void add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{

}
*/
/*int main()
{
	int i = 0;
	int a[10] = {0,1,2,3,4,5,6,1,8,9};
	char b[10];
	int c[8] = { 0,1,2,3 };
	while (i < 8)
	{
		printf("%d  %d \n", c[i],i);
		i++;
	}
	return 0;
}
*/
/*int main()
{
	int a = 5 % 2;
	printf("%d\n", a);

}*/
/*int main()
{
	//移二进制位  <<左移    >>右移
	int a = 1;
	//占四个字节--32个比特位
	//a=00000000000000000000000000000001
	int b = a << 2;
	printf("%d\n", b);
}*/
/*int main()
{

	//按位与
	//按位或
	//按位异或
	int a = 4;
	int b = 5;
	int c = a & b;
	printf("%d\n", c);
	
}*/
/*int main()
{
	int a = 10;   //逻辑操作符
	a = 20;
	a = a + 10;
	a +=10 ;
	a = a - 20;
	a -= 20;
	a = a & 2;
	return 2;
}*/
/*int main()
{
	int a = 5;
	int b = 2;
	int c = a %= b;
	printf("%d\n", c);
}*/
/*int main()    //单目操作符
{
	int c[10];//数组的存储大小等于数组大小乘元素大小
	int a=10;
	int b = 20;
	a + b;   //双目操作符 两个数进行运算
	printf("%d\n", a);
	printf("%d\n", !a);
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a );//可以
	//printf("%d\n", sizeof int);//不可以
	printf("%d\n", sizeof(c));
	return 0;
    



}*/