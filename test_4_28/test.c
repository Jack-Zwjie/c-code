#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<string.h>
//scanf/printf ����Ա�׼����/��׼������� ��ʽ������/���
//fscanf/fprintf ���������������/��������� ��ʽ������/���
//sscanf �ɴ��ַ����ж�ȡ��ʽ������
//sprintf �ǰɸ�ʽ������������洢�����ַ���
//int main()
//{
	/*FILE* pf = fopen("test.txt", "w");
	if (pf = NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fclose(pf);
	pf = NULL;*/

	//char buf[1024] = { 0 };
	//FILE* pf = fopen("test.txt", "t");
	//if (pf == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//	return 0;
	//}
	//fputc('b', pf);
	//fputc('i', pf);
	//fputc('t', pf);   //д�ļ�

	//ch=fgetc(pf);  //���ļ���һ���ַ�һ���ַ���
	//printf("%d   ", ch);
	//ch = fgetc(pf);
	//printf("%d   ", ch);
	//ch = fgetc(pf);
	//printf("%d   \n", ch);


	//fgets(buf, 1024, pf);
	//printf("%d   ", buf);
	//fclose(pf);
	//pf = NULL;
	//return 0;
//}

struct S
{
	int n;
	float score;
	char arr[10];
};
int main()
{
	/*char buf[1024] = { 0 };*/
	struct S s = { 100,3.14f,"bit" };
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	/*fgets(buf, 1024, pf);
	printf("%s", buf);
	fgets(buf, 1024, pf);
	printf("%s\n", buf);
	fclose(pf);*/

	//fgets(buf, 1024, pf);
	//puts(buf);    //�Լ�������

	/*fputs("hello\n", pf);
	fputs("word\n", pf);*/

	//fprintf(pf, "%d%f%s", s.n, s.score, s.arr);  //���Է��κ����͵�����

	fscanf(stdin,"%d%f%s", &(s.n), &(s.score), s.arr);
	fprintf(stdout,"%d  %f  %s", s.n, s.score, s.arr);
	fclose(pf);
	pf = NULL;
	return 0;
}