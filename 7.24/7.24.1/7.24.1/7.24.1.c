
#include <stdio.h>
#include <string.h>

swap(char* buf1, char* buf2, int wid)
{
	int i = 0;
	for ( i = 0; i < wid; i++)
	{
		int tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;

	}
}

void sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for ( i = 0; i < sz-1; i++)
	{
		int j = 0;
		for ( j = 0; j < sz-1-i; j++)
		{
			if (cmp((char*)base+j*width, (char*)base + (j + 1) * width)>0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}


int com(void* e1, void* e2)
{
	return *(int*)e1 - *(int*)e2;
}




int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	sort(arr, sz, sizeof(arr[0]), com);



	return 0;
}