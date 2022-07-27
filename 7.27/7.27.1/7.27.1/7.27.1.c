
#include <stdio.h>

#include <stdlib.h>

int main()
{
	//int*p=(int*)malloc(10*sizeof(int));          //开辟动态内存空间
	//if (p==NULL)
	//{
	//	perror("main");
	//	return 0;
	//}

	//int i = 0;
	//for ( i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}

	//free(p);                               //回收空间
	//p = NULL;                             //空间回收，指针置空

	int*p=calloc(10, sizeof(int));         //开辟数组初始化

	if (p == NULL)
	{
		perror("main");
		return 0;
	}

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n",* (p + i));
	}


	int*ptr=realloc(p, 20 * sizeof(int));           //调整为新的大小20
	if (ptr != NULL)
	{
		p = ptr;
	}


	free(p);                                  //回收空间
	p = NULL;


	int* c = (int*)realloc(NULL,20);          //传空指针等同于开辟新空间melloc


	return 0;
}