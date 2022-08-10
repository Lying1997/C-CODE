#pragma once
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

#define MAX 1000


struct Person
{
	string name;
	string sex;
	int age;
	string tele;
	string addr;
};

struct contact
{
	struct Person per[MAX];
	int size;
};

void ADDContact(contact* pc);

void PRINTContact(const contact* pc);

void SERCHContact( contact* pc);

void DELContact(contact* pc);

void MODIFYContact(contact* pc);

void CLEANContact(contact* pc);