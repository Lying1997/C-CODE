#include<iostream>
using namespace std;


class Person
{
public:
	/*Person(int a,int b,int c) :A(a),B(b),C(c)
	{

	}
	int A;
	int B;
	int C;*/

	static int D;                       //静态成员，类内声明，类外初始化，所有对象共享同一份数据
	
	static void func()
	{
		D = 100;                       //静态成员函数只能访问静态成员变量
	}
};

int Person::D = 100;    


class A
{                                                   //成员变量和成员函数分开存储
	int P;
	static int Q;
	void func() {}
	static void fun(){}
};

class Per
{
public:
	int age;
	Per(int age)
	{
		this->age = age;                       //this指针指向成员函数所属的对象
	}

	Per& Personage(Per p)
	{
		this->age += p.age;
		return *this;                     //返回对象本身
	}
};


class P
{
	void fun() const                  //常函数
	{
		//a = 100;             const修饰值不可更改，加mutable后可改
		b = 100;
	}

	int a;
	mutable int b;
};

class B
{
	friend void goodgay(B* b);                 //友元 可以访问私有权限
	friend class G;
	friend void G::visit();

public:
	string sit;
private:
	string bed;

	B();
	
};

B::B()                                      //类外创建
{
	sit = "aaa";
	bed = "bbb";
}

void goodgay(B* b)
{
	cout << b->sit << endl;
	cout << b->bed << endl;
}

class G
{
public:
	void visit()
	{

	}
};

class O
{
public:
	int A;
	int B;

	O operator + (O &p)
	{
		O tmp;
		tmp.A = this->A + p.A;
		tmp.B = this->B + p.B;
		return tmp;
	}

};


ostream & operator<<(ostream &cout, O p)                   //ostream 输出流类
{
	cout << p.A << p.B << endl;                           //重载左移运算符
	return cout;
}

int main()                   
{
	Person p1;
	p1.func();
	Person::func();

	cout << sizeof(A) << endl;

	Per p3(10);
	Per p2(10);
	p2.Personage(p3).Personage(p3).Personage(p3);                       //链式访问

	const P p5;                       //常对象 智能调用常函数

	O o1;
	o1.A = 10;
	o1.B = 10;
	O o2;
	o2.A = 10;
	o2.B = 10;
	o1.operator+(o2);
	O o3 = o1 + o2;                                    //成员函数重载本质调用

	cout << o1 << endl;


	system("pause");
	return 0;
}