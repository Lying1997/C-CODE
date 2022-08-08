#include"contact.h"

using namespace std;



void ADDContact(contact* pc)
{
	if (pc->size == MAX)
	{
		cout<<"已满"<<endl;
		return;
	}
	else
	{
		string name1;
		cout << "请输入名字:" << endl;
		cin >> name1;
		pc->per[pc->size].name = name1;
		
		string sex1;
		cout << "请输入性别:" << endl;
		cin >> sex1;
		pc->per[pc->size].sex = sex1;

		int age1=0;
		cout << "请输入年龄:" << endl;
		cin >> age1;
		pc->per[pc->size].age = age1;

		string tele1;
		cout << "请输入电话:" << endl;
		cin >> name1;
		pc->per[pc->size].tele=tele1;

		string addr1;
		cout << "请输入地址:" << endl;
		cin >> addr1;
		pc->per[pc->size].addr=addr1;

		pc->size++;

		cout << "添加成功" << endl;


		system("pause");          //请按任意键继续
		system("cls");            //清屏
	}
}


void PRINTContact(const contact* pc)
{
	if (pc->size==0)
	{
		cout << "空" << endl;
	}
	else
	{
		for (int i = 0; i < pc->size; i++)
		{
			cout << "姓名：" << pc->per[i].name << "\t";
			cout << "性别：" << pc->per[i].sex << "\t";
			cout<<"年龄："<<pc->per[i].age << "\t";
			cout<<"电话："<<pc->per[i].tele << "\t";
			cout<<"地址："<<pc->per[i].addr << endl;
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
	cout << "请输入姓名：" << endl;
	string name;
	cin >> name;
	int ret = isExit(pc, name);
	
	if (ret!=-1)
	{
		cout << "姓名：" << pc->per[ret].name << "\t";
		cout << "性别：" << pc->per[ret].sex << "\t";
		cout << "年龄：" << pc->per[ret].age << "\t";
		cout << "电话：" << pc->per[ret].tele << "\t";
		cout << "地址：" << pc->per[ret].addr << endl;
	}

	system("pause");
	system("cls");

}

void DELContact(contact* pc)
{
	cout << "请输入姓名：" << endl;
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
		cout << "删除成功" << endl;

		system("pause");
		system("cls");

	}

}

void MODIFYContact(contact* pc)
{
	cout << "请输入姓名：" << endl;
	string name;
	cin >> name;
	int ret = isExit(pc, name);


	if (ret != -1)
	{
		string name1;
		cout << "请输入名字:" << endl;
		cin >> name1;
		pc->per[ret].name = name1;

		string sex1;
		cout << "请输入性别:" << endl;
		cin >> sex1;
		pc->per[ret].sex = sex1;

		int age1=0;
		cout << "请输入年龄:" << endl;
		cin >> age1;
		pc->per[ret].age = age1;

		string tele1;
		cout << "请输入电话:" << endl;
		cin >> name1;
		pc->per[ret].tele = tele1;

		string addr1;
		cout << "请输入地址:" << endl;
		cin >> addr1;
		pc->per[ret].addr = addr1;

		cout << "修改成功" << endl;
	}
	else 
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");

}


void CLEANContact(contact* pc)
{
	pc->size = 0;
	cout << "通讯录已空" << endl;
	system("pause");
	system("cls");
}