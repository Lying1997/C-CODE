
#include "contact.h"

//void InitContact(contact* pc)
//{
//	pc->sz = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}

void InitContact(contact* pc)
{
	PeoInfo*ptr=(PeoInfo*)malloc(DEFAULT_SZ *sizeof(PeoInfo));
	if (ptr==NULL)
	{
		perror("InitContact");
		return;
	}
	pc->data = ptr;
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
}

//void ADDContact(contact* pc)                                  //����
//{
//	if (pc->sz==MAX)
//	{
//		printf("����\n");
//		return;
//	}
//	printf("����������:\n");
//	scanf("%s", pc->data[pc->sz].name);             //��Щ�����飬���������ǵ�ַ������Ҫȡ��ַ
//	printf("����������:\n");
//	scanf("%d", &(pc->data[pc->sz].age));           //int age�Ǳ�����������Ҫȡ��ַ����
//	printf("�������Ա�:\n");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("������绰:\n");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("�������ַ:\n");
//	scanf("%s", pc->data[pc->sz].addr);
//
//	pc->sz++;
//	printf("����ɹ�\n");
//}

void ADDContact(contact* pc)                                  //����
{
	if (pc->sz == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data,(DEFAULT_SZ + INC_SZ) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			perror("ADDContact");
			return;
		}
		else
		{
            pc->data = ptr;
			pc->capacity += INC_SZ;
            printf("���ݳɹ�\n");
		}
	}

	printf("����������:\n");
	scanf("%s", pc->data[pc->sz].name);             //��Щ�����飬���������ǵ�ַ������Ҫȡ��ַ
	printf("����������:\n");
	scanf("%d", &(pc->data[pc->sz].age));           //int age�Ǳ�����������Ҫȡ��ַ����
	printf("�������Ա�:\n");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:\n");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:\n");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("����ɹ�\n");
}

void EXITContact(contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}


void PRINTContact(const contact* pc)
{
	int i = 0;
	printf("%20s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");

	for ( i = 0; i < pc->sz; i++)
	{
		printf("%20s\t%5d\t%5s\t%12s\t%20s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex,
			                                   pc->data[i].tele, pc->data[i].addr);
	}
}

static int find(contact* pc, char* name[])     //static���κ���ֻ����Դ�ļ��пɼ�
{
	int i = 0;
	for ( i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name,name)==0)
		{
			return i;
		}
	}
	return -1;
}

void DELContact(contact* pc)
{
	if (pc->sz==0)
	{
		printf("�ѿ�\n");
		return;
	}

	char name[MAX_NAME] = { 0 };
	printf("���������֣�\n");
	scanf("%s", name);

	int pos=find(pc, name);
	if (pos==-1)
	{
		printf("������\n");
		return;
	}

	int i = 0;
	for ( i = pos; i < pc->sz-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}

	pc->sz--;
	printf("ɾ���ɹ�\n");
}

void SERCHContact(const contact* pc)
{
	if (pc->sz == 0)
	{
		printf("�ѿ�\n");
		return;
	}

	char name[MAX_NAME] = { 0 };
	printf("���������֣�\n");
	scanf("%s", name);

	int pos = find(pc, name);

	if (pos == -1)
	{
		printf("������\n");
		return;
	}

	printf("%20s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%20s\t%5d\t%5s\t%12s\t%20s\n", pc->data[pos].name, pc->data[pos].age, pc->data[pos].sex,
		                                   pc->data[pos].tele, pc->data[pos].addr);

}

void MODIFYContact(contact* pc)
{
	if (pc->sz == 0)
	{
		printf("�ѿ�\n");
		return;
	}

	char name[MAX_NAME] = { 0 };
	printf("���������֣�\n");
	scanf("%s", name);

	int pos = find(pc, name);

	if (pos == -1)
	{
		printf("������\n");
		return;
	}

	else
	{
		printf("����������:\n");
		scanf("%s", pc->data[pos].name);             
		printf("����������:\n");
		scanf("%d", &(pc->data[pos].age));
		printf("�������Ա�:\n");
		scanf("%s", pc->data[pos].sex);
		printf("������绰:\n");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ:\n");
		scanf("%s", pc->data[pos].addr);
	}
	printf("�޸ĳɹ�\n");
}

void SORTContact(contact* pc)
{

}