#include"8.12.1.cpp"                                     //���ļ���д 1.��׺�ĳ�.cpp

template<class nameT, class ageT >                                   //��ģ�庯��������ʵ��  дģ������б�
Person< nameT, ageT>::Person(nameT name, ageT age)
{
	this->m_age = age;
	this->m_name = name;
}