#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	printf("hh");                     //递归 主要思考方式在于 大事化小
//	main();
//
//	return 0;
//}

void print(unsigned int x)
{
	if (x>9)                      //递归限制条件，控制递归开始停止，条件不满足出来
	{                                                                                //递归两个必要条件
		print(x / 10);            //让递归越来越逼近跳出条件                   
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
		return 1 + myl(a + 1);      //a+1是字符地址，传递下去*a+1就是下一个字符
	}
	else
	{
		return 0;
	}
}

//int fib(int n)                   //计算量太大，递归效率低
//{
//	if (n<=2)
//	{
//		return 1;
//	}
//	else                                                                         //汉诺塔问题
//	{                                                                            //青蛙跳台阶
//		return fib(n - 1) + fib(n - 2);
//	}
//}
int fib(int n)                        //用迭代效率更高
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



