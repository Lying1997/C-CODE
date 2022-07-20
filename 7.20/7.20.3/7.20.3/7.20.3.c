#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse(char* left, char* right)
{
	while (left<right)
	{
		char tem = 0;
		tem = *left;
		*left = *right;
		*right = tem;

		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	scanf("%s", &arr);
	

	size_t len = strlen(arr);
	reverse(arr,arr+len-1);

	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end!=' ' && *end!='\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
		{
			start=end+1;
		}
		else
			start = end;
	}


	printf("%s\n", arr);

	return 0;
}