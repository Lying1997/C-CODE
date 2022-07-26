
#include <stdio.h>
#include <string.h>

int find(int arr[3][3], int* x, int* y, int k)
{
	int i = 0;
	int j = *y - 1;

	while (i<*x && j>=0)
	{
		if (arr[i][j] > k)
		{
			j--;
		}
		else if (arr[i][j] < k)
		{
			i++;
		}
		else 
		{ 
			*x = i;
			*y = j;
			return 1;
		}
			
	}
	return 0;
}

void rotate(char* str, int k)
{
	int n = strlen(str);
	int i = 0;
	for ( i = 0; i < k; i++)
	{
		int j = 0;
		char tmp = *str;
		for ( j = 0; j < n; j++)
		{
			*(str + j) = *(str + j + 1);
		}
		*(str + n - 1) = tmp;
	}
}


int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;

	int x = 3;
	int y = 3;
	int ret=find(arr, &x, &y, k);

	if (ret==1)
	{
		printf("找到了\n");
		printf("%d %d\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}


	char a[10] = "ABCDEFG";
	int h = 4;
	rotate(a, h);
	printf("%s\n", a);



	return 0;
}