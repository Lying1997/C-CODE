
#include <stdio.h>

#include "sub.h"

//函数不能嵌套定义，但能嵌套调用  

int main()
{
	int len = strlen("abc");
	printf("%d\n", len);
	//printf("%d\n", strlen("abc"));                      //链式访问

	printf("%d\n", printf("%d", printf("%d", 43)));

	int a = 10;
	int b = 20;

	int Add(int, int);          //函数声明        

	int c = Add(a, b);
	printf("%d\n", c);

	printf("%d\n", sub(a, b));                //声明放在头文件，引用头文件调用函数#include "sub.h"

	
	

	return 0;
}

int Add(int x, int y)           //函数定义          声明在前，使用在后
{
	return x + y;
}