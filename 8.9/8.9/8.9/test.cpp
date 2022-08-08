#include"contact.h"

using namespace std;



void ADDContact(contact* pc)
{
	if (pc->size == MAX)
	{
		cout<<"����"<<endl;
		return;
	}
	else
	{
		string name1;
		cout << "����������:" << endl;
		cin >> name1;
		pc->per[pc->size].name = name1;
		
		string sex1;
		cout << "�������Ա�:" << endl;
		cin >> sex1;
		pc->per[pc->size].sex = sex1;

		int age1=0;
		cout << "����������:" << endl;
		cin >> age1;
		pc->per[pc->size].age = age1;

		string tele1;
		cout << "������绰:" << endl;
		cin >> name1;
		pc->per[pc->size].tele=tele1;

		string addr1;
		cout << "�������ַ:" << endl;
		cin >> addr1;
		pc->per[pc->size].addr=addr1;

		pc->size++;

		cout << "��ӳɹ�" << endl;


		system("pause");          //�밴���������
		system("cls");            //����
	}
}


void PRINTContact(const contact* pc)
{
	if (pc->size==0)
	{
		cout << "��" << endl;
	}
	else
	{
		for (int i = 0; i < pc->size; i++)
		{
			cout << "������" << pc->per[i].name << "\t";
			cout << "�Ա�" << pc->per[i].sex << "\t";
			cout<<"���䣺"<<pc->per[i].age << "\t";
			cout<<"�绰��"<<pc->per[i].tele << "\t";
			cout<<"��ַ��"<<pc->per[i].addr << endl;
		}
	}

	system("pause");
	system("cls");

}

int isExit(contact* pc, string name)
{
	for (int i = 0; i < pc->size; i++)
	{
		if (pc->per[i].name==name)
		{
			return i;
		}
	}
	return -1;
}

void SERCHContact(contact* pc)
{
	cout << "������������" << endl;
	string name;
	cin >> name;
	int ret = isExit(pc, name);
	
	if (ret!=-1)
	{
		cout << "������" << pc->per[ret].name << "\t";
		cout << "�Ա�" << pc->per[ret].sex << "\t";
		cout << "���䣺" << pc->per[ret].age << "\t";
		cout << "�绰��" << pc->per[ret].tele << "\t";
		cout << "��ַ��" << pc->per[ret].addr << endl;
	}

	system("pause");
	system("cls");

}

void DELContact(contact* pc)
{
	cout << "������������" << endl;
	string name;
	cin >> name;
	int ret = isExit(pc, name);

	if (ret!=-1)
	{
		for (int i = ret; i < pc->size; i++)
		{
			pc->per[i] = pc->per[i + 1];
		}
		pc->size--;
		cout << "ɾ���ɹ�" << endl;

		system("pause");
		system("cls");

	}

}

void MODIFYContact(contact* pc)
{
	cout << "������������" << endl;
	string name;
	cin >> name;
	int ret = isExit(pc, name);


	if (ret != -1)
	{
		string name1;
		cout << "����������:" << endl;
		cin >> name1;
		pc->per[ret].name = name1;

		string sex1;
		cout << "�������Ա�:" << endl;
		cin >> sex1;
		pc->per[ret].sex = sex1;

		int age1=0;
		cout << "����������:" << endl;
		cin >> age1;
		pc->per[ret].age = age1;

		string tele1;
		cout << "������绰:" << endl;
		cin >> name1;
		pc->per[ret].tele = tele1;

		string addr1;
		cout << "�������ַ:" << endl;
		cin >> addr1;
		pc->per[ret].addr = addr1;

		cout << "�޸ĳɹ�" << endl;
	}
	else 
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");

}


void CLEANContact(contact* pc)
{
	pc->size = 0;
	cout << "ͨѶ¼�ѿ�" << endl;
	system("pause");
	system("cls");
}