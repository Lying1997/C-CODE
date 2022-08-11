#include<iostream>
using namespace std;

class Integer
{
	friend ostream& operator<<(ostream& cout, Integer inter);
public:
	Integer()
	{
		m_Num = 0;
	}

	Integer& operator++()                               //ǰ��++
	{
		m_Num++;
		return *this;
	}

	Integer operator++(int)                               //���õ���ֻ�ܷ���ֵ����Ϊ����������ַ����
	{
		Integer tmp = *this;
		m_Num++;
		return tmp;
	}

private:
	int m_Num;
};

ostream& operator<<(ostream& cout, Integer inter)                 //�������������
{
	cout << inter.m_Num;
	return cout;
}

void test01()
{
	Integer inter;
	cout << ++(++inter) << endl;
}

void test02()
{
	Integer inter;
	cout << inter++ << endl;
}

class Person
{
public:
	Person(int age)
	{
		m_age = new int(age);
	}

	~Person()
	{
		if (m_age!=NULL)
		{
			delete m_age;
			m_age = NULL;
		}
	}

	Person& operator=(Person &p)
	{
		if (m_age!=NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		m_age = new int(*p.m_age);                  //���

		return *this;
	}

	bool operator==(Person& p)
	{
		if (this->m_age==p.m_age)
		{
			return true;
		}
		return false;
	}

	int* m_age;
};

void test03()
{
	Person p1(18);
	Person p2(20);
	p2 = p1;
	cout << *p2.m_age << endl;
}

class B
{
public:
	int a;
	B()
	{
		a = 100;
	}
};

class A:public B,private Integer                  //�̳�  class ���ࣺ�̳з�ʽ ����  ��̳�
{
public:
	int a;
	A()
	{
		a = 200;
	}
};


void test04()
{
	A aa;
	cout << aa.a << endl;
	cout << aa.B::a << endl;                    //ͬ�����ʸ����������ֱ�ӵ��õ�����
}


class animal                                   //���μ̳�
{
public:                                       //�����
	int m_age=10;
};

class sheep :virtual public animal               //virtual��̳�  ��������ظ����⣬�̳�ָ��
{

};

class tuo :virtual public animal
{

};

class sheeptuo :public sheep, public tuo
{

};

void test05()
{
	sheeptuo s1;
	cout << s1.m_age << endl;
}

int main()
{
	test05();

	system("pause");
	return 0;
}