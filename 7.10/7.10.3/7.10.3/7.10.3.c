
#include <stdio.h>

int main()
{
	int i = 0;
	double sum = 0;                          //结果小数double 算式中带小数点
	int flag = 1;
	for (i = 1;i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}

	printf("%lf\n", sum);

	char arr[] = { 1,2,3,4,5,6,7,8,9};
	int max = arr[0];
	int sz = sizeof(arr);
	for ( i = 1; i < sz; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("%d\n", max);

	//int i = 1;
	//for ( i = 1; i <=9; i++)
	//{
	//	int j = 0;
	//	for ( j = 1; j <=i; j++)
	//	{
	//		int k = j * i;
	//		printf("%d*%d=%d ", j, i, k);
	//	}
	//	printf("\n");
	//}

	return 0;
}