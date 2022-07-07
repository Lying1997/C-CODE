#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//分支语句

int main()
{
	int age = 14;
	if (age >= 18)
		printf("成年\n");
	else if (age < 18 && age >= 12)
	{
		printf("未成年\n");
		printf("haha\n");
	}
	else
		printf("小孩\n");

	
	
	int n = 0;

	for (n = 1; n<= 100; n++)
	
	{	if (n % 2 == 1)
		printf("%d ", n);
	}

	int day = 0;
	scanf("%d", &day);
	switch (day)//switch可以嵌套使用
	{
	case 1:          //case后必须是整型常量表达式
		printf("星期一");
		break;
	case 2:
		printf("星期二");
		break;
	case 3:
		printf("星期三");
		break;
	case 4:
		printf("星期四");
		break;
	case 5:
		printf("星期五");
		break;
	case 6:
	case 7:
		printf("休息日");
		break;
	default:
		printf("错误");
		break;


	}
	


	return 0;

}