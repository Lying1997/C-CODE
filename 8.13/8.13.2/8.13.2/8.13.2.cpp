#include<iostream>
using namespace std;
#include<list>
#include<algorithm>
#include<set>
#include<map>

//list 链表
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
		return p1.high > p2.high;                   // 身高降序
	}
	else
	{
		return p1.age < p2.age;              //年龄升序
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
	l1.remove(5);          //删除所有5

	l1.front();                     //list链表不是连续空间，地址链接，所以不能下标访问
	l1.back();
	list<int>::iterator it = l1.begin();
	it++;            //支持++ 不能it=it+1；不支持随机访问

	l1.reverse();        //反转 
	l1.sort();           //排序 不支持随机访问所以不支持标准算法

	list<Person>l;
	Person p1 = { "lili", 18, 165 };
	Person p2 = { "zz", 19, 170 };
	Person p3 = { "yy", 18, 180 };

	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);

	l.sort(compare);               //自定义类型自己写排序函数
}

class Compare1
{
	bool compare(Person& p1, Person& p2)
	{
		if (p1.age == p1.age)
		{
			return p1.high > p2.high;                   // 身高降序
		}
		else
		{
			return p1.age < p2.age;              //年龄升序
		}
	}
};
class Compare                                      //创建类型
{
public:
	bool operator()(int v1, int v2)               //返回bool类型
	{
		return v1 > v2;
	}
};
//set/multiset容器 关联式容器，自动排序  二叉树实现  set不允许重复元素，multiset允许 头文件相同
void test02()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(50);
	s1.insert(30);
	s1.insert(40);
	set<int>s2;
	
	set<int, Compare>s3;                    //利用仿函数指定排序规则 在输入数据前
	                                        //自定义类型需要自己指定排序规则
	set<Person, Compare1>s4;

	s2 = s1;
	s1.size();
	s1.empty();
	s1.swap(s2);

	s1.erase(s1.begin());
	s1.erase(30);

	set<int>::iterator pos=s1.find(20);         //查找 返回迭代器，找不到返回end
	if (pos!=s1.end())
	{
		cout << "zhaodao";
	}
	s1.count(10);          //统计10的个数

	pair<set<int>::iterator, bool>ret = s1.insert(20);
	if (ret.second)
	{
		cout << "插入成功";                               //set插入返回是否成功
	}



	//pair对组 成对出现的数据，利用对组返回两个数据
	pair<string, int>p("tom", 18);
	cout << p.first << " " << p.second << endl;
	pair<string, int>p2 = make_pair("jerry", 10);
}


//map/multimap容器  所有元素都是pair pair中第一个元素为key值，索引作用，第二个为实值  自动排序
//map不允许有重复key值
void testo3()
{
	map<int, int>m1;
	m1.insert(pair<int, int>(1, 10));              //注意对组输入
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
	m1.erase(3);            //按照key删除

	map<int,int>::iterator pos=m1.find(2);                 //返回迭代器
	if (pos != m1.end())
	{
		cout << "zhaodao" << endl;
		cout << (*pos).first << pos->second << endl;
	}
	int num=m1.count(3);           //统计key，按key统计

	map<int, int, Compare>m3;                   //利用仿函数指定排序顺序
	m3.insert(pair<int, int>(5, 50));
}

int main()
{


	system("pause");
	return 0;
}