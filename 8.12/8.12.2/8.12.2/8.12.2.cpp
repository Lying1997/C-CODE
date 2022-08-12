
#include"8.12.2.hpp"


void print(myArray<int>& arr)
{
	for (int i = 0; i < arr.getsize(); i++)
	{
		cout << arr[i] << endl;
	}
}


class Person
{
public:
	Person(){};
	Person(string name,int age) 
	{
		this->m_name = name;
		this->m_age = age;
	};
	


	string m_name;
	int m_age=0;
};



int main()
{
	myArray<int>arr1(5);

	for (int i = 0; i < 5; i++)
	{
		arr1.pushback(i);
	}
	print(arr1);

	Person p1("lili", 10);
	Person p2("zz", 20);

	myArray<Person>arr2(20);
	arr2.pushback(p1);
	arr2.pushback(p2);

	system("pause");
	return 0;
}