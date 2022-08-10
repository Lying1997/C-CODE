#include<iostream>
using namespace std;


void swap(int &p, int &q)    //引用传递
{
	int tmp = p;
	p = q;
	q = tmp;
}

//int& testo1()
//{
//	int c = 0;
//	
//}

//int fun(int a = 10, int b,int c=30)
//{
//	return a + b + c;
//}

int fun(int a, int b, int c = 30)
{
	return a + b + c;
}

int main()
{
	int* p = new int(10);

	delete p;

	int * arr=new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	delete[] arr;


	int a = 10;
	int &b = a;    //数据类型 &别名=原名
	b = 20;
	cout << a << endl;

	int c = 15;
	int d = 20;

	swap(c, d);

	int l=fun(20, 25);
	cout << l << endl;





	system("pause");
	return 0;
}