#pragma once
#include <stdlib.h>
#include <time.h>

#define ROW 3                //���Ŷ���
#define COL 3


//��������

void InitBoard(char board[ROW][COL], int row, int col);

void DisPlayBoard(char board[ROW][COL], int row, int col);

void PlayerMove(char board[][COL], int row, int col);

void ComruterMove(char board[][COL], int row, int col);

char IsWin(char board[][COL], int row, int col);