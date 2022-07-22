#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{
		while (left < right && arr[left] % 2==1)
		{
			left++;
		}
		while (left < right && arr[right]%2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[right];
			arr[right] = arr[left];
			arr[left] = tmp;
		}
	}
}



int main()                                     
{
	int i = 100;
	for ( i = 100; i < 10000; i++)                        //水仙花数
	{ 
		int j = 1;
		int tmp = i;
		int n = 0;
		while (j)
		{
			j = tmp / 10;
			n++;
			tmp = tmp / 10;
		}

		tmp = i;
		int x = 0;
		double sum = 0;
		while (tmp)                       //while循环就可以，不用for，里面不用i
		{
			x = tmp % 10;
			sum += pow(x, n);
			tmp = tmp / 10;
		}

		if (sum==i)
		{
			printf("%d ", i);
		}
	}

	//int money = 0;
	//scanf("%d", &money);             //喝汽水

	//int empty = money;
	//int total = money;

	//while (empty>=2)
	//{
	//	total += empty / 2;
	//	empty = empty / 2 + empty % 2;
	//}
	//printf("%d\n", total);

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };               //交换奇偶
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	
	int k = 0;
	for ( k = 0; k< sz; k++)
	{
		printf("%d ", arr[k]);
	}

	return 0;
}