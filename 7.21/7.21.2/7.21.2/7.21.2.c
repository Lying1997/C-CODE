
#include <stdio.h>

void print(int(*s)[5], int x, int y)          //五个元素一行，一个数组，指针指向一行
{
	int d = 0;
	int f = 0;
	for ( d = 0; d < 3; d++)
	{
		for ( f = 0; f < 5; f++)
		{
			printf("%d ", *(*(s + d) + f));          //*(s+d)拿到某行首元素，再+f行中元素地址，解引用是值
		}
		printf("\n");
	}
}

int main()
{
	char arr1[] = "hello";             //1 2 是两个数组
	char arr2[] = "hello";
	char* arr3 = "hello";              //常量字符串 两个取地址指向同一个字符串
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

	int* arr[3] = { a,b,c };         //指针数组是存放一组指针的集合
	int i = 0;
	/*for ( i = 0; i < 3; i++)      //只是起始位置，不能打印整个数组
	{
		printf("%s\n", *arr[i]);
	}*/
	for ( i = 0; i < 3; i++)
	{
		int j = 0;
		for ( j = 0; j < 5; j++)
		{
			printf("%d ", *(arr[i]+j));            //arr[i]是起始位置地址，+1是第二个地址，+2第三个，解引用是值
		    //等同于printf("%d ", arr[i][j]);  
		}
		printf("%\n");
	}
/*
	int str[] = { 1,2,3,4,5 };
	int(*pstr)[10] = &str;   */           //数组指针 指向数组的指针

	int s[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };              //二维数组首元素是第一行，数组名首元素地址
	print(s, 3, 5);

	return 0;
}