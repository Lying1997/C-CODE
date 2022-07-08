#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void menu()
{
	printf("*********************\n");
	printf("*******1. play*******\n");
	printf("*******0. exit*******\n");
	printf("*********************\n");
}
void game()
{
	int ret = rand()%100+1;             //rand取随机数  %100取余数范围是0-99，+1后范围就是1-100  #include <stdlib.h>
	int guess = 0;
	while (1)
	{
		printf("猜数字");
        scanf("%d", &guess);
		if (guess<ret)
		{
			printf("小了\n");
		}
		else if (guess>ret)
		{
			printf("大了\n");
		}
		else
		{
			printf("正确\n");
			break;
		}
	}
	
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));      //取随机数设定起点  time时间戳  unsigned int强制定义类型
	
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("玩游戏");
			game();
			break;
		case 0:
			printf("退出");
			break;
		default:
			printf("错误");
			break;
		}
	} while (input);
	

	return 0;

}