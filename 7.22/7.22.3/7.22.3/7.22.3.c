
#include <stdio.h>
#include <stdlib.h>

int com(void* e1, void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

struct stu
{
	char name[20];
	int age;
};


void com1(void* e1, void* e2)
{
	return ((struct stu*)e1)->name - ((struct stu*)e2)->name;
}

void test1()
{
	struct stu s[3] = { {"li",20},{"wang",25},{"zhang",30} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), com1);
}


int main()
{
	/*int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, sz, sizeof(arr[0]), com);*/


	test1();


	return 0;
}