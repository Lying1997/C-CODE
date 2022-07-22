#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu()
{
	printf("********************************\n");
	printf("*******1.加法      2.减法*******\n");
	printf("*******3.乘法      4.除法*******\n");
	printf("************ 0.退出 ************\n");
	printf("********************************\n");
}

int ADD(int x, int y)
{
	return x + y;
}
int SUB(int x, int y)
{
	return x - y;
}
int MUL(int x, int y)
{
	return x * y;
}
int DIV(int x, int y)
{
	return x / y;
}

int caclu(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入操作数：");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}


int main()
{   
	int input = 0;

	do
	{
		menu();

		printf("请选择：\n");
		scanf("%d", &input);
		
		int ret = 0;

		switch (input)
		{
		case 1:
			ret = caclu(ADD);
			printf("%d\n", ret);
			break;
		case 2:
			ret = caclu(SUB);
			printf("%d\n", ret);
			break;
		case 3:
			ret = caclu(MUL);
			printf("%d\n", ret);
			break;
		case 4:
			ret = caclu(DIV);
			printf("%d\n", ret);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("错误\n");
			break;
		}
	} while (input);

	return 0;
}