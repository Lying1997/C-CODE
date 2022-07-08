#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//循环语句

int main()
{
	//int i = 1;                              //初始化
	//while (i <= 10)                         //判断部分 
	//{
	//	//if (i == 5)
	//	//	break;//bresk用于永久终止循环

	//	//if (i == 5)
	//	//	continue;//continue 跳过本次循环continue后面的代码，直接去判断部分是否进行下一次循环
 //       /*printf("%d\n", i);
	//i++;*/                                  //调整部分
	//}
	
	//int ch = getchar();
	///*printf("%c\n", ch);*/
	//putchar(ch);//输出一个字符

	//int ch = 0;
	//while ((ch = getchar()) != EOF)//!=不等于  EOF end of file 文件结束标志
	//{
	//	putchar(ch);

	//}

	//char password[20] = { 0 };
	//printf("请输入密码:>");
	//scanf("%s", password);
	//printf("请确认密码（Y\N）:>");
	//
	//////清理缓冲区
	////getchar();只能清理一个
	//int tmp = 0;
	//while ((tmp = getchar()) != '\n')  //循环清理多个，清理到\n换行为止
	//{
	//	;
	//}
	//int ch = getchar();
	//if (ch == 'Y')
	//{
	//	printf("确认成功\n");
	//}
	//else
	//{
	//	printf("确认失败\n");
	//}


	/*int ch = 0;                       
	while ((ch=getchar())!=EOF)      
	{
		if (ch < '0' || ch>'9')
			continue;

		putchar(ch);
	}*/


	
	//for(表达式1；2；3)
	//for循环变量最好左闭右开（i=0；i<10;i++)

	int i = 0;
	for (i = 1; i <= 10; i++)	
	{
		/*if (i == 5)
			break;*/
		if (i == 5)
			continue;
		
		printf("%d ", i);
	}

	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)//循环0次，判断语句k=0，把0赋值给k，表达式值为0-表达式为假，循环0次
		k++;

	return 0;
	
}