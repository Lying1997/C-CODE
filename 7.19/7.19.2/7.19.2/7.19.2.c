
#include <stdio.h>

int mstrlen(char* str)
{
	char* start = str;
	while (*str!='\0')
	{
		str++;
	}
	return str - start;
}

int main()
{
	//这里p野指针
	//int* p;       //p是一个局部的指针变量，不初始化，默认随机值
	//*p = 20;      //非法访问内存

	//int* p = NULL;    //空指针

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int* pe = arr + 9;
	while (p<=pe)
	{
		printf("%d\n", *p);
		p++;
	}

	printf("%d\n", &arr[9] - &arr[0]);  //指针-指针得到两个指针间的元素个数

	int len = mstrlen("abc");
	printf("%d\n", len);







	return 0;
}
