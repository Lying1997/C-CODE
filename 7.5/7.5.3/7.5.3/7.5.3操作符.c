#include <stdio.h>

int main()
{
	//操作符：
	//算数+-*/ %取余数,移位<< >>移动二进制位左移右移，位操作符&按位与^,赋值操作符+= -=
	//单目操作符（只有一个操作数）！-+&等，
	//关系操作符，
	//逻辑操作符;&&逻辑与,||逻辑或
	//条件操作符(三目操作符）exp1?exp2:exp3,exp1真，计算为exp2的结果，1假计算3结果

	int a = 9 / 2;
	printf("%d\n",a);

	float b = 9 / 2.0;
	printf("%f\n", b);

	int c = 2;
	int d = c << 1;

	printf("%d\n", d);

	int x = 10;
	printf("%d\n", !x);//0就是假，非0是真 if(!a)如果a为假
	//sizeof计算大小，单位是字节，如int整型大小是4
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	printf("%d\n", ~c);//~二进制按位取反
	int y = ++x;
	printf("%d\n", y);//++前置先++后使用，++后置先使用后++
	printf("%d\n", x);
	int z = x++;
	printf("%d\n", z);
	printf("%d\n", x);
	int o = (int)3.14;//()强制类型转换如转为整型
	printf("%d\n", o);

	int i = 0;
	int j = 3;
	int max = 0;
	/*if (i > j)
		max = i;
	else
		max = j;*/
	max = i > j ? i : j;//exp1真，计算为exp2的结果，1假计算3结果
	printf("%d\n", max);



	return 0;

}