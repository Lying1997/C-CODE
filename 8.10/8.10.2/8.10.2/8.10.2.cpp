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

	static int D;                       //��̬��Ա�����������������ʼ�������ж�����ͬһ������
	
	static void func()
	{
		D = 100;                       //��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	}
};

int Person::D = 100;    


class A
{                                                   //��Ա�����ͳ�Ա�����ֿ��洢
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
		this->age = age;                       //thisָ��ָ���Ա���������Ķ���
	}

	Per& Personage(Per p)
	{
		this->age += p.age;
		return *this;                     //���ض�����
	}
};


class P
{
	void fun() const                  //������
	{
		//a = 100;             const����ֵ���ɸ��ģ���mutable��ɸ�
		b = 100;
	}

	int a;
	mutable int b;
};

class B
{
	friend void goodgay(B* b);                 //��Ԫ ���Է���˽��Ȩ��
	friend class G;
	friend void G::visit();

public:
	string sit;
private:
	string bed;

	B();
	
};

B::B()                                      //���ⴴ��
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


ostream & operator<<(ostream &cout, O p)                   //ostream �������
{
	cout << p.A << p.B << endl;                           //�������������
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
	p2.Personage(p3).Personage(p3).Personage(p3);                       //��ʽ����

	const P p5;                       //������ ���ܵ��ó�����

	O o1;
	o1.A = 10;
	o1.B = 10;
	O o2;
	o2.A = 10;
	o2.B = 10;
	o1.operator+(o2);
	O o3 = o1 + o2;                                    //��Ա�������ر��ʵ���

	cout << o1 << endl;


	system("pause");
	return 0;
}