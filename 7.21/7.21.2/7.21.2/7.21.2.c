
#include <stdio.h>

void print(int(*s)[5], int x, int y)          //���Ԫ��һ�У�һ�����飬ָ��ָ��һ��
{
	int d = 0;
	int f = 0;
	for ( d = 0; d < 3; d++)
	{
		for ( f = 0; f < 5; f++)
		{
			printf("%d ", *(*(s + d) + f));          //*(s+d)�õ�ĳ����Ԫ�أ���+f����Ԫ�ص�ַ����������ֵ
		}
		printf("\n");
	}
}

int main()
{
	char arr1[] = "hello";             //1 2 ����������
	char arr2[] = "hello";
	char* arr3 = "hello";              //�����ַ��� ����ȡ��ַָ��ͬһ���ַ���
	char* arr4 = "hello";

	if (arr1==arr2)
	{
		printf("same\n");
	}
	else
	{
		printf("not\n");
	}

	if (arr3 == arr4)
	{
		printf("same\n");
	}
	else
	{
		printf("not\n");
	}

	int a[5] = { 1,2,3,4,5 };
	int b[] = { 2,3,4,5,6, };
	int c[] = { 3,4,5,6,7 };

	int* arr[3] = { a,b,c };         //ָ�������Ǵ��һ��ָ��ļ���
	int i = 0;
	/*for ( i = 0; i < 3; i++)      //ֻ����ʼλ�ã����ܴ�ӡ��������
	{
		printf("%s\n", *arr[i]);
	}*/
	for ( i = 0; i < 3; i++)
	{
		int j = 0;
		for ( j = 0; j < 5; j++)
		{
			printf("%d ", *(arr[i]+j));            //arr[i]����ʼλ�õ�ַ��+1�ǵڶ�����ַ��+2����������������ֵ
		    //��ͬ��printf("%d ", arr[i][j]);  
		}
		printf("%\n");
	}
/*
	int str[] = { 1,2,3,4,5 };
	int(*pstr)[10] = &str;   */           //����ָ�� ָ�������ָ��

	int s[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };              //��ά������Ԫ���ǵ�һ�У���������Ԫ�ص�ַ
	print(s, 3, 5);

	return 0;
}