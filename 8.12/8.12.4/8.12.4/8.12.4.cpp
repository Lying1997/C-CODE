#include<iostream>
using namespace std;
#include<string>

void test01()
{
	string s1;                                              //构造
	
	const char* str = "hello";
	string s2(str);

	string s3(s2);

	string(10,'a');
	
}

void test02()
{
	string s1;                                            //赋值

	s1 = "hello";
	
	string s2 = s1;

	s1.assign("hello");
	s1.assign("hello", 3);
	s1.assign(s2);
	s1.assign(10, 'w');
}

void test03()
{                                                          //追加
	string s1;                                            
	s1 = "hello";
	string s2 = s1;

	s1 += s2;
	s1.append(s2);
	s1.append("hello");
	s1.append("hello", 3);
	s1.append(s2,0,3);                      //0位置起始追加3个

	int pos=s1.find("he");                                    //查找 返回下标
	if (pos==-1)
	{
		cout << "wu" << endl;
	}

	pos=s1.rfind("he");                   //rfind从右向左查找

	s1.replace(0, 5, "hllll");                    //替换 从0起5个字符被替换为

	int a = s1.compare(s2);

	cout << s1[3] << endl;                           //访问
	s1.at(0)='x';

	s1.insert(1, "lo");                      //插入 删除
	s1.erase(2, 2);

	string s3 = s1.substr(1, 3);                     //截取子串
}

int main()
{
	test03();

	system("pause");
	return 0;
}