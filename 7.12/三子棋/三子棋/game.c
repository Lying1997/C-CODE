#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"



void InitBoard(char board[ROW][COL], int row, int col)                 //初始化棋盘 初始为空格
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisPlayBoard(char board[ROW][COL], int row, int col)                //打印棋盘
{
	int i = 0;
	for ( i = 0; i < row; i++)
	{
		int j = 0;
		for ( j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j<col-1)
			{
				printf("|");
			}	
		}
		printf("\n");
		if (i<row-1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走;>\n");

	while (1)
	{
		printf("请输入坐标;>");
		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，重新输入\n");
				break;
			}
		}
		else
		{
			printf("坐标非法");
		}
	}
}

void ComruterMove(char board[][COL], int row, int col)
{
	printf("电脑走;>\n");
	while (1)
	{
         int x = rand()%row;
	     int y = rand()%col;

	     if (board[x][y]==' ')
	     {
		      board[x][y] = '#';
		      break;
	      }
	
	}
	
}

int IsFool(char board[][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			if (board[i][j]==' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char IsWin(char board[][COL], int row, int col)
{
	int i = 0;
	for ( i = 0; i < row; i++)
	{
		if (board[i][0]== board[i][1] && board[i][1]== board[i][2] && board[i][0]!=' ')
		{
			return board[i][0];
		}
	}
	int j = 0;
	for (j= 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] != ' ')
	{
		return board[0][2];
	}
	int k = IsFool(board, ROW, COL);
	if (k==1)
	{
		return 'Q';
	}
	
	return 'C';

}