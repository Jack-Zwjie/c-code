#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define max(x,y) ((x)>(y)?(x):(y))   //无类型 不能调试
//#define MALLOC(num,type) ((type*)malloc(num*sizeof(type)))
//int main()
//{
	//int a = add(5);
	//printf("%d", a);


	//int a = 10;
	//int b = a + 1;     //没改变
	//int b = ++a;    //a的值改变了，叫产生了副作用


	//不建议传递有副作用的宏参数
	//int a = 10;
	//int b = 11;
	//int c = max(a++, b++);  //((a++)>(b++)?(a++):(b++)) 第二个a++没执行
	//printf("%d\n", c);   //12
	//printf("%d\n", a);   //11
	//printf("%d\n", b);   //13


	//int* p = (int*)malloc(10 * sizeof(int));
	//int* q = MALLOC(10, int);
//}


//条件编译
//#define DEFINE    //加上这句打印，不加不打印
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG       //条件编译
//		printf("%d   ", arr[i]);
//#endif
//	}
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d   ", arr[i]);
	//	count++;
	//	if (count % 5 == 0)
	//	{
	//		printf("\n");
	//	}
	//}

//
//#if 1==1     //和if...else语句相似，1==1成立执行printf，否则下一个if
//	printf("haha\n");
//#elif 2 == 1
//	printf("hehe\n");
//#else
//	printf("lala\n");
//#endif


//#ifdef DEFINE      //前面定义DEFINE就打印，否则不打印
//	printf("haha");
//	printf("haha");
//	printf("haha");
//#endif
//
//
//#ifndef DEFINE      //前面没定义DEFINE就打印，否则不打印
//	printf("haha");
//	printf("haha");
//	printf("haha");
//#endif
//}