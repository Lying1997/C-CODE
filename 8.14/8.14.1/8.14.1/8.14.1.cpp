#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>
#include<ctime>
#include<numeric>

//��������
class myadd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};
class print
{
public:
	print()
	{
		this->count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}
	int count;                                  //�������Լ���״̬
};
void doprint(print& p, string test)
{
	p(test);
}
void test01()
{
	myadd m1;
	cout << m1(10, 10) << endl;

	print p1;
	p1("hello");
	p1("hello");
	cout << p1.count << endl;

	print p2;
	doprint(p2, "lili");                             //������Ϊ����ʹ��
}

//ν�� �º�����������bool operator()����һ����һԪ����������Ԫ
class five
{
public:
	bool operator()(int val)
	{
		return val > 5;                         //������û�д���5 �з�����
	}
};
class mysort 
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};
void test02()
{
	vector<int>v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	vector<int>::iterator it=find_if(v1.begin(), v1.end(), five());
	if (it==v1.end())
	{
		cout << "wu" << endl;
	}

	sort(v1.begin(), v1.end(), mysort());
}

//�ڽ���������  #include<functional>  �����º��� ��ϵ�º��� �߼��º���
void test03()
{
	negate<int>n;                //ȡ��
	cout << n(50) << endl;
	plus<int>p;
	cout<<p(10, 20)<<endl;       //���

	vector<int>v;
	for (int i = 0; i < 5; i++)
	{
		v.push_back(i);
	}
	sort(v.begin(), v.end(), greater<int>());        //greater �ڽ���ϵ�º��� >   less<  equal=

	vector<bool>v1;
	v1.push_back(true);
	v1.push_back(true);
	v1.push_back(false);
	v1.push_back(true);

	vector<bool>v2;
	v2.resize(v1.size());
	transform(v1.begin(), v1.end(),v2.begin(),logical_not<bool>());   //transform�����㷨
	                                                                  //logical_not �߼��º���ȡ��
}

//�����㷨
void print01(int val)
{
	cout << val << " ";
}
class print02
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
class trans
{
public:
	int operator()(int v)
	{
		return v + 1000;
	}
};
class Person1
{
public:
	Person1(string name, int age)
	{
		this->m_name = name;
		this->age = age;
	}

	bool operator==(const Person1& p)                //���ز�����const
	{
		if (this->m_name == p.m_name && this->age == p.age)
		{
			return true;
		}
	}

	string m_name;
	int age;
};
class greater20
{
public:
	bool operator()(const Person1& p)
	{
		return p.age > 20;
	}
};
class ageg
{
public:
	bool operator()(const Person1& p)
	{
		return p.age > 10;
	}
};
void test04()
{
	vector<int>v;
	for (int i = 0; i < 5; i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), print01);                        //����
	for_each(v.begin(), v.end(), print02());

	vector<int>v2;
	v2.resize(v.size());                                    
	transform(v.begin(), v.end(), v2.begin(),trans() );           //���˱�����ǰ���ٿռ�

	Person1 p1("lili", 18);
	Person1 p2("zz", 19);
	Person1 p3("yy", 28);
	vector<Person1>v3;
	v3.push_back(p1);
	v3.push_back(p2);
	v3.push_back(p3);
	
	find(v3.begin(), v3.end(), p2);                   //�����Զ�����������==
	find_if(v3.begin(), v3.end(), greater20());
	adjacent_find(v3.begin(), v3.end());              //���������ظ�Ԫ��
	binary_search(v.begin(), v.end(), 3);            //���ֲ���Ԫ���Ƿ���ڣ�ֻ�ܲ������򣬷���bool����
	int num=count(v.begin(), v.end(), 3);                    //ͳ��
	Person1 p("lili", 18);
	count(v3.begin(), v3.end(), p);                        //�Զ�������==
	count_if(v3.begin(), v3.end(), ageg());                //����ͳ��

	srand((unsigned int)time(NULL));                        //��һ���������,ÿһ�δ��Ҷ���һ��
	random_shuffle(v.begin(), v.end());                    //�������

	vector<int>v4;
	for (int i = 0; i < 5; i++)
	{
		v.push_back(i);
	}
	vector<int>v5;
	v5.resize(v.size() + v4.size());
	merge(v.begin(), v.end(), v4.begin(), v4.end(), v5.begin());     //������������˳��һ�����кϲ��µ���������

	reverse(v.begin(), v.end());                            //��תԪ��

	vector<int>v6;
	v6.resize(v.size());
	copy(v.begin(), v.end(), v6.begin());                 //����
	replace(v.begin(), v.end(),1, 10);                    //1�滻Ϊ10
	replace_if(v.begin(), v.end(), five(),2);             //�����滻

	swap(v, v6);

	//���������㷨  ͷ�ļ�#include<numeric> 
	int total=accumulate(v.begin(), v.end(), 0);          //�ۼ�   0��ʼ�ۼ�ֵ
	fill(v6.begin(), v6.end(), 9);                       //���

	//�����㷨
	vector<int>v7;
	v7.resize(min(v.size(), v4.size()));
	//���������н�������v7�����ؽ�β������
	vector<int>::iterator itEnd = set_intersection(v.begin(), v.end(), v4.begin(), v4.end(), v7.begin());
	//����
	vector<int>v8;
	v8.resize(v.size() + v4.size());
	set_union(v.begin(), v.end(), v4.begin(), v4.end(), v8.begin());
	//�   ��Զ��� v1��v2�Ĳȡv1�е�v2û�е�Ԫ��  v2��v1�Ĳȡv2�е�v1û�е�Ԫ�� 
	vector<int>v9;
	v9.resize(max(v.size(), v4.size()));
	set_difference(v.begin(), v.end(), v4.begin(), v4.end(), v9.begin());
}

int main()
{
	

	system("pause");
	return 0;
}