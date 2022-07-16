#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"

void menu()
{
	printf("**********************\n");
	printf("*******1.play ********\n");
	printf("*******0.exit ********\n");
	printf("**********************\n");
}

void game()
{
	char board[ROW][COL];                                   //存储数据 定义二维数组

	InitBoard(board, ROW, COL);                             //初始化棋盘

	DisPlayBoard(board, ROW, COL);                         //打印棋盘
	
	char ret = 0; 

	while (1)
	{
		PlayerMove(board, ROW, COL);                      //玩家下
		DisPlayBoard(board, ROW, COL);

		ret =IsWin(board, ROW, COL);                 //下完才判断，不C break跳出继续判断ret是哪种情况
		if (ret!='C')
		{
			break;
		}

		ComruterMove(board, ROW, COL);                    //电脑下
		DisPlayBoard(board, ROW, COL);
		
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret=='*')
	{
		printf("玩家赢了\n");
		DisPlayBoard(board, ROW, COL);
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
		DisPlayBoard(board, ROW, COL);
	}
	else 
	{
		printf("平局\n");
		DisPlayBoard(board, ROW, COL);
	}
	
}


int main()
{
	int input = 0;

	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
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