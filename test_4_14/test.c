#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
	//char* p = "abcdef";    //�ŵ�a�ĵ�ַ����Ϊָ��ֻ�ܴ洢�ĸ��ֽڣ��治��6�������ԷŲ��£�
	//						//ֻ�ܷŵ�һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(p));    //4
	//printf("%d\n", sizeof(p+1));  //4
	//printf("%d\n", sizeof(*p));   //1 ��һ���ַ�
	//printf("%d\n", sizeof(p[0]));  //1
	//printf("%d\n", sizeof(&p));   //4
	//printf("%d\n", sizeof(&p+1));  //4
	//printf("%d\n", sizeof(&p[0]+1));  //4

	//printf("%d\n", strlen(p));  //6 - ���a�ĵ�ַ
	//printf("%d\n", strlen(p+1));  //5
	//printf("%d\n", strlen(*p));   //err
	//printf("%d\n", strlen(p[0]));  //err
	//printf("%d\n", strlen(&p));   //���ֵ
	//printf("%d\n", strlen(&p+1));  //���ֵ
	//printf("%d\n", strlen(&p[0]+1)); //5


	//int p[3][4] = { 0 };
	//printf("%d\n", sizeof(p));    //48   3*4*4=48
	//printf("%d\n", sizeof(p[0][0]));  //4
	//printf("%d\n", sizeof(p[0]));   //16 - p[0]�൱�ڵ�һ����Ϊ������������������������sizeof()��
	//								//�����һ�еĴ�С
	//printf("%d\n", sizeof(p[0]+1));  //4 - p[0]��ʾ��һ�е�һ��Ԫ�صĵ�ַ
	//                                  //����p[0]+1��һ�еڶ���Ԫ�صĵ�ַ,��ַ��Сλ4
	//printf("%d\n", sizeof(*(p[0]+1))); //4 - ��һ�еڶ���Ԫ�أ���С��4
	//printf("%d\n", sizeof(p + 1));  //4 - a��ʾ�ĵ�һ�еĵ�ַ��a+1��ʾ�ڶ�������ĵ�ַ����ַ��С��4
	//printf("%d\n", sizeof(*(p + 1)));  //16 - �ڶ��еĴ�С
	//printf("%d\n", sizeof(&p[0] + 1));  //4 - �ڶ��еĵ�ַ&p[0],��һ�еĵ�ַ��&p[0]+1�ڶ��еĵ�ַ
	//printf("%d\n", sizeof(*(&p[0] + 1)));  //16
	//printf("%d\n", sizeof( *p ));  //16 - p��ʾ��һ�еĵ�ַ��*p��ʾ��һ�еĴ�С
	//printf("%d\n", sizeof(p[3]));  //16


//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);    //&a+1��ʾ�������飬��int *����ʾǿ������ת��
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));//*��a+1���ǵڶ���Ԫ��                  *(ptr-1)��5
//}



//#include<stdio.h>
//struct test 
//{
//	int num;
//	char pcname;
//	short sdata;
//	char cha[2];
//	short sba[4];
//}* p;
//p��ֵλ0x100000���ṹ���С��20�ֽ�
//int main()
//{
//	p = (struct test*)0x100000;
//	printf("%p\n", p + 0x1);   //p��һ���ṹ��,�ṹ���С��20��������0x00100014
//	printf("%p\n", (unsigned long)p + 0x1); //ת��Ϊlong���͵��޷���������1��������0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//ת��Ϊint�͵��޷���������4������λ0x00100004
//}

//#include<stdio.h>
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x, %x", ptr1[-1], *ptr2);  //ptr1[-1]=4     *ptr2= 0x02 00 00
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//ע�ⶺ�ű��ʽ
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);          //1
//	//printf("%d\n", sizeof(a[0]));
//}



#include<stdio.h>
int main()
{
	//int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* ptr1 = (int*)(&aa + 1);
	//int* ptr2 = (int*)(*(aa + 1));
	//printf("%d,  %d", *(ptr1 - 1), *(ptr2 - 1));  //*(ptr1-1)=10    *(ptr2-1)=5


	//char* a[] = { "work","at","alibaba" };
	//char** pa = a;    //*pa��ʾpaָ���Ԫ����char*����
	//pa++;         //����һ��char*����
	//printf("%s", *pa);      //*pa=at    



	//char* c[] = { "ENTER","NEW","POINT","FIRST" };//�ڴ淽ʽ��EN   NE   PO    FI
	//char** cp[] = { c + 3,c + 2,c + 1,c };        //          c    c+1  c+2   c+3
	//char*** cpp[] = cp;

	//printf("%s\n", **++cpp);         //POINT
	//printf("%s\n", *--*++cpp + 3);  //ENTER
	//printf("%s\n", *cpp[-2]+3);    //FIRST
	//printf("%s\n", cpp[-1][-1]+1);//NEW
	
}