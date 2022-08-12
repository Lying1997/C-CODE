#include"8.12.1.cpp"                                     //分文件编写 1.后缀改成.cpp

template<class nameT, class ageT >                                   //类模板函数的类外实现  写模板参数列表
Person< nameT, ageT>::Person(nameT name, ageT age)
{
	this->m_age = age;
	this->m_name = name;
}