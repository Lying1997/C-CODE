
#include <stdio.h>
//


int main()
{
	int a = 10;
	int* pa = &a;      //取地址取四个字节中第一个字节的地址
	*pa = 20;         

	char* pc;
	float* pf;
	printf("%d\n", sizeof(pc));          //指针大小32位平台4字节，64位平台8字节
	printf("%d\n", sizeof(pf));          

	/*char* pa = 0;*/          //指针类型决定解引用的权限有多大 例char只能1个字节

	int arr[10] = { 0 };
	int* p = arr;
	char* pd = arr;
	printf("%p\n", p);
	printf("%p\n", p+1);       //指针类型决定指针一步走多远（步长）
	printf("%p\n", pd);
	printf("%p\n", pd+1);

	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		*(p + i)=1;            //下标为i的地址
	}

	return 0;
}