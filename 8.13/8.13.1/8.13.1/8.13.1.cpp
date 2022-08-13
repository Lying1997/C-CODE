#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>
#include<stack>
#include<queue>


//deque 随机访问
void print(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int>d1;
	for (int i = 0;  i < 5;  i++)
	{
		d1.push_back(i);
	}
	print(d1);

	deque<int>d2(d1.begin(),d1.end());
	deque<int>d3(10,100);
	deque<int>d4(d3);

	d4.assign(10, 5);

	if (d1.empty())
	{
		cout << "kong" << endl;
	}

	cout << d1.size() << endl;
	d1.resize(15);

}
void test02()
{
	deque<int>d1;
	for (int i = 0; i < 5; i++)
	{
		d1.push_back(i);
	}
	print(d1);

	d1.push_back(1);
	d1.push_front(1);
	d1.pop_back();
	d1.pop_front();

	d1.insert(d1.begin(), 8);                        //insert插入提供迭代器
	d1.insert(d1.begin(), 2,8);
	deque<int>::iterator it = d1.begin();
	it += 5;
	d1.insert(it, 5);

	d1.erase(it);

	d1.clear();

	d1.at(5);
	d1[2];
	d1.front();
	d1.back();

	sort(d1.begin(), d1.end());                  //标准算法头文件 #include<algorithm>
}

//stack 栈容器 先进后出 一个出口  不能遍历，第一个元素拿出去才能访问第二个
void test03()
{
	stack<int>s1;
	stack<int>s2(s1);
	s2 = s1;

	s1.push(10);
	s1.push(20);
	s1.push(30);

	while (!s1.empty())
	{
		cout << s1.top() << endl;       //查看栈顶元素
		s1.pop();                       //删除栈顶元素
	}
	s1.size();
}

//queue 队列容器 先进先出  只能队头出，队尾入 不能遍历，第一个最后一个可以访问
void test04()
{
	queue<int>q1;
	queue<int>q2(q1);

	q2 = q1;
	q1.push(10);
	q1.pop();
	q1.front();
	q1.back();
	q1.empty();
	q1.size();
}



int main()
{
	test03();


	system("pause");
	return 0;
}