#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"



void menu()
{
	printf("********************************\n");
	printf("********1.add       2.del*******\n");
	printf("********3.serch     4.modify****\n");
	printf("********5.sort      6.print*****\n");
	printf("***********   0.exit   *********\n");
	printf("********************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SERCH,
	MODIFY,
	SORT,
	PRINT
};

int main()
{
	int input = 0;

	contact con;                  //����ͨѶ¼

	InitContact(&con);             //��ʼ��


	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:

			ADDContact(&con);
			break;
		case DEL:
			DELContact(&con);
			break;
		case SERCH:
			SERCHContact(&con);
			break;
		case MODIFY:
			MODIFYContact(&con);
			break;
		case SORT:
			SORTContact(&con);
			break;
		case PRINT:
			PRINTContact(&con);
			break;
		case EXIT:
			SAVEContact(&con);
			EXITContact(&con);
			break;
		default:
			printf("����");
			break;
		}

	} while (input);


	return 0;
}