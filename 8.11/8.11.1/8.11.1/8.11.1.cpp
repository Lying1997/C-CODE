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

	Integer& operator++()                               //前置++
	{
		m_Num++;
		return *this;
	}

	Integer operator++(int)                               //后置递增只能返回值，因为函数结束地址销毁
	{
		Integer tmp = *this;
		m_Num++;
		return tmp;
	}

private:
	int m_Num;
};

ostream& operator<<(ostream& cout, Integer inter)                 //左移运算符重载
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
		m_age = new int(*p.m_age);                  //深拷贝

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

class A:public B,private Integer                  //继承  class 子类：继承方式 父类  多继承
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
	cout << aa.B::a << endl;                    //同名访问父类加作用域，直接调用调子类
}


class animal                                   //菱形继承
{
public:                                       //虚基类
	int m_age=10;
};

class sheep :virtual public animal               //virtual虚继承  解决数据重复问题，继承指针
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