//�������      ָ�����
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	char* p2 = "abcdef";    //p2ָ���ַ������׵�ַa
//
//}



//����ָ�룬ָ������ָ��
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
//	//printf("%p\n", &add);         //�����ĵ�ַ
//	//printf("%p\n", add);   //&�������ͺ��������Ǻ����ĵ�ַ
//	int(*pa)(int, int) = add;       //ָ������ָ��
//	//int c = (*pa)(2, 3);
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (*pa)(2, 3));   //��������������
//	printf("%d\n", pa(2, 3));
//}


//(*(void(*)())0)();   //��0ǿ������ת���ɣ�void(*)()����ָ������ - 0����һ�������ĵ�ַ
                       //����0��ַ���ĸú���




//signal��һ����������
//signal�����Ĳ�����������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ���������int������������void
//signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ���������int������������void
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




