//数组参数      指针参数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	char* p2 = "abcdef";    //p2指向字符串的首地址a
//
//}



//函数指针，指向函数的指针
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	//printf("%d\n", add(a, b));
//	//printf("%p\n", &add);         //函数的地址
//	//printf("%p\n", add);   //&函数名和函数名都是函数的地址
//	int(*pa)(int, int) = add;       //指向函数的指针
//	//int c = (*pa)(2, 3);
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (*pa)(2, 3));   //这两方法都可以
//	printf("%d\n", pa(2, 3));
//}


//(*(void(*)())0)();   //吧0强制类型转换成：void(*)()函数指针类型 - 0就是一个函数的地址
                       //调用0地址处的该函数




//signal是一个函数声明
//signal函数的参数有两个，一个是int，第二个是函数指针，该函数指针指向的函数参数是int，返回类型是void
//signal函数的返回类型也是一个函数指针，该函数指针指向的函数参数是int，返回类型是void
//void (*   signal(int, void(*)(int))   )(int);  
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);


//
//int add(int x, int y)
//{
//    return x + y;
//}
//int mul(int x, int y)
//{
//    return x - y;
//}
//int div(int x, int y)
//{
//    return x / y;
//}
//int ddd(int x, int y)
//{
//    return x * y;
//}
//int main()
//{
//    int* arr[5];
//    int (*pa)(int, int) = add;
//    int (*parr[4])(int, int) = { add, mul, div, ddd };
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        printf("%d\n", (*parr[i])(2, 3));    //+5  --1   /0     *6
//    }
//}




