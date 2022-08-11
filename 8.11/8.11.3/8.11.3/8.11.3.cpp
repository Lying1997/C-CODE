#include<iostream>
#include<fstream>
#include<istream>
using namespace std;


class Person
{
public:
	char m_name[64];
	int m_age;
};

void test01()                                                      //������д
{
	ofstream ofs1;
	ofs1.open("person.txt", ios::binary | ios::out);
	Person p = { "lili",18 };
	ofs1.write((const char*)&p, sizeof(Person));
	ofs1.close();
}

void test02()                                                       //�����ƶ�
{
	ifstream ifs1;
	ifs1.open("person.txt", ios::in);
	if (!ifs1.is_open())
	{
		cout << "shibai" << endl;
		return;
	}
	Person p;
	ifs1.read((char*)&p, sizeof(Person));
	cout << p.m_age << p.m_name << endl;
	ifs1.close();


}

int main()
{
	ofstream ofs;                                              //д�ļ�
	ofs.open("test.txt", ios::out);
	ofs << "lili" << endl;
	ofs << "20" << endl;
	ofs.close();

	ifstream ifs;                                                //���ļ�
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "shibai" << endl;
	}

	char buf[1024] = { 0 };
	while (ifs>>buf)
	{
		cout << buf << endl;
	}

	while (ifs.getline(buf,sizeof(buf)))
	{
		cout << buf << endl;
	}

	/*string buf1;
	while (getline(ifs,buf1))
	{
		cout << buf1 << endl;
	}*/

	ifs.close();

	test02();

	system("pause");
	return 0;
}