#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//函数  MSDN  www.cplusplus.com


int get_max(int x, int y)         //有返回值 int
{
	int z = 0;
	if (x>y)                           //传值调用
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}
         //形式参数-形参
void swap(int *pa,int *pb)             //函数不需要返回值 void
{                                      //所以为了修改本值，不能创建新参数，需要取地址  函数外部和内部有联系
	int o = 0;
	o = *pa;
	*pa = *pb;                             //传址调用
	*pb = o;
}

int jugsu(int x)
{
	int y = 0;
	for ( y = 2; y < x; y++)
	{
		if (x%y==0)
		{
			return 0;
		}	
	}
    return 1;
}

int lyear(int x)
{
	if (((x%4==0)&&(x%100!=0)) ||(x&400==0) )
	{
		return 1;
	}
	else
	{
		return 0;
	}

	/*return (((x % 4 == 0) && (x % 100 != 0)) || (x & 400 == 0));*/
}

//二分查找
int que(char a[], int k, int s)
{
	int left = 0;
	int right = s - 1;
	
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (a[mid]>k)
		{
			right = mid-1;
		}
		else if (k > a[mid])
		{
			left = mid+1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	//库函数
	/*char arr1[10] = { 0 };
	char arr2[] = "hello";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);

	char arr[] = "hello";
	memset(arr, 'x', 3);
	printf("%s\n", arr);*/


	//自定义函数    函数名 函数参数 返回类型
	/*int a = 10;
	int b = 20;*/

	/*int max = get_max(a, b);

	printf("%d", max);*/


	//swap(&a, &b);     //实际参数-实参：常量，变量，函数，表达式，有确定值
	//
	//printf("%d %d\n", a, b);


	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;                  //[]里是下标，数组中某个具体值
	int sz = sizeof(arr) / sizeof(arr[0]);    //先计算
	int q = que(arr, key, sz);               //数组实参传递到形参仅传递数组第一个值的地址

	if (q!=-1)
	{
		printf("找到了：%d", q);
	}
	else
	{
		printf("找不到");
	}
	


	return 0;
}