
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	int N;
//	for (i = 0; i < N; i++)
//	{
//		for(int j = 0;j < N; j++)
//		{
//			count++;
//		}
//	}
//	for (int k = 0; k < 2 * N; k++)
//	{
//		++count;
//	}
//	int n = 10;
//	for (i = 0; i < n; i++)
//	{
//		count--;
//	}
//	return 0;
//}
//ʱ�临�Ӷ�:F(N)=N^2+2*N+10
//һ��ʹ�ô�O���Ž�����ʾ:O(N^2) --- ��������ȡ����ʽ����������ֵ
#define MAX 5
int main()
{
	int arr[MAX] = { 0 };
	arr[0] = 1;
	arr[1] = 1;
	printf("%d  %d  ", arr[0], arr[1]);
	for (int i = 2; i < MAX;i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		printf("%d  ", arr[i]);		
	}
}