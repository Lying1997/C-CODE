
#include <stdio.h>

int mstrlen(char* str)
{
	char* start = str;
	while (*str!='\0')
	{
		str++;
	}
	return str - start;
}

int main()
{
	//����pҰָ��
	//int* p;       //p��һ���ֲ���ָ�����������ʼ����Ĭ�����ֵ
	//*p = 20;      //�Ƿ������ڴ�

	//int* p = NULL;    //��ָ��

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int* pe = arr + 9;
	while (p<=pe)
	{
		printf("%d\n", *p);
		p++;
	}

	printf("%d\n", &arr[9] - &arr[0]);  //ָ��-ָ��õ�����ָ����Ԫ�ظ���

	int len = mstrlen("abc");
	printf("%d\n", len);







	return 0;
}
