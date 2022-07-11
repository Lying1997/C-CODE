
#include <stdio.h>

void bubble(int arr[],int s)
{
	int l = 0;
	int flag = 1;


	for ( l = 0; l < s-1; l++)
	{
		int j = 0;
		for (j = 0; j < s-1-l; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag==0)
		{
			break;
		}

	}
}


int main()
{
	//int arr1[10] = { 1,2,3,4,5 };      //整型数组无\0
	//char arr2[] = { 'a','b','c' };   //三个元素 a b c  无结束标志       
	//char arr3[] = "def";             //四个元素 d e f \0 

	//char arr[10] = { 0 };
	//arr[4]=5;                 //下标引用操作符

	int i = 0;

	//int* p = arr;              //数组名是数组首元素的地址

	//for ( i = 0; i < 10; i++)
	//{
	//	//printf("&arr[%d]=%p\n", i, &arr[i]);                  //%p取地址

	//	printf("%d ", *p);
	//}

	//二维
	int arr4[3][4];              //3行4列
	char ch[3][10];

	int arr5[][5] = { {1,2},{3,4},{5,6,7,8} };                 //行数可以省略，列不可以
	int j = 0;
	for ( i = 0; i < 3; i++)
	{
		for (j = 0; j< 5; j++)
		{
			printf("%d ", arr5[i][j]);
		}
		printf("\n");
	}

	//冒泡排序 两两相邻比较、交换
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);           //数组传参传首元素地址，故要先计算大小
	bubble(arr,sz);


	printf("%p\n", &arr);                    //数组名是首元素地址  有两个例外
	printf("%p\n", &arr[0]);                 //1.sizeof(数组名）  计算整个数组大小  2.&arr 取地址是整个数组的地址
	printf("%p\n", arr);                       //数组地址存储时按首元素地址存但地址大小不同
	printf("%p\n", arr + 1);          //数组名 首元素地址 +4
	printf("%p\n", &arr + 1);         //整个数组地址  +4*10=40




	return 0;
}


