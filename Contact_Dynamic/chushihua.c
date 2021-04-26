#define _CRT_SECURE_NO_WARNINGS
#include"contach.h"

void initcontact(struct contact* ps)
{
	ps->arr = (struct people*)malloc(DEFAULT_SZ * sizeof(struct people));
	if (ps == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
}
void CheckCapacity(struct contact* ps)
{
	if (ps->size == ps->capacity)
	{
		struct people* ptr=realloc(ps->arr, (ps->capacity + 2) * sizeof(struct people));
		if (ptr != NULL)
		{
			ps->arr = ptr;
			ps->capacity += 2;
			printf("增容成功。\n");
		}
		else
		{
			printf("增容失败。\n");
		}
	}
}
void addcontact(struct contact* ps)
{
	CheckCapacity(ps);
	printf("请输入名字:");
	scanf("%s", ps->arr[ps->size].name); //输入存储的数据，在arr数组，放在第ps->size个空间内
	printf("请输入年龄:");
	scanf("%d", &(ps->arr[ps->size].age));
	printf("请输入性别:");
	scanf("%s", ps->arr[ps->size].sex);
	printf("请输入电话:");
	scanf("%s", ps->arr[ps->size].tele);
	printf("请输入地址:");
	scanf("%s", ps->arr[ps->size].adder);
	ps->size++;
	printf("添加成功。\n");
}


void showcontact(const struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空。\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");//标题
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->arr[i].name,
				ps->arr[i].age,
				ps->arr[i].sex,
				ps->arr[i].tele,
				ps->arr[i].adder
			);
		}
	}
}


//static只能在源文件里面才能看到
static int findbyname(const struct contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->arr[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
void delcontact(struct contact* ps)    //删除
{
	char name[MAX_NAME];
	printf("请输入要删除人的名字:");
	scanf_s("%s", name);
	//1.查找要删除的人在什么位置
	int pos = findbyname(ps, name);   //找到了返回名字所在的下标，找不到返回-1
	if (pos == -1)
	{
		printf("删除的人不存在。\n");
	}
	//2.删除
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1 ; j++)
		{
			ps->arr[j] = ps->arr[j + 1];
		}
		ps->size--;
		printf("删除成功。\n");
	}
}

void searchcontact(const struct contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找人的名字:");
	scanf("%s", name);
	int pos = findbyname(ps, name);
	if (pos == -1)
	{
		printf("要查找的人不存在。\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");//标题
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->arr[pos].name,
				ps->arr[pos].age,
				ps->arr[pos].sex,
				ps->arr[pos].tele,
				ps->arr[pos].adder);
	}
}


void modifycontact(struct contact* ps)     //修改，用重新录入的方法
{
	char name[MAX_NAME];
	printf("请输入要修改人的名字。\n");
	scanf("%s", name);
	int pos=findbyname(ps, name);
	if (pos == -1)
	{
		printf("要修改人的信息不存在。\n");
	}
	else
	{
		scanf("%s", ps->arr[pos].name); //输入存储的数据，在arr数组，放在第ps->size个空间内
		printf("请输入年龄:");
		scanf("%d", &(ps->arr[pos].age));
		printf("请输入性别:");
		scanf("%s", ps->arr[pos].sex);
		printf("请输入电话:");
		scanf("%s", ps->arr[pos].tele);
		printf("请输入地址:");
		scanf("%s", ps->arr[pos].adder);
		printf("修改成功。\n");
	}
}

void sortcontact(struct contact* ps)   //,struct people arr[MAX]
{
	int i = 0;
	int j = 0;
	if (ps->size == 0)
	{
		printf("通讯录为空。\n");
	}
	else
	{

		int temp = 0;
		for (i = 0; i < ps->size - 1; i++)
		{
			for (j = 0; j < ps->size - 1 - i; j++)
			{
				if (ps->arr[j].age < ps->arr[j + 1].age)
				{
					temp = ps->arr[j].age;
					ps->arr[j].age = ps->arr[j + 1].age;
					ps->arr[j + 1].age = temp;
				}
			}
		}
	}
	for (i = 0; i < ps->size; i++)
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");//标题
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->arr[i].name,
			ps->arr[i].age,
			ps->arr[i].sex,
			ps->arr[i].tele,
			ps->arr[i].adder);
	}
}


void DestroyContact(struct contact* ps)
{
	free(ps->arr);
	ps->arr = NULL;
}