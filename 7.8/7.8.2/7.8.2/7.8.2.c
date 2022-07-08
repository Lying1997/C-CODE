#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//do while语句  循环至少执行一次
//  do
//   循环语句
//    while（）

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

	//折半查找法
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
	//	printf("找不到");
	//}


	//char arr1[] = "welcome to beijing!!!!";
	//char arr2[] = "######################";
	//int left = 0;
	//int right = strlen(arr1)-1;//求字符串长度 头文件#include <string.h>

	//while (left<=right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right]= arr1[right];
	//	printf("%s\n", arr2);

	//	Sleep(1000);          //睡眠 单位ms   头文件#include<windows,h>
	//	system("cls");        //清空屏幕

	//	left++;
	//	right--;
	//}


	int i = 0;
	char password[20] = { 0 };
	for ( i = 0; i < 3; i++)
	{
		printf("输密码:>");
			scanf("%s", password);                //password是数组名，数组名本来就是地址，故不用取地址
			if (strcmp(password, "12345") == 0)       //strcmp(1,2)比较字符串；1小<0,相等0,1大>0
			{
				printf("登陆成功");
				break;
			}
			else
			{
				printf("密码错误");
			}
	}
	if (i==3)
		printf("锁定");

	return 0;

}