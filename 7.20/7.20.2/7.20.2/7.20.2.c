#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int number1(int n)                //2�����м���1
{
	int count = 0;
	//int i = 0;
	//for ( i = 0; i < 32; i++)
	//{
	//	if (((n >> i) & 1) == 1)
	//	{
	//		count++;
	//	}
	//}
	while (n)
	{
		n = n & (n - 1);              
		count++;
	}
	return count;
}

int main()
{
	int n = -1;
	int ret = number1(n);
	printf("%d\n", ret);

	int a = 0;                         //�������λ��ͬ����
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = a ^ b;                   //��λ��� ����Ϊ1
	printf("%d\n", number1(c));      //��������м���1
	
	int p = 0;
	scanf("%d", &p);
	int i = 0; 
	for ( i = 31; i >=1; i-=2)               //��ӡż��λ
	{
		printf("%d ", ((p >> i) & 1));
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)            //��ӡ����λ
	{
		printf("%d ", ((p >> i) & 1));
	}

	return 0;

}