#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct stu//�����ṹ�壬��C���Դ����µ�����
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
	struct stu s = { "����",15,85.5};//�ṹ��Ĵ����ͳ�ʼ��
	printf("%s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����

	struct stu * ps = &s;
	printf("%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("%s %d %lf\n", ps->name, ps->age, ps->score);//�ṹ��ָ��->��Ա����


	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	
	/*int max = a > b ? a : b;
	printf("%d", max);*/

	int max = MAX(a, b);
	printf("%d\n", max);

	return 0;

}