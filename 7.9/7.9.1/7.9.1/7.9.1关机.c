#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{

	/*int i = 0;
	for ( i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
			else
			{
				printf("%d ", i);
				break;
			}
		}
	}*/


	//goto���

//flag:
//	printf("hh\n");
//	printf("h\n");
//
//	goto flag;


//�ػ�

	system("shutdown -s -t 60");   //�ػ� -���� -ʱ�� 60s   system()ִ��ϵͳ����   #include <stdlib.h>
	

	
	char input[20] = { 0 };
again:	
		
            printf("60s�ػ������룺������ȡ��\n");
            scanf("%s", &input);
			if (strcmp(input, "������") == 0)     //#include <string.h>
			{
				system("shutdown -a");
			}
			else
			{
                goto again;

			}
	
	return 0;
}