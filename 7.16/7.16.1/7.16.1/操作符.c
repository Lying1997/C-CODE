
#include <stdio.h>

int main()
{
	//算数操作符 + - * / %
	//移位操作符 << >>   二进制位左移（左边丢一位，最后补0）/右移（算数右移补原符号位，逻辑右移补0）
	int a = 2;
	int b = a << 1;
	printf("%d\n", b);

	//位操作符 & |    ^ 二进制按对应位异或：相同为0，相异为1
	int a = 5;
	int b = 3;
	a = a ^ b;               //a^a=0   a^0=a
	b = a ^ b;
	a = a ^ b;

	//赋值操作符 = += -= %=
	//单目操作符 ！- + sizeof ~补码按位取反 -- ++ & *
	short s = 5;
	int a = 10;
	printf("%d\n", sizeof(s = a + 2));        //sizeof括号里不参与运算
	printf("%d\n", s);                          
 

	return 0;
}