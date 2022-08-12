#pragma once
#include<iostream>
using namespace std;

template<class nameT, class ageT = int>                           //可以有默认参数类型
class Person                                                   //类模板 
{
public:
	Person(nameT name, ageT age);
	
	void print()
	{
		cout << this->m_name << "\t" << this->m_age << endl;
	}

	nameT m_name;
	ageT m_age;
};

template<class nameT, class ageT >                                   //类模板函数的类外实现  写模板参数列表
Person< nameT, ageT>::Person(nameT name, ageT age)
{
	this->m_age = age;
	this->m_name = name;
}

//分文件编写 类模板   将h和cpp中内容写在一起，改成.hpp后缀