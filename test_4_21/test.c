#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//ö��    //��ʼֵ��˳������
//һһ�о�
//
//�ɶ��Ը���
//��#define����ı�ʶ���Ƚ����������ͼ�飬�����Ͻ�
//��ֹ������Ⱦ
//���ڵ���
//ʹ�÷��㣬һ�ο��Զ���������
//enum sex
//{
//	//ö�ٵĿ���ȡֵ
//	MALE = 2,    //2
//	FEMALE,   //3
//	SECRET = 15  //15      //����������ʼֵ
//};
//enum color
//{
//	RED,      //0
//	YELLOW,   //1 
//	BLUE       //2
//};
//int main()
//{
//	//enum sex s = MALE;
//	//enum color c = BLUE;
//	printf("%d  %d  %d", RED, YELLOW, BLUE);
//}



//#include<stdio.h>
//����,��Ա����һ��ռ䣬�ռ���С�Ĵ�С�����һ����Ա�Ĵ�С,�������С�ͽṹ�������ͬ
//union un    //���������c��iռͬһ���ռ䣬ʹ��i��ʱ������c����֮��Ȼ
//{
//	char c;   //1
//	int i;    //4
//};
//int main()
//{
//	union un u;
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	printf("%d\n", sizeof(u));    //4
//}



//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int a = 1;      //01 00 00 00С�˴洢           00 00 00 01��˴洢
//	int ret = check_sys();
//	if (ret == 1)
//
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//}



//enum sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum sex s = MALE;
//	printf("%d\n", sizeof(s));
//	return 0;
//}