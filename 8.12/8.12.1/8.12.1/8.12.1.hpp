#pragma once
#include<iostream>
using namespace std;

template<class nameT, class ageT = int>                           //������Ĭ�ϲ�������
class Person                                                   //��ģ�� 
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

template<class nameT, class ageT >                                   //��ģ�庯��������ʵ��  дģ������б�
Person< nameT, ageT>::Person(nameT name, ageT age)
{
	this->m_age = age;
	this->m_name = name;
}

//���ļ���д ��ģ��   ��h��cpp������д��һ�𣬸ĳ�.hpp��׺