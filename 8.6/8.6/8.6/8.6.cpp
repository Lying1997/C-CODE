#include <iostream>
using namespace std;

int main()
{
	cout << "hello" << endl;

	int a = 10;
	cout << "a=" << a << endl;

	float f1= 3.14f;   //3.14默认double类型，3.14f float类型
	float f2 = 3e-2;
	cout << "f2=" << f2 << endl;       //e-2 0.1^2‘

	string str = "hello";
	cout << str << endl;

	bool flag = true;
	cout << sizeof(flag) << endl;
	cout << flag << endl;
	bool flag2 = false;
	cout << sizeof(flag2) << endl;
	cout << flag2 << endl;

	int b = 0;
	cout << "请输入" << endl;
	cin >> b;
	cout << b << endl;

	for (int i = 0; i < 10; i++)
	{
		for ( int j = 0; j < 10; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}