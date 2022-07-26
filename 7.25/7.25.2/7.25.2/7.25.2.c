
#include <stdio.h>
#include <assert.h>

void* my_memcpy(void* arr2, const void* arr1, size_t num)
{
	assert(arr1 && arr2);

	void* ret = arr2;               //�޶�������
	while (num--)
	{
		*(char*)arr2 = *(char*)arr1;
		arr2 = (char*)arr2 + 1;                         //���ֽڿ���
		arr1 = (char*)arr1 + 1;
	}
	return ret;
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int arr2[10] = { 0 };

	my_memcpy(arr2, arr1, 20);   //20���ֽ�


	return 0;
}