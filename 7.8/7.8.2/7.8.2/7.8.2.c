#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//do while���  ѭ������ִ��һ��
//  do
//   ѭ�����
//    while����

int main()
{
	/*int i = 0;
	do
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	} while (i<=10);*/

	//int num = 1;
	//int sum = 1;
	//int n = 0;
	//int p = 0;
	//scanf("%d", &n);
	//for (num = 1; num <= n; num++)
	//{
	//	sum = sum * num;//sum*=num;
	//	p += sum;
	//}
	//printf("%d", p);

	//�۰���ҷ�
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 7;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int left = 0;
	//int right =sz-1;
	//
	//while (left <= right)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}
	//	else if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else
	//	{
	//		printf("%d", mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//{
	//	printf("�Ҳ���");
	//}


	//char arr1[] = "welcome to beijing!!!!";
	//char arr2[] = "######################";
	//int left = 0;
	//int right = strlen(arr1)-1;//���ַ������� ͷ�ļ�#include <string.h>

	//while (left<=right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right]= arr1[right];
	//	printf("%s\n", arr2);

	//	Sleep(1000);          //˯�� ��λms   ͷ�ļ�#include<windows,h>
	//	system("cls");        //�����Ļ

	//	left++;
	//	right--;
	//}


	int i = 0;
	char password[20] = { 0 };
	for ( i = 0; i < 3; i++)
	{
		printf("������:>");
			scanf("%s", password);                //password�����������������������ǵ�ַ���ʲ���ȡ��ַ
			if (strcmp(password, "12345") == 0)       //strcmp(1,2)�Ƚ��ַ�����1С<0,���0,1��>0
			{
				printf("��½�ɹ�");
				break;
			}
			else
			{
				printf("�������");
			}
	}
	if (i==3)
		printf("����");

	return 0;

}