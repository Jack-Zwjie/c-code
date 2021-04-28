#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<string.h>
//scanf/printf 是针对标准输入/标准输出流的 格式化输入/输出
//fscanf/fprintf 是针对所有输入流/所有输出流 格式化输入/输出
//sscanf 吧从字符串中读取格式化数据
//sprintf 是吧格式化数据输出（存储到）字符串
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
	//fputc('t', pf);   //写文件

	//ch=fgetc(pf);  //读文件，一个字符一个字符读
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
	//puts(buf);    //自己带换行

	/*fputs("hello\n", pf);
	fputs("word\n", pf);*/

	//fprintf(pf, "%d%f%s", s.n, s.score, s.arr);  //可以放任何类型的数据

	fscanf(stdin,"%d%f%s", &(s.n), &(s.score), s.arr);
	fprintf(stdout,"%d  %f  %s", s.n, s.score, s.arr);
	fclose(pf);
	pf = NULL;
	return 0;
}