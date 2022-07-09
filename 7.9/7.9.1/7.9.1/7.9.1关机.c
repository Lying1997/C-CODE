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


	//goto语句

//flag:
//	printf("hh\n");
//	printf("h\n");
//
//	goto flag;


//关机

	system("shutdown -s -t 60");   //关机 -设置 -时间 60s   system()执行系统命令   #include <stdlib.h>
	

	
	char input[20] = { 0 };
again:	
		
            printf("60s关机，输入：我是猪，取消\n");
            scanf("%s", &input);
			if (strcmp(input, "我是猪") == 0)     //#include <string.h>
			{
				system("shutdown -a");
			}
			else
			{
                goto again;

			}
	
	return 0;
}