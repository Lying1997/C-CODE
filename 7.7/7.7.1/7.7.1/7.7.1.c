#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct stu//创建结构体，让C语言创建新的类型
{
	char name[20];
	int age;
	double score;
};

int MAX(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	struct stu s = { "张三",15,85.5};//结构体的创建和初始化
	printf("%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量

	struct stu * ps = &s;
	printf("%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("%s %d %lf\n", ps->name, ps->age, ps->score);//结构体指针->成员变量


	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	
	/*int max = a > b ? a : b;
	printf("%d", max);*/

	int max = MAX(a, b);
	printf("%d\n", max);

	return 0;

}