#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	printf("hh");                     //�ݹ� ��Ҫ˼����ʽ���� ���»�С
//	main();
//
//	return 0;
//}

void print(unsigned int x)
{
	if (x>9)                      //�ݹ��������������Ƶݹ鿪ʼֹͣ���������������
	{                                                                                //�ݹ�������Ҫ����
		print(x / 10);            //�õݹ�Խ��Խ�ƽ���������                   
	}
	printf("%d ", x % 10);
}

//int myl(char* a)
//{
//	int count = 0;
//	while (*a!='\0')
//	{
//		count++;
//		a++;
//	}
//	return count;
//}

int myl(char* a)
{
	if (*a!='\0')
	{
		return 1 + myl(a + 1);      //a+1���ַ���ַ��������ȥ*a+1������һ���ַ�
	}
	else
	{
		return 0;
	}
}

//int fib(int n)                   //������̫�󣬵ݹ�Ч�ʵ�
//{
//	if (n<=2)
//	{
//		return 1;
//	}
//	else                                                                         //��ŵ������
//	{                                                                            //������̨��
//		return fib(n - 1) + fib(n - 2);
//	}
//}
int fib(int n)                        //�õ���Ч�ʸ���
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)                                     
	{                                                             
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}


int main()
{
	/*unsigned int num = 0;
	scanf("%u\n", &num);
	print(num);*/


	char arr[] = "bit";
	printf("%d\n", myl(arr));

	int s = 0;
	scanf("%d", &s);
	printf("%d\n", fib(s));


	return 0;
}



