#include<iostream>
using namespace std;

template<class nameT,class ageT=int>                           //������Ĭ�ϲ�������
class Person                                                   //��ģ�� 
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

template<class nameT, class ageT >                                   //��ģ�庯��������ʵ��  дģ������б�
Person< nameT,ageT>::Person(nameT name, ageT age)
{
	this->m_age = age;
	this->m_name = name;
}

void test01()
{
	Person<string, int>p1("lili", 18);                     //û���Զ������Ƶ���ָ������
	p1.print();
	Person<string>p2("zz", 20);                           //������Ĭ�ϲ�������
}

void print1(Person<string, int>&p)                            //��ģ������������ 1.ָ����������
{
	cout << p.m_name << "\t" << p.m_age << endl;
}

template<class nameT, class ageT = int>
void print2(Person<nameT, ageT>& p)                            //��ģ������������ 2.����ģ�廯
{
	cout << p.m_name << "\t" << p.m_age << endl;
	cout << typeid(nameT).name() << endl;                      //�鿴��������
}

template<class T>
void print2( T & p)                                         //��ģ������������ 2.��ģ�廯
{
	
	cout << typeid(T).name() << endl;                      //�鿴��������
}


template<class T>
class base 
{
	T m;
};

class son :public base<int>                           //����̳и��ָ࣬��������������
{

};
template<class T1,class T2>
class son2 :public base<T2>                          //����Ҳ����ģ��
{
	T1 obj;
};


template<class nameT, class ageT>                        //����дǰ��ǰ������������ģ��
class Per;
template<class nameT, class ageT>
void print2(Per<nameT, ageT>& p)                           //ȫ�ֺ�������ʵ��
{
	cout << p.m_name << "\t" << p.m_age << endl;
}


template<class nameT, class ageT>                          
class Per                                                  
{
	friend void print(Per<nameT, ageT>&p)                            //ȫ�ֺ�������ʵ��
	{
		cout << p.m_name << "\t" << p.m_age << endl;
	}

	friend void print2<>(Per<nameT, ageT>& p);                            //ȫ�ֺ�������ʵ��
	
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