#include<iostream>
using namespace std;


class animal
{
public:
	virtual void speak()                       //虚函数      实现地址晚绑定
	{
		cout << "shuohua" << endl;
	}
};

class cat :public animal
{
public:
	void speak()
	{
		cout << "xiaomao shuohua" << endl;
	}
};

void dospeak(animal& p)             //地址早绑定，编译阶段确定函数地址
{
	p.speak();
}

void test01()                    //动态多态 1.存在继承 2.子类重写父类虚函数（函数名返回值参数全相同）
{
	cat c;
	dospeak(c);                 //父类指针或引用指向子类对象
}

//class caculator
//{
//public:
//	int m_num1;
//	int m_num2;
//
//	int getresult(string oper)
//	{
//		if (oper=="+")
//		{
//			return m_num1 + m_num2;
//		}
//	}
//};

class abstract                                           //多态实现计算器
{
public:
	int m_num1;
	int m_num2;

	virtual int getresult()
	{
		return 0;
	}
};
class ADD :public abstract                         
{
public:
	int getresult()
	{
		return m_num1 + m_num2;
	}
};

void test02()
{
	abstract* abc = new ADD;
	abc->m_num1 = 10;
	abc->m_num2 = 10;
	cout << abc->getresult() << endl;
}

class animal1
{
public:
	virtual void speak() = 0;                       //纯虚函数   抽象类     
	                                                //1.无法实例化对象 2.抽象类的子类必须重写纯虚函数，否则也属于抽象类


};

class dog :public animal1
{
public:
	void speak()
	{
		cout << "xiaogou shuohua" << endl;
	}
};

void test03()
{
	animal1* p = new dog;
	p->speak();
	delete p;
	p = NULL;

}

int main()
{
	test03();
	cout << sizeof(animal) << endl;       //大小8，说明内部生成指针指向虚函数表，表内记录虚函数地址
	                                      //子类重写虚函数，子类函数表内替换成子类函数地址

	system("pause");
	return 0;
}