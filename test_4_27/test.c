#define _CRT_SECURE_NO_WARNINGS
//�ļ�����----�����ļ��������ļ�
//���ݴ洢�������ļ�-----ȡ�������ļ��������
//�ļ�����:�ļ�·��+�ļ�������+�ļ���׺
//��:c:\code\test.txt
//�ı��ļ�     �ܿ��ö�
//�������ļ�



//�ļ�������  ���û����ļ�ϵͳ��ϵͳ�Զ�Ϊ�ڴ濪��һ���ļ�������
//printf���-----���������-----��Ļ
//#include<stdio.h>
//#include<string.h>
//int main()
//{
	//int a = 10000;
	//FILE* pf = fopen("test.txt", "wb");  //������ļ����Զ�������ʽд(wb)
	//fwrite(&a, 4, 1, pf);   //���û������ļ��ʹ���һ��
	//fclose(pf);
	//pf = NULL;


	//���ļ�
	//fopen("test.txt","r");
	//..��ʾ��һ��·��
	//. ��ʾ��ǰ·��


	//FILE* pf = fopen("test.txt", "r");   //���ļ�ʱ�ļ������ڳ���,ֻ���ļ�
	//if (pf == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//	return 0;
	//}  //�򿪳ɹ�
	////���ļ�
	//
	//fclose(pf);//�ر��ļ�
	//pf = NULL;
	//return 0;

//	int ch = fgetch(stdin);
//	fpuch(ch, stdout);
//	return 0;
//}


#include<stdio.h>
int main()
{
	//int a = 0;
	//int b = 0;
	//int c = (a = 12, b = 100, c = a + b);
	//printf("%d\n", c);
	//printf("%d  %f\n", (1.0) / 2, (1.0) / 2);  //112  0.000000

	//int a = 5;
	//int b = 0;
	//b = ++a + a++;   //++a=6  a++=7     
	//printf("%d  %d", a, b);
//	int a = 0;
//	scanf("%d", &a);
//	if (a > -5 && a < 10)
//	{
//		printf("1\n");
//	}
//	else
//	{
//		printf("0\n");
//	}
//}

//	int a = 0;
//	printf("%d", !(a > 10));   //0>10Ϊ��  !0=1


/*	int a = 0;
	scanf("%d", &a);
	printf("%f", (double)a); */    

	//int a = -100;   //������ʽ����
	//				//10000000 00000000 00000000 01100100
	//				//11111111 11111111 11111111 10011011
	//				//11111111 11111111 11111111 10011100        ffffff9c
	////char a = '#';
	//printf("%x\n%c", a, a);
	//printf("\n%d", '#');

	//char a = 0;
	//char b = 0;
	//a = getchar();
	//b = getchar();	
	//putchar(a);
	//putchar('\n');
	//putchar(b);
	//putchar('\n');
	//printf("%d", a - b);   //�����ʱ���м䲻�ܼӿո�

	char a;
	a = getchar();
	if (a >= '0' && a <= '9')
	{
		printf("����\n");
	}
	else if (a >= 'a' && a <= 'z')
	{
		printf("Сд\n");
	}
	else if (a >= 'A' && a < 'Z')
	{
		printf("��д\n");
	}
	else
	{
		printf("����\n");
	}
}