#include<iostream>
using namespace std;


class animal
{
public:
	virtual void speak()                       //�麯��      ʵ�ֵ�ַ���
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

void dospeak(animal& p)             //��ַ��󶨣�����׶�ȷ��������ַ
{
	p.speak();
}

void test01()                    //��̬��̬ 1.���ڼ̳� 2.������д�����麯��������������ֵ����ȫ��ͬ��
{
	cat c;
	dospeak(c);                 //����ָ�������ָ���������
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

class abstract                                           //��̬ʵ�ּ�����
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
	virtual void speak() = 0;                       //���麯��   ������     
	                                                //1.�޷�ʵ�������� 2.����������������д���麯��������Ҳ���ڳ�����


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
	cout << sizeof(animal) << endl;       //��С8��˵���ڲ�����ָ��ָ���麯�������ڼ�¼�麯����ַ
	                                      //������д�麯�������ຯ�������滻�����ຯ����ַ

	system("pause");
	return 0;
}