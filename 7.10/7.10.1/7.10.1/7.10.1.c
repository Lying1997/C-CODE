
#include <stdio.h>

#include "sub.h"

//��������Ƕ�׶��壬����Ƕ�׵���  

int main()
{
	int len = strlen("abc");
	printf("%d\n", len);
	//printf("%d\n", strlen("abc"));                      //��ʽ����

	printf("%d\n", printf("%d", printf("%d", 43)));

	int a = 10;
	int b = 20;

	int Add(int, int);          //��������        

	int c = Add(a, b);
	printf("%d\n", c);

	printf("%d\n", sub(a, b));                //��������ͷ�ļ�������ͷ�ļ����ú���#include "sub.h"

	
	

	return 0;
}

int Add(int x, int y)           //��������          ������ǰ��ʹ���ں�
{
	return x + y;
}