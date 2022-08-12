#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>          //标准算法头文件

//容器 vector  算法for_each  迭代器 vector<int>::iterator

void print(int val)
{
	cout << val << endl;
}

void test01()
{
	vector<int> v;               //创建容器 数组

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	//vector<int>::iterator itBegin = v.begin();          //起始迭代器，指向容器中第一个元素
	//vector<int>::iterator itEnd = v.end();           //结束迭代器，指向容器中最后一个元素的下一个位置
	//while (itBegin!=itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it<< endl;
	}*/

	for_each(v.begin(), v.end(), print);                              //读取数据
}

void test02()
{
	vector<vector<int>>v;                          //容器嵌套容器 读数据两遍遍历嵌套
	
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;

	v1.push_back(10);
	v2.push_back(10);
	v3.push_back(10);
	v4.push_back(10);

	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
}

void print1(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test03()
{
	vector<int>v1;                                             //常用构造方式
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	print1(v1);

	vector<int>v2(v1.begin(), v1.end());

	vector<int>v3(10, 100);

	vector<int>v4(v3);
}

void test04()                                                    //赋值操作
{ 
	vector<int>v1;                                             
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	print1(v1);

	vector<int>v2; 
	v2 = v1;
	
	vector<int>v3;
	v3.assign(v1.begin(), v1.end());

	vector<int>v4;
	v4.assign(10, 100);

}

void test05()
{
	vector<int>v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	print1(v1);

	if (v1.empty())
	{
		cout << "kong" << endl;
	}
	else
	{
		cout << v1.capacity() << endl;
		cout << v1.size() << endl;
	}

	v1.resize(15);                                  //重新指定容量
	cout << v1.capacity() << endl;
	cout << v1.size() << endl;
	print1(v1);

	v1.resize(20,100);
	print1(v1);
}

void test06()
{
	vector<int>v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	print1(v1);

	v1.pop_back();
	print1(v1);

	v1.insert(v1.begin(), 100);                 //插入
	print1(v1);

	v1.insert(v1.begin(),2, 100);
	print1(v1);

	v1.erase(v1.begin());
	print1(v1);

	v1.erase(v1.begin(), v1.end());                    //删除
	print1(v1);

	v1.clear();                                //清空
}

void test07()
{
	vector<int>v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	print1(v1);

	cout<<v1.at(1)<<endl;

	cout << v1.front() << endl;
	cout << v1.back() << endl;
}

void test08()
{
	vector<int>v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	print1(v1);

	vector<int>v2;
	for (int i = 5; i >0; i--)
	{
		v2.push_back(i);
	}
	print1(v2);

	v1.swap(v2);                                   //交换容器
	print1(v1);
	print1(v2);

	vector<int>v3;
	for (int i = 0; i < 100000;i++)
	{
		v1.push_back(i);
	}
	cout << v1.capacity() << endl;
	cout << v1.size() << endl;

	v1.resize(3);
	cout << v1.capacity() << endl;
	cout << v1.size() << endl;

	vector<int>(v1).swap(v1);                          //用来收缩内存
	cout << v1.capacity() << endl;
	cout << v1.size() << endl;
}

void test09()
{
	vector<int>v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	print1(v1);

	v1.reserve(20);                                     //预留空间
}


int main()
{
	test08();

	system("pause");
	return 0;
}