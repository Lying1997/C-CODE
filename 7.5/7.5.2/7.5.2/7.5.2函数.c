#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//����

	//int a=0;
	//int b=0;
	//scanf("%d%d", &a, &b);

	///*int sum = a + b;
	//printf("%d\n", sum);*/
	//
	////�����������

	//int Add(int x, int y);
	//{
	//	int z = 0;
	//	z = x + y;
	//	return z;
	//}

	//int sum=Add(a, b);

	//printf("%d\n",sum);

	
	//����:��ͬ����Ԫ�ؼ���,���±������ʴ�0��ʼ

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char ch[5] = { 'a','b','c' };//����ȫ��ʼ����ʣ���Ĭ��Ϊ0

	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	
	return 0;

}