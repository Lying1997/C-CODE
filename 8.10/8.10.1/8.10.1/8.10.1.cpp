#include<iostream>
using namespace std;

const double PI = 3.14;

class Circle                        //类和对象
{
public:                                      //访问权限             

	int r;                                     //属性
	                                                                   //属性和行为统称为成员  成员属性 成员函数/方法
	double zhouchang()                         //行为 函数
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

class Person                                 //默认权限私有
{
public:                         //公共权限
	string name;
protected:                      //保护权限
	string car;
private:                        //私有权限
	int password;

	void func()
	{
		name = "li";
		car = "baoma";
		password = 123;
	}


public:

	Person()                   //构造函数
	{
	}

	~Person()                 //析构函数
	{

	}
	Person(int a)                 //有参构造
	{

	}
	Person(const Person &p)      //拷贝构造      
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

	P(int age,int height)                       //拷贝函数默认浅拷贝，堆区释放两次，用深拷贝解决
	{
		page = age;
		pheight = new int(height);                 //堆区开辟
	}

	P(const P& p)
	{
		page = page;                                   //机器默认浅拷贝方式
		pheight = new int(*pheight);                   //如果有堆区开辟数据，自己设置堆区深拷贝
	}

	~P()
	{
		if (pheight!=NULL)                           //析构函数中堆区释放
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
	Circle c1;                         //创建具体对象   实例化
	c1.r = 10;
	cout << c1.zhouchang() << endl;

	Student s1;
	s1.id = 1;
	s1.setname("lili");
	s1.print();

	Cube c;
	c.set(10, 10, 10);
	cout << c.S() << "\t" << c.V() << endl;


	Person p1;                       //默认构造函数调用不要加小括号，创建对象自动调用
	Person p2(100);
	Person p3(p2);


	P pp(18, 180);
	P ppp(pp);

	system("pause");
	return 0;
}