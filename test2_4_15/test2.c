#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);   //��������ϰ벿�ֵ�����
//	int i = 0;
//	for (i = 0; i < line; i++)//��ӡ�ϰ벿��
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)//��ӡ�ո�,��j�д�ӡ�Ŀո��ǣ����������пո�λ3��i=3��j=7-1-3
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)//��ӡ*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)//��ӡ�°벿��
//	{
//		int j = 0;
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i)-1; j++)//��ӡ*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}


//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int empty = 0;
//	int money = 0;
//	printf("���������ж���Ǯ:");
//	scanf("%d", &money);
//	count = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		int empty1 = empty;   //�Ƚ�empty��ʼ��ֵ������������ֹȡ���ʱ��empty�ǳ����Ժ��ֵ
//		empty = empty / 2;   //����������ˮ
//		count = empty + count;
//		empty = empty + empty1 % 2;//�һ��Ժ�Ŀ�ƿ��+�ϴζһ�ʣ�µĿ�ƿ��
//	}
//	printf("%d\n", count);
//}


//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int empty = 0;
//	int money = 0;
//	printf("���������ж���Ǯ:");
//	scanf("%d", &money);
//	if (money == 0)
//		count = 0;
//	else 
//		count = money * 2 - 1;   //�ܽ������ȵ���ˮ�����������Ŀ�ƿ��һ
//	printf("%d\n", count);
//}




//#include<stdio.h>
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d   ", arr[i]);
//	}
//	printf("\n");
//}
//void move(int arr[],int sz)
//{
//	int i = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (left < right && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		while (left < right && (arr[left] % 2 == 1))  //�ж������������������±�++
//		{
//			left++;
//		}
//		if (left < right)  //����������ż��
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//}


