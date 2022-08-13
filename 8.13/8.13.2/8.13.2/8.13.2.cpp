#include<iostream>
using namespace std;
#include<list>
#include<algorithm>
#include<set>
#include<map>

//list ����
class Person
{
public:
	string name;
	int age;
	int high;
};
bool compare(Person& p1, Person& p2)
{
	if (p1.age==p1.age)
	{
		return p1.high > p2.high;                   // ��߽���
	}
	else
	{
		return p1.age < p2.age;              //��������
	}
}
void test01()
{
	list<int>l1;
	list<int>l2(l1);

	l2 = l1;
	l1.assign(10, 5);
	l1.swap(l2);
	
	l1.empty();
	l1.size();
	l1.resize(15, 5);

	l1.pop_back();
	l1.insert(l1.begin(), 10, 5);
	l1.remove(5);          //ɾ������5

	l1.front();                     //list�����������ռ䣬��ַ���ӣ����Բ����±����
	l1.back();
	list<int>::iterator it = l1.begin();
	it++;            //֧��++ ����it=it+1����֧���������

	l1.reverse();        //��ת 
	l1.sort();           //���� ��֧������������Բ�֧�ֱ�׼�㷨

	list<Person>l;
	Person p1 = { "lili", 18, 165 };
	Person p2 = { "zz", 19, 170 };
	Person p3 = { "yy", 18, 180 };

	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);

	l.sort(compare);               //�Զ��������Լ�д������
}

class Compare1
{
	bool compare(Person& p1, Person& p2)
	{
		if (p1.age == p1.age)
		{
			return p1.high > p2.high;                   // ��߽���
		}
		else
		{
			return p1.age < p2.age;              //��������
		}
	}
};
class Compare                                      //��������
{
public:
	bool operator()(int v1, int v2)               //����bool����
	{
		return v1 > v2;
	}
};
//set/multiset���� ����ʽ�������Զ�����  ������ʵ��  set�������ظ�Ԫ�أ�multiset���� ͷ�ļ���ͬ
void test02()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(50);
	s1.insert(30);
	s1.insert(40);
	set<int>s2;
	
	set<int, Compare>s3;                    //���÷º���ָ��������� ����������ǰ
	                                        //�Զ���������Ҫ�Լ�ָ���������
	set<Person, Compare1>s4;

	s2 = s1;
	s1.size();
	s1.empty();
	s1.swap(s2);

	s1.erase(s1.begin());
	s1.erase(30);

	set<int>::iterator pos=s1.find(20);         //���� ���ص��������Ҳ�������end
	if (pos!=s1.end())
	{
		cout << "zhaodao";
	}
	s1.count(10);          //ͳ��10�ĸ���

	pair<set<int>::iterator, bool>ret = s1.insert(20);
	if (ret.second)
	{
		cout << "����ɹ�";                               //set���뷵���Ƿ�ɹ�
	}



	//pair���� �ɶԳ��ֵ����ݣ����ö��鷵����������
	pair<string, int>p("tom", 18);
	cout << p.first << " " << p.second << endl;
	pair<string, int>p2 = make_pair("jerry", 10);
}


//map/multimap����  ����Ԫ�ض���pair pair�е�һ��Ԫ��Ϊkeyֵ���������ã��ڶ���Ϊʵֵ  �Զ�����
//map���������ظ�keyֵ
void testo3()
{
	map<int, int>m1;
	m1.insert(pair<int, int>(1, 10));              //ע���������
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));

	for (map<int,int>::iterator it=m1.begin();it!=m1.end();it++)
	{
		cout << (*it).first << it->second << endl;
	}
	map<int, int>m2;

	m1.size();
	m1.empty();
	m1.swap(m2);

	m1.insert(pair<int, int>(4, 40));
	m1.insert(make_pair(5, 50));
	m1.erase(m1.begin());
	m1.erase(3);            //����keyɾ��

	map<int,int>::iterator pos=m1.find(2);                 //���ص�����
	if (pos != m1.end())
	{
		cout << "zhaodao" << endl;
		cout << (*pos).first << pos->second << endl;
	}
	int num=m1.count(3);           //ͳ��key����keyͳ��

	map<int, int, Compare>m3;                   //���÷º���ָ������˳��
	m3.insert(pair<int, int>(5, 50));
}

int main()
{


	system("pause");
	return 0;
}