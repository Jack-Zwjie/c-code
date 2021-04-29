#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	//struct S s = { "уехЩ",20,72 };
//	struct S tmp = { 0 };
//	FILE* pf=fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return;
//	}
//	//fwrite(&s, sizeof(struct S), 1, pf);
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s  %s  %f\n", tmp.name, tmp.name, tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;

int main()
{
	printf("%d", sizeof(long));
}