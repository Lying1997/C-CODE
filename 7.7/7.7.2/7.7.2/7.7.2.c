#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��֧���

int main()
{
	int age = 14;
	if (age >= 18)
		printf("����\n");
	else if (age < 18 && age >= 12)
	{
		printf("δ����\n");
		printf("haha\n");
	}
	else
		printf("С��\n");

	
	
	int n = 0;

	for (n = 1; n<= 100; n++)
	
	{	if (n % 2 == 1)
		printf("%d ", n);
	}

	int day = 0;
	scanf("%d", &day);
	switch (day)//switch����Ƕ��ʹ��
	{
	case 1:          //case����������ͳ������ʽ
		printf("����һ");
		break;
	case 2:
		printf("���ڶ�");
		break;
	case 3:
		printf("������");
		break;
	case 4:
		printf("������");
		break;
	case 5:
		printf("������");
		break;
	case 6:
	case 7:
		printf("��Ϣ��");
		break;
	default:
		printf("����");
		break;


	}
	


	return 0;

}