#include<iostream>
using namespace std;

const double PI = 3.14;

class Circle                        //��Ͷ���
{
public:                                      //����Ȩ��             

	int r;                                     //����
	                                                                   //���Ժ���Ϊͳ��Ϊ��Ա  ��Ա���� ��Ա����/����
	double zhouchang()                         //��Ϊ ����
	{
		return 2 * PI * r;
	}

};

class Student
{
public:

	string name;
	int id;
	void setname(string name1)
	{
		name = name1;
	}

	void print()
	{
		cout << name << "\t" << id << endl;
	}

};

class Person                                 //Ĭ��Ȩ��˽��
{
public:                         //����Ȩ��
	string name;
protected:                      //����Ȩ��
	string car;
private:                        //˽��Ȩ��
	int password;

	void func()
	{
		name = "li";
		car = "baoma";
		password = 123;
	}


public:

	Person()                   //���캯��
	{
	}

	~Person()                 //��������
	{

	}
	Person(int a)                 //�вι���
	{

	}
	Person(const Person &p)      //��������      
	{

	}
};

class per
{
public:
	void setname(string name1)
	{
		name = name1;
	}
	void getname()
	{
		cout << name << endl;
	}
private:
	string name;
	int age;
};

class Cube
{
public:
	void set(int l1, int w1, int h1)
	{
		l = l1;
		w = w1;
		h = h1;
	}

	int S()
	{
		return 2 * w * l + 2 * w * h + 2 * h * l;
	}

	int V()
	{
		return w * h * l;
	}

private:
	int l;
	int w;
	int h;
};

class P
{
public:

	P(int age,int height)                       //��������Ĭ��ǳ�����������ͷ����Σ���������
	{
		page = age;
		pheight = new int(height);                 //��������
	}

	P(const P& p)
	{
		page = page;                                   //����Ĭ��ǳ������ʽ
		pheight = new int(*pheight);                   //����ж����������ݣ��Լ����ö������
	}

	~P()
	{
		if (pheight!=NULL)                           //���������ж����ͷ�
		{
			delete pheight;
			pheight = NULL;
		}
	}

	int page;
	int* pheight;

};


int main()
{
	Circle c1;                         //�����������   ʵ����
	c1.r = 10;
	cout << c1.zhouchang() << endl;

	Student s1;
	s1.id = 1;
	s1.setname("lili");
	s1.print();

	Cube c;
	c.set(10, 10, 10);
	cout << c.S() << "\t" << c.V() << endl;


	Person p1;                       //Ĭ�Ϲ��캯�����ò�Ҫ��С���ţ����������Զ�����
	Person p2(100);
	Person p3(p2);


	P pp(18, 180);
	P ppp(pp);

	system("pause");
	return 0;
}