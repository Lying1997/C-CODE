#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{ 
	
	//选择语句

	
	//int input = 0;
	//printf("要好好学习吗（1/0）");
	//scanf("%d", &input);

	//if (input==1)        
	//{
	// printf("good");
	// }
	// 
	//else
	//{
	//printf("no");
 //    }


	//循环语句

	int line = 0;
	while (line < 3000)
	{
		printf("写代码:%d\n",line);
		line++;
	}
	if (line == 3000)
	{
		printf("good\n");
	}



	return 0;

}