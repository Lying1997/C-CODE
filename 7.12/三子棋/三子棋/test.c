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
	char board[ROW][COL];                                   //�洢���� �����ά����

	InitBoard(board, ROW, COL);                             //��ʼ������

	DisPlayBoard(board, ROW, COL);                         //��ӡ����
	
	char ret = 0; 

	while (1)
	{
		PlayerMove(board, ROW, COL);                      //�����
		DisPlayBoard(board, ROW, COL);

		ret =IsWin(board, ROW, COL);                 //������жϣ���C break���������ж�ret���������
		if (ret!='C')
		{
			break;
		}

		ComruterMove(board, ROW, COL);                    //������
		DisPlayBoard(board, ROW, COL);
		
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret=='*')
	{
		printf("���Ӯ��\n");
		DisPlayBoard(board, ROW, COL);
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
		DisPlayBoard(board, ROW, COL);
	}
	else 
	{
		printf("ƽ��\n");
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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("����\n");
			break;
		}
     } while (input);

	return 0;
}