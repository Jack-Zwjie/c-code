#define _CRT_SECURE_NO_WARNINGS
////#include<stdio.h>
////#include<string.h>
////void reverse(char* str)
////{
////	int i = 0;
////	int len = strlen(str);
////	char* left = str;
////	char* right = len+str-1;
////	for (i = 0; i < len / 2; i++)
////	{
////		char tmp = *left;
////		*left = *right;
////		*right = tmp;
////		left++;
////		right--;
////	}
////}
////int main()
////{
////	char arr[255] = { 0 };
//////	scanf("%s", &arr);
////  gets(arr);   //��һ���ַ�������arr����ȡ
////	reverse(arr);
////	printf("%s\n", arr);
////	return 0;
////}
//
//
//
////#include<stdio.h>
////int main()
////{
////	int a = 0;
////	int n = 0;
////	scanf("%d%d", &a, &n); 
////	int ret = 0;    //����������һ������һ���10+a
////	int sum = 0;
////	int i = 0;
////	for (i = 0; i < n; i++)
////	{
////		ret = 10 * ret + a;   //ʵ�����ֵĳ��ֺ�ѭ�������е����׼��
////		sum += ret;
////	}
////	printf("%d\n", sum);
////}
//
//
//#include<stdio.h>
//#include<math.h>
//int print()                //����λ���ĺ���
//{	
//	int i = 0;	
//	for (i = 0; i < 100000; i++)
//	{
//		int n = 1;
//		int sum = 0;
//		int tmp = i;
//		if(tmp / 10 != 0)
//		{
//			tmp = tmp / 10;
//			n++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, n);
//			tmp = tmp % 10;
//		}
//		if (i == sum)
//		{
//			printf("%d", i);
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)   //�ж�i�ǲ���ˮ�ɻ���
//	{
//		//1������λ��n
//		//2������ÿλ��n�η�֮��
//		//3���Ƚ�i==sum
//		int n = 1;
//		int sum = 0;
//		int tmp = i;
//		while(tmp/10)
//		{
//			tmp = tmp / 10;
//			n++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		if (i == sum)
//		{
//			printf("%d    ", i);
//		}
//	}
//}

//
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);   //��������ϰ벿�ֵ�����
//	int i = 0;
//	for (i = 0; i < line; i++)//��ӡ�ϰ벿��
//	{
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)//��ӡ�ո�,��j�д�ӡ�Ŀո��ǣ����������пո�λ3��i=3��j=7-1-3
//		{
//			printf(" ");
//		}
//		for (j = 0; i < 2*i + 1; j++)//��ӡ*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i+1; j++)//��ӡ�ո�,��j�д�ӡ�Ŀո��ǣ����������пո�λ3��i=3��j=7-1-3
//		{
//			printf(" ");
//		}
//		for (j = 0; i < 2 *(line-1-i); j++)//��ӡ*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}