#include<iostream>
using namespace std;
#include<string>

void test01()
{
	string s1;                                              //����
	
	const char* str = "hello";
	string s2(str);

	string s3(s2);

	string(10,'a');
	
}

void test02()
{
	string s1;                                            //��ֵ

	s1 = "hello";
	
	string s2 = s1;

	s1.assign("hello");
	s1.assign("hello", 3);
	s1.assign(s2);
	s1.assign(10, 'w');
}

void test03()
{                                                          //׷��
	string s1;                                            
	s1 = "hello";
	string s2 = s1;

	s1 += s2;
	s1.append(s2);
	s1.append("hello");
	s1.append("hello", 3);
	s1.append(s2,0,3);                      //0λ����ʼ׷��3��

	int pos=s1.find("he");                                    //���� �����±�
	if (pos==-1)
	{
		cout << "wu" << endl;
	}

	pos=s1.rfind("he");                   //rfind�����������

	s1.replace(0, 5, "hllll");                    //�滻 ��0��5���ַ����滻Ϊ

	int a = s1.compare(s2);

	cout << s1[3] << endl;                           //����
	s1.at(0)='x';

	s1.insert(1, "lo");                      //���� ɾ��
	s1.erase(2, 2);

	string s3 = s1.substr(1, 3);                     //��ȡ�Ӵ�
}

int main()
{
	test03();

	system("pause");
	return 0;
}