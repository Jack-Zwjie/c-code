#include<stdio.h>
#include<string.h>
/*int main()     //����
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
	100;   //���泣��
	4;     //���泣��
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
/*#define max 10  //�Ժ����max����10
//#define ����ı�ʶ������
int main()
{
	int a[max] = { 0 };
	printf("%d\n", max);
	return 0;
}*/
/*enum sex  //ö�ٳ���
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
int main()   //�ַ���
{
	"abcdef";
	"zhangwenjie";  //���ַ���
}*/
/*int main()
{
	char arr1[] = "abc";  //����   �ڴ�״̬Ϊ"abc"--'a' 'b' 'c' '\0'----"\0"��ʾ�ַ����Ľ�����־
	char arr2[] = { 'a', 'b', 'c' ,0};  //'a'--97  '\0'=0
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;

}*/
/*int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' ,'\0'};
	printf("%d\n", strlen(arr1));   //���3
	printf("%d\n", strlen(arr2));   //���15
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
	printf("�������.\n");
	printf("��Ҫ�ú�ѧϰ��\n");
	scanf_s("%d", &input);
	if (input==1)
	{
		printf("��offer");
	}
	else
	{
		printf("������");
	}
	return 0;

}*/
/*int main()
{
	
	int line = 0;
	printf("������ء�\n");
		while (line < 20000)
		{
			printf("�ô���  %d\n",line);
			line++;

		}
		printf("��OFFER");*/
	//printf("ÿ�����Ʊ\n");
	//scanf_s("%d", &input);
	//for (i = 0; i++; i=2000)
	//{

		//printf("Ӯȡ�׸���");
	//}
	//for (i = 0; i++; i=)
	//{
		//printf("�ú�ѧϰ");
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
	//�ƶ�����λ  <<����    >>����
	int a = 1;
	//ռ�ĸ��ֽ�--32������λ
	//a=00000000000000000000000000000001
	int b = a << 2;
	printf("%d\n", b);
}*/
/*int main()
{

	//��λ��
	//��λ��
	//��λ���
	int a = 4;
	int b = 5;
	int c = a & b;
	printf("%d\n", c);
	
}*/
/*int main()
{
	int a = 10;   //�߼�������
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
/*int main()    //��Ŀ������
{
	int c[10];//����Ĵ洢��С���������С��Ԫ�ش�С
	int a=10;
	int b = 20;
	a + b;   //˫Ŀ������ ��������������
	printf("%d\n", a);
	printf("%d\n", !a);
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a );//����
	//printf("%d\n", sizeof int);//������
	printf("%d\n", sizeof(c));
	return 0;
    



}*/