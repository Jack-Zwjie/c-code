//#define _CRT_SECURE_NO_WARNINGS
////�ص�����
//#include<stdio.h>
//#include<stdlib.h>   //qusort�����õ�ͷ�ļ�
//#include<string.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
//void qusort(void *base,
//			size_t num,
//			size_t width,
//			int (*cmp)(const void* e1,const void* e2)
//			);
//int cmp_int(const void* e1, const void* e2)    //���Խ����������͵�ָ��
//{
//	return *(int*)e1 - *(int*)e2;   //��ǿ������ת��Ϊint*,Ȼ���ٽ�����
//									//��һ��Ԫ��С�ڵڶ���Ԫ�أ�����С��0������
//									//��һ��Ԫ�ص��ڵڶ���Ԫ�أ����ص���0������
//									//��һ��Ԫ�ش��ڵڶ���Ԫ�أ����ش���0������
//}
//
//void test0()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//}
//
//
//int  cmp_float(const void* e1, const void* e2)    //���Խ����������͵�ָ��
//{
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}
//
//
//void test1()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f  ", f[i]);
//	}
//}
//
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//void test2()
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//void test3()
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	int a = 10;
//	void* pa = &a;        //���Խ����������͵�ָ��
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
//	//test0();
//	//test1();
//	//test2();
//	//test3();
//}
//

#include<stdio.h>   //32λƽ̨
int main()
{
	//����������Ԫ�ص�ַ,ֻ��һ�����������ʾ��������
	//1��sizeof(������) - ��������ʾ��������
	//2��&������ - ��������ʾ��������ĵ�ַ
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));    //������������С����λ���ֽڣ�������4*4=16
	//printf("%d\n", sizeof(a+0));   //4��8- �����������ʾ��Ԫ�ص�ַ��a+0������Ԫ�ص�ַ��Ϊ4���ֽ�
	//printf("%d\n", sizeof(*a));    //4 - ��Ԫ�ش�С��*a��ʾ��Ԫ��
	//printf("%d\n", sizeof(a+1));   //4��8 - �ڶ���Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(a[1]));   //4 - �ڶ���Ԫ�ش�С
	//printf("%d\n", sizeof(&a));    //4 - ȡ������������ĵ�ַ����ַ��СΪ4
	//printf("%d\n", sizeof(*&a));   //16 - ȡ�����������ַȻ������ã�*&�໥�����ˣ����Ժ�sizeof(a)��ͬ
	//printf("%d\n", sizeof(&a+1));   //4 - &a������ĵ�ַ��&a+1���������ַ�������ǵ�ַ
	//printf("%d\n", sizeof(&a[0]));   //4
	//printf("%d\n", sizeof(&a[0]+1));  //4 - �ڶ���Ԫ�صĵ�ַ

	//char a[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(a));    //������������С����λ���ֽڣ�������6
	//printf("%d\n", sizeof(a + 0));   //4��8- �����������ʾ��Ԫ�ص�ַ��a+0������Ԫ�ص�ַ��Ϊ4���ֽ�
	//printf("%d\n", sizeof(*a));    //1 - ��Ԫ�ش�С��*a��ʾ��Ԫ��
	//printf("%d\n", sizeof(a + 1));   //4��8 - �ڶ���Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(a[1]));   //1 - �ڶ���Ԫ�ش�С
	//printf("%d\n", sizeof(&a));    //4 - ȡ������������ĵ�ַ����ַ��СΪ4
	//printf("%d\n", sizeof(*&a));   //6 - ȡ�����������ַȻ������ã�*&�໥�����ˣ����Ժ�sizeof(a)��ͬ
	//printf("%d\n", sizeof(&a + 1));   //4 - &a������ĵ�ַ��&a+1���������ַ�������ǵ�ַ
	//printf("%d\n", sizeof(&a[0]));   //4
	//printf("%d\n", sizeof(&a[0] + 1));  //4 - �ڶ���Ԫ�صĵ�ַ


	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr));    //���ֵ - arr[]����û���±꣬���ڴ���ֱ���ҵ�'\0'ֹͣ
	//printf("%d\n", strlen(arr+0));  //���ֵ
	//printf("%d\n", strlen(*arr));   //�������
	//printf("%d\n", strlen(arr[1]));  //�������
	//printf("%d\n", strlen(&arr));   //���ֵ
	//printf("%d\n", strlen(&arr+1));  //���ֵ-6
	//printf("%d\n", strlen(&arr[0]+1)); //���ֵ-1
}
