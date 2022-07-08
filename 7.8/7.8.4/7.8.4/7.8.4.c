#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//三个数从大到小
//最大公约数/最小公倍数=两数相乘/最大公约数

int main()
{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b,&c);
//	int tum = 0;
//	if (a<b)
//	{
//		tum = a;
//		a = b;
//		b = tum;
//	}
//	if (a<c)
//	{
//		tum = a;
//		a = c;
//		c = tum;
//	}
//	if (b<c)
//	{
//		tum = b;
//		b = c;
//		c = tum;
//	}
//	printf("%d %d %d", a, b, c);

int p = 0;
int q = 0;
scanf("%d%d", &p, &q);
int max = 0;
int x = p * q;
while (max =p % q)
{
	p = q;
	q = max;
}
printf("%d", x/q);

	return 0;


}