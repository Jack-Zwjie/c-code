#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//int main()
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int x = 20;
//	int y = 20;
//	int z = 0;
//	z=add(x, y);
//	printf("%d\n", z);
//}
//{
//	char arr[] = { 0 };
//	
//	//system("shutdown - s - t 60");
//again:
//	printf("��ĵ��Խ���60���ػ�������������������ȡ���ػ���\n");
//	printf("�����룺");
//	scanf_s("%s", &arr);
//	if (strcmp(arr, "������"))
//	{
//		system("shutdown -a");
//		printf("ȡ���ػ�\n");
//	}
//	else
//	{
//		goto again;
//	}
//}
//void change(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//void change1(int* pa,int *pb)
//{
//	int tmp = 0;
//	tmp = *pa;          //��ߵ�a��tmp
//	*pa = *pb;
//	*pb = tmp;
//
//}
//int main()
//{
//
//	int* a = 10;
//	int* b = 20;
//	change(a, b);              //���ܽ���a��b��ֵ
//	printf("%d %d\n", a, b);
//	change1(&a, &b);              //����ָ�����Խ���a��b��ֵ
//	printf("%d %d\n", a, b);
//}

//int is_prime(int n)        //����������1�����򷵻�0
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j==0)
//		{
//			return 0;
//		}
//	}
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


//is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))     //������ж�����
//		return 1;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//}


//int binary_search(int arr[],int k,int sz)  //arr[]���ݹ�ȥ��Ϊ��Ԫ�صĵĵ�ַ��������arr[]Ϊָ��
//{                                         //�����ں����ڲ��������С�����ף������ں����ⲿ����
//	int left = 0;                        //ֻ���ں������β��д��������С
//	int right = sz - 1;                 //sz=sizeof(arr)/sizeof(arr[0]);
//	while (left<=right)                //ÿ�ζ�Ӧ�ü����м�Ԫ�أ�����mid��ѭ������
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left=mid+1;             //���±��1
//		}
//		else if (arr[mid] > k)
//		{
//			right=mid - 1;        //���±��1
//		}
//		else
//		{
//			return mid;
//		}
//	}
//}
//
//int main()
//{
//	//���ֲ���
//	//�ҵ��˷�����������±꣬�Ҳ�������-1
//	int k = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("��������Ҫ���ҵĵ���k��");
//	scanf_s("%d", &k);
//	int ret = binary_search(arr, k, sz);
//	if (ret == 1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ��%d\n",ret);
//	}
//} 


int add(int* num)     //Ҫ�ı�num�����ݣ���ָ�������numΪ������num�ĵ�ַ
{
	(*num)++;           //�����ã�ָ��ָ������ݽ��в���
}

int main()
{
	//ÿִ��һ��add(&num)num+1
	int num = 0;
	add(&num);
	printf("%d  ", num);
	add(&num);
	printf("%d  ", num);
	add(&num);
	printf("%d  ", num);
	return 0;
}