#include<iostream>
using namespace std;
#include<ctime>


struct Student
{
	string name;
	int score;
};

struct Teacher
{
	string name;
	struct Student a[5];
};

void allocate(struct Teacher t[], int len)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		t[i].name = "Teacher_";
		t[i].name += nameseed[i];
		for (int j = 0; j < 5; j++)
		{
			t[i].a[j].name = "Student_";
			t[i].a[j].name += nameseed[j];
			t[i].a[j].score = rand() % 61 + 40;
		}

	}
}

void printInfo(struct Teacher t[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名：" << t[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << t[i].a[j].name << "学生分数：" << t[i].a[j].score << endl;
		}


	}
}

struct hero
{
	string name;
	int age;
	string sex;
};

void bubble(struct hero h[], int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j= 0; j< len-i-1; j++)
		{
			if (h[j].age>h[j+1].age)
			{
				struct hero temp = h[j];
				h[j] = h[j + 1];
				h[j + 1] = temp;
			}
		}
	}
}

void print(struct hero h[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "英雄名字：" << h[i].name << "年龄：" << h[i].age << "性别：" << h[i].sex << endl;
	}
}

int main()
{
	struct Teacher t[3];
	srand((unsigned int)time(NULL));
	int len = sizeof(t) / sizeof(t[0]);

	allocate(t, len);

	printInfo(t, len);


	struct hero h[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};

	int l = sizeof(h) / sizeof(h[0]);

	bubble(h, l);
	print(h, l);


	system("pause");
	return 0;
}