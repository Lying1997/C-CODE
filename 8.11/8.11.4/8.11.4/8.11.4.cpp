#include<iostream>
using namespace std;

template<typename T>                      //声明一个模板，T通用数据类型
 void myswap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

void test01()
{
	int a = 10;
	int b = 20;
	myswap(a,b);
}

template<class T>
void mysort(T arr[], int len)                                      //排序模板案例
{
	for ( int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i+1; j < len; j++)
		{
			if (arr[max]<arr[j])
			{
				max = j;
			}
		}
		if (max!=i)
		{
			myswap(arr[max], arr[i]);
		}
	}
}
template<class T>
void print(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
}

void test02()
{
	char arr[] = "acdegfb";
	int len = sizeof(arr) / sizeof(arr[0]);
	mysort(arr, len);
	print(arr, len);
}

void test03()
{
	int arr[] = {2,6,4,8,3,1};
	int len = sizeof(arr) / sizeof(arr[0]);
	mysort(arr, len);
	print(arr, len);
}

void p1(int a, int b)
{
	cout << "11" << endl;
}

template<class T>
void p1(T a, T b)
{
	cout << "22" << endl;
}

class Person
{

};

template<class T>
bool mycompare(T& a, T& b)
{
	if (a==b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<> bool mycompare(Person& a, Person& b)          //具体化Person类型，走这个函数处理自定义类型
{

}

int main()
{
	/*test03();*/

	p1(1, 1);                     //函数模板和普通函数，优先调用普通函数
	p1<>(1, 1);                   //空模板参数列表调用函数模板
	p1('a', 'b');                 //函数模板可以更好匹配，不用隐式类型转换，调用函数模板

	system("pause");
	return 0;
}