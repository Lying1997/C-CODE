#include <stdio.h>

void test()
	{
		static int a = 1;//static修饰a，出范围后a没有被销毁，生命周期变长。
						 //修饰局部变量改变生命周期，本质上改变了变量的存储类型
		                 //修饰全局变量使只能在自己所在源文件使用，外部链接属性变内部连接属性
		                 //修饰函数只能在所在源文件内部使用，外部连接属性变内部
		a++;
		printf("%d ", a);
	}

int main()
{
	//关键字 不能是变量名
	//
	//register int num = 100;//register寄存器关键字，建议num的值存放寄存器

	//unsigned int num = 100;
	//typedef unsigned int u_int;//typedef类型重命名

	//static 静态

	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}

	extern int g_val;
	printf("%d\n", g_val);

	extern int Add(int, int);
	int a = 10;
	int b = 20;
	int sum = Add(a,b);
	printf("%d\n", sum);

	return 0;

}