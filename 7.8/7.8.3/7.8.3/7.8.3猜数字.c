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
	int ret = rand()%100+1;             //randȡ�����  %100ȡ������Χ��0-99��+1��Χ����1-100  #include <stdlib.h>
	int guess = 0;
	while (1)
	{
		printf("������");
        scanf("%d", &guess);
		if (guess<ret)
		{
			printf("С��\n");
		}
		else if (guess>ret)
		{
			printf("����\n");
		}
		else
		{
			printf("��ȷ\n");
			break;
		}
	}
	
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));      //ȡ������趨���  timeʱ���  unsigned intǿ�ƶ�������
	
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("����Ϸ");
			game();
			break;
		case 0:
			printf("�˳�");
			break;
		default:
			printf("����");
			break;
		}
	} while (input);
	

	return 0;

}