#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>
#include<ctime>
#include<numeric>

//函数对象
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
	int count;                                  //可以有自己的状态
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
	doprint(p2, "lili");                             //可以作为参数使用
}

//谓词 仿函数返回类型bool operator()接收一参数一元，二参数二元
class five
{
public:
	bool operator()(int val)
	{
		return val > 5;                         //查找有没有大于5 有返回真
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

//内建函数对象  #include<functional>  算数仿函数 关系仿函数 逻辑仿函数
void test03()
{
	negate<int>n;                //取反
	cout << n(50) << endl;
	plus<int>p;
	cout<<p(10, 20)<<endl;       //相加

	vector<int>v;
	for (int i = 0; i < 5; i++)
	{
		v.push_back(i);
	}
	sort(v.begin(), v.end(), greater<int>());        //greater 内建关系仿函数 >   less<  equal=

	vector<bool>v1;
	v1.push_back(true);
	v1.push_back(true);
	v1.push_back(false);
	v1.push_back(true);

	vector<bool>v2;
	v2.resize(v1.size());
	transform(v1.begin(), v1.end(),v2.begin(),logical_not<bool>());   //transform搬运算法
	                                                                  //logical_not 逻辑仿函数取反
}

//常用算法
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

	bool operator==(const Person1& p)                //重载参数加const
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
	for_each(v.begin(), v.end(), print01);                        //遍历
	for_each(v.begin(), v.end(), print02());

	vector<int>v2;
	v2.resize(v.size());                                    
	transform(v.begin(), v.end(), v2.begin(),trans() );           //搬运必须提前开辟空间

	Person1 p1("lili", 18);
	Person1 p2("zz", 19);
	Person1 p3("yy", 28);
	vector<Person1>v3;
	v3.push_back(p1);
	v3.push_back(p2);
	v3.push_back(p3);
	
	find(v3.begin(), v3.end(), p2);                   //查找自定义类型重载==
	find_if(v3.begin(), v3.end(), greater20());
	adjacent_find(v3.begin(), v3.end());              //查找相邻重复元素
	binary_search(v.begin(), v.end(), 3);            //二分查找元素是否存在，只能查找有序，返回bool类型
	int num=count(v.begin(), v.end(), 3);                    //统计
	Person1 p("lili", 18);
	count(v3.begin(), v3.end(), p);                        //自定义重载==
	count_if(v3.begin(), v3.end(), ageg());                //条件统计

	srand((unsigned int)time(NULL));                        //做一个随机种子,每一次打乱都不一样
	random_shuffle(v.begin(), v.end());                    //随机排序

	vector<int>v4;
	for (int i = 0; i < 5; i++)
	{
		v.push_back(i);
	}
	vector<int>v5;
	v5.resize(v.size() + v4.size());
	merge(v.begin(), v.end(), v4.begin(), v4.end(), v5.begin());     //将两个有序且顺序一致序列合并新的有序序列

	reverse(v.begin(), v.end());                            //反转元素

	vector<int>v6;
	v6.resize(v.size());
	copy(v.begin(), v.end(), v6.begin());                 //拷贝
	replace(v.begin(), v.end(),1, 10);                    //1替换为10
	replace_if(v.begin(), v.end(), five(),2);             //条件替换

	swap(v, v6);

	//算数生成算法  头文件#include<numeric> 
	int total=accumulate(v.begin(), v.end(), 0);          //累加   0起始累加值
	fill(v6.begin(), v6.end(), 9);                       //填充

	//集合算法
	vector<int>v7;
	v7.resize(min(v.size(), v4.size()));
	//求有序序列交集放在v7，返回结尾迭代器
	vector<int>::iterator itEnd = set_intersection(v.begin(), v.end(), v4.begin(), v4.end(), v7.begin());
	//并集
	vector<int>v8;
	v8.resize(v.size() + v4.size());
	set_union(v.begin(), v.end(), v4.begin(), v4.end(), v8.begin());
	//差集   相对而言 v1和v2的差集取v1中的v2没有的元素  v2和v1的差集取v2中的v1没有的元素 
	vector<int>v9;
	v9.resize(max(v.size(), v4.size()));
	set_difference(v.begin(), v.end(), v4.begin(), v4.end(), v9.begin());
}

int main()
{
	

	system("pause");
	return 0;
}