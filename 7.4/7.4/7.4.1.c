#include <stdio.h>

//变量
int b = 2022;



int main()

{
	int age = 20;
	double weight = 50;

	age = age + 1;
	weight = weight - 5;

	printf("%d\n", age);
	printf("%lf\n", weight);

	{int a = 10;
	printf("a=%d\n", a);

	printf("b=%d\n", b);
	}
//作用域和生命周期
//局部变量作用域就是局部范围 a
//全局变量全局可用 b

//estern int b=2022;声明变量

//变量生命周期：创建到销毁
//局部：进入局部范围开始，出结束
//全局：程序周期 main函数周期

	
	
//常量

	3.14;

	const int num = 10;


#define MAX 1000
	int n = MAX;
	printf("n=%d", n);

	enum Sex
	{
		//这种类型的量未来可能取值

		MALE,
		FAMALE,
		SECRET

	};
	

	enum Sex s = MALE;
	printf("%d\n", MALE);
	printf("%d\n", FAMALE);
	printf("%d\n", SECRET);


//字面常量
//const修饰的常变量：常属性（不能改变），本质属性变量	
//define定义的标识常量
//枚举常量：可以一一列举enum


	
	return 0;
}



