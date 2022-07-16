#pragma once
#include <stdlib.h>
#include <time.h>

#define ROW 3                //符号定义
#define COL 3


//函数声明

void InitBoard(char board[ROW][COL], int row, int col);

void DisPlayBoard(char board[ROW][COL], int row, int col);

void PlayerMove(char board[][COL], int row, int col);

void ComruterMove(char board[][COL], int row, int col);

char IsWin(char board[][COL], int row, int col);