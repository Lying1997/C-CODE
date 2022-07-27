#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <memory.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

#define DEFAULT_SZ 3
#define INC_SZ 2


typedef struct PeoInfo          //typedef 重新定义命名
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//typedef struct contact
//{
//	PeoInfo *data[MAX];              //人的信息
//	int sz;                         //有效信息个数
//}contact;

typedef struct contact
{
	PeoInfo *data;              //人的信息
	int sz;                     //有效信息个数
	int capacity;
}contact;

void InitContact(contact* pc);

void ADDContact(contact* pc);

void PRINTContact(const contact* pc);

void DELContact(contact* pc);

void SERCHContact(const contact* pc);

void MODIFYContact(contact* pc);

void SORTContact(contact* pc);

void EXITContact(contact* pc);