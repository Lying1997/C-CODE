
#include <stdio.h>
//


int main()
{
	int a = 10;
	int* pa = &a;      //ȡ��ַȡ�ĸ��ֽ��е�һ���ֽڵĵ�ַ
	*pa = 20;         

	char* pc;
	float* pf;
	printf("%d\n", sizeof(pc));          //ָ���С32λƽ̨4�ֽڣ�64λƽ̨8�ֽ�
	printf("%d\n", sizeof(pf));          

	/*char* pa = 0;*/          //ָ�����;��������õ�Ȩ���ж�� ��charֻ��1���ֽ�

	int arr[10] = { 0 };
	int* p = arr;
	char* pd = arr;
	printf("%p\n", p);
	printf("%p\n", p+1);       //ָ�����;���ָ��һ���߶�Զ��������
	printf("%p\n", pd);
	printf("%p\n", pd+1);

	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		*(p + i)=1;            //�±�Ϊi�ĵ�ַ
	}

	return 0;
}