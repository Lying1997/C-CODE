#include<iostream>
using namespace std;

template<typename T>                      //����һ��ģ�壬Tͨ����������
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
void mysort(T arr[], int len)                                      //����ģ�尸��
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

template<> bool mycompare(Person& a, Person& b)          //���廯Person���ͣ���������������Զ�������
{

}

int main()
{
	/*test03();*/

	p1(1, 1);                     //����ģ�����ͨ���������ȵ�����ͨ����
	p1<>(1, 1);                   //��ģ������б���ú���ģ��
	p1('a', 'b');                 //����ģ����Ը���ƥ�䣬������ʽ����ת�������ú���ģ��

	system("pause");
	return 0;
}