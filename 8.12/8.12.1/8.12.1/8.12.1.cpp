#include<iostream>
using namespace std;

template<class nameT,class ageT=int>                           //可以有默认参数类型
class Person                                                   //类模板 
{
public:
	Person(nameT name, ageT age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	void print()
	{
		cout << this->m_name << "\t" << this->m_age << endl;
	}

	nameT m_name;
	ageT m_age;
};

template<class nameT, class ageT >                                   //类模板函数的类外实现  写模板参数列表
Person< nameT,ageT>::Person(nameT name, ageT age)
{
	this->m_age = age;
	this->m_name = name;
}

void test01()
{
	Person<string, int>p1("lili", 18);                     //没有自动类型推导，指定类型
	p1.print();
	Person<string>p2("zz", 20);                           //可以有默认参数类型
}

void print1(Person<string, int>&p)                            //类模板做函数参数 1.指定传入类型
{
	cout << p.m_name << "\t" << p.m_age << endl;
}

template<class nameT, class ageT = int>
void print2(Person<nameT, ageT>& p)                            //类模板做函数参数 2.参数模板化
{
	cout << p.m_name << "\t" << p.m_age << endl;
	cout << typeid(nameT).name() << endl;                      //查看数据类型
}

template<class T>
void print2( T & p)                                         //类模板做函数参数 2.类模板化
{
	
	cout << typeid(T).name() << endl;                      //查看数据类型
}


template<class T>
class base 
{
	T m;
};

class son :public base<int>                           //子类继承父类，指定父类数据类型
{

};
template<class T1,class T2>
class son2 :public base<T2>                          //子类也是类模板
{
	T1 obj;
};


template<class nameT, class ageT>                        //函数写前，前面再先声明类模板
class Per;
template<class nameT, class ageT>
void print2(Per<nameT, ageT>& p)                           //全局函数类外实现
{
	cout << p.m_name << "\t" << p.m_age << endl;
}


template<class nameT, class ageT>                          
class Per                                                  
{
	friend void print(Per<nameT, ageT>&p)                            //全局函数类内实现
	{
		cout << p.m_name << "\t" << p.m_age << endl;
	}

	friend void print2<>(Per<nameT, ageT>& p);                            //全局函数类外实现
	
public:
	Per(nameT name, ageT age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	
private:
	nameT m_name;
	ageT m_age;
};



int main()
{
	test01();

	son2<int, char>s2;

	system("pause");
	return 0;
}