#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>          //��׼�㷨ͷ�ļ�

//���� vector  �㷨for_each  ������ vector<int>::iterator

void print(int val)
{
	cout << val << endl;
}

void test01()
{
	vector<int> v;               //�������� ����

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	//vector<int>::iterator itBegin = v.begin();          //��ʼ��������ָ�������е�һ��Ԫ��
	//vector<int>::iterator itEnd = v.end();           //������������ָ�����������һ��Ԫ�ص���һ��λ��
	//while (itBegin!=itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it<< endl;
	}*/

	for_each(v.begin(), v.end(), print);                              //��ȡ����
}

void test02()
{
	vector<vector<int>>v;                          //����Ƕ������ �������������Ƕ��
	
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
	vector<int>v1;                                             //���ù��췽ʽ
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	print1(v1);

	vector<int>v2(v1.begin(), v1.end());

	vector<int>v3(10, 100);

	vector<int>v4(v3);
}

void test04()                                                    //��ֵ����
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

	v1.resize(15);                                  //����ָ������
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

	v1.insert(v1.begin(), 100);                 //����
	print1(v1);

	v1.insert(v1.begin(),2, 100);
	print1(v1);

	v1.erase(v1.begin());
	print1(v1);

	v1.erase(v1.begin(), v1.end());                    //ɾ��
	print1(v1);

	v1.clear();                                //���
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

	v1.swap(v2);                                   //��������
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

	vector<int>(v1).swap(v1);                          //���������ڴ�
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

	v1.reserve(20);                                     //Ԥ���ռ�
}


int main()
{
	test08();

	system("pause");
	return 0;
}