
#include <stdio.h>

#include <stdlib.h>

int main()
{
	//int*p=(int*)malloc(10*sizeof(int));          //���ٶ�̬�ڴ�ռ�
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

	//free(p);                               //���տռ�
	//p = NULL;                             //�ռ���գ�ָ���ÿ�

	int*p=calloc(10, sizeof(int));         //���������ʼ��

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


	int*ptr=realloc(p, 20 * sizeof(int));           //����Ϊ�µĴ�С20
	if (ptr != NULL)
	{
		p = ptr;
	}


	free(p);                                  //���տռ�
	p = NULL;


	int* c = (int*)realloc(NULL,20);          //����ָ���ͬ�ڿ����¿ռ�melloc


	return 0;
}