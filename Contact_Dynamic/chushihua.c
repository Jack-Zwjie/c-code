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
			printf("���ݳɹ���\n");
		}
		else
		{
			printf("����ʧ�ܡ�\n");
		}
	}
}
void addcontact(struct contact* ps)
{
	CheckCapacity(ps);
	printf("����������:");
	scanf("%s", ps->arr[ps->size].name); //����洢�����ݣ���arr���飬���ڵ�ps->size���ռ���
	printf("����������:");
	scanf("%d", &(ps->arr[ps->size].age));
	printf("�������Ա�:");
	scanf("%s", ps->arr[ps->size].sex);
	printf("������绰:");
	scanf("%s", ps->arr[ps->size].tele);
	printf("�������ַ:");
	scanf("%s", ps->arr[ps->size].adder);
	ps->size++;
	printf("��ӳɹ���\n");
}


void showcontact(const struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ�ա�\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");//����
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


//staticֻ����Դ�ļ�������ܿ���
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
void delcontact(struct contact* ps)    //ɾ��
{
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:");
	scanf_s("%s", name);
	//1.����Ҫɾ��������ʲôλ��
	int pos = findbyname(ps, name);   //�ҵ��˷����������ڵ��±꣬�Ҳ�������-1
	if (pos == -1)
	{
		printf("ɾ�����˲����ڡ�\n");
	}
	//2.ɾ��
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1 ; j++)
		{
			ps->arr[j] = ps->arr[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ���\n");
	}
}

void searchcontact(const struct contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�����˵�����:");
	scanf("%s", name);
	int pos = findbyname(ps, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲����ڡ�\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");//����
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->arr[pos].name,
				ps->arr[pos].age,
				ps->arr[pos].sex,
				ps->arr[pos].tele,
				ps->arr[pos].adder);
	}
}


void modifycontact(struct contact* ps)     //�޸ģ�������¼��ķ���
{
	char name[MAX_NAME];
	printf("������Ҫ�޸��˵����֡�\n");
	scanf("%s", name);
	int pos=findbyname(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸��˵���Ϣ�����ڡ�\n");
	}
	else
	{
		scanf("%s", ps->arr[pos].name); //����洢�����ݣ���arr���飬���ڵ�ps->size���ռ���
		printf("����������:");
		scanf("%d", &(ps->arr[pos].age));
		printf("�������Ա�:");
		scanf("%s", ps->arr[pos].sex);
		printf("������绰:");
		scanf("%s", ps->arr[pos].tele);
		printf("�������ַ:");
		scanf("%s", ps->arr[pos].adder);
		printf("�޸ĳɹ���\n");
	}
}

void sortcontact(struct contact* ps)   //,struct people arr[MAX]
{
	int i = 0;
	int j = 0;
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ�ա�\n");
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
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");//����
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