
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

//void ADDContact(contact* pc)                                  //增加
//{
//	if (pc->sz==MAX)
//	{
//		printf("已满\n");
//		return;
//	}
//	printf("请输入名字:\n");
//	scanf("%s", pc->data[pc->sz].name);             //这些是数组，数组名就是地址，不需要取地址
//	printf("请输入年龄:\n");
//	scanf("%d", &(pc->data[pc->sz].age));           //int age是变量，所以需要取地址！！
//	printf("请输入性别:\n");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("请输入电话:\n");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("请输入地址:\n");
//	scanf("%s", pc->data[pc->sz].addr);
//
//	pc->sz++;
//	printf("保存成功\n");
//}

void ADDContact(contact* pc)                                  //增加
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
            printf("增容成功\n");
		}
	}

	printf("请输入名字:\n");
	scanf("%s", pc->data[pc->sz].name);             //这些是数组，数组名就是地址，不需要取地址
	printf("请输入年龄:\n");
	scanf("%d", &(pc->data[pc->sz].age));           //int age是变量，所以需要取地址！！
	printf("请输入性别:\n");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:\n");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:\n");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("保存成功\n");
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
	printf("%20s\t%5s\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "地址");

	for ( i = 0; i < pc->sz; i++)
	{
		printf("%20s\t%5d\t%5s\t%12s\t%20s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex,
			                                   pc->data[i].tele, pc->data[i].addr);
	}
}

static int find(contact* pc, char* name[])     //static修饰函数只能在源文件中可见
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
		printf("已空\n");
		return;
	}

	char name[MAX_NAME] = { 0 };
	printf("请输入名字：\n");
	scanf("%s", name);

	int pos=find(pc, name);
	if (pos==-1)
	{
		printf("不存在\n");
		return;
	}

	int i = 0;
	for ( i = pos; i < pc->sz-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}

	pc->sz--;
	printf("删除成功\n");
}

void SERCHContact(const contact* pc)
{
	if (pc->sz == 0)
	{
		printf("已空\n");
		return;
	}

	char name[MAX_NAME] = { 0 };
	printf("请输入名字：\n");
	scanf("%s", name);

	int pos = find(pc, name);

	if (pos == -1)
	{
		printf("不存在\n");
		return;
	}

	printf("%20s\t%5s\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "地址");
	printf("%20s\t%5d\t%5s\t%12s\t%20s\n", pc->data[pos].name, pc->data[pos].age, pc->data[pos].sex,
		                                   pc->data[pos].tele, pc->data[pos].addr);

}

void MODIFYContact(contact* pc)
{
	if (pc->sz == 0)
	{
		printf("已空\n");
		return;
	}

	char name[MAX_NAME] = { 0 };
	printf("请输入名字：\n");
	scanf("%s", name);

	int pos = find(pc, name);

	if (pos == -1)
	{
		printf("不存在\n");
		return;
	}

	else
	{
		printf("请输入名字:\n");
		scanf("%s", pc->data[pos].name);             
		printf("请输入年龄:\n");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入性别:\n");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话:\n");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址:\n");
		scanf("%s", pc->data[pos].addr);
	}
	printf("修改成功\n");
}

void SORTContact(contact* pc)
{

}