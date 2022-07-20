
#include <stdio.h>
#include <assert.h>

//void mstrcpy(char* dest, char* str)
//{
//	while (*str!='\0')
//	{
//		*dest = *str;            //->*dest++ = *str++;  
//		dest++;
//		str++;
//	}
//	*dest = *str;
//}

char* mstrcpy(char* dest, const char* str)
{
	assert(str != NULL);              //���Բ��ǿ�ָ�룬�ձ��� #include <assert.h>
	assert(dest != NULL);
	char* ret = dest;
	while (*dest++ = *str++)        //������\0��\0ֵΪ0,0Ϊ�٣�ѭ��ֹͣ
	{
		;
	}
	return ret;
}

size_t mstrlen(const char* s)       //size_t--unsigned int�޷�������
{
	assert(s); //assert(s != NULL);  s��ָ��0��Ϊ�ٱ���
	int count = 0;
	while (*s++ !='\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char arr1[20] = "xxxxxxxxxxxxx";
	char arr2[] = "hello";
	mstrcpy(arr1, arr2);
	printf("%s\n", arr1);
	printf("%s\n", mstrcpy(arr1, arr2));


	const int num = 10;    //const���α�������Ϊ�����������ܱ��޸ĵ��Ǳ����Ǳ���
	const int* p = &num;   //const����ָ�������*p��ָ��ָ�����ݲ���ͨ��ָ��ı䣬����ָ���������p�����޸�
	/**p = 20;*/ 
	//int* const p = &num;    //const��*�ұ�����p��ָ���������p�����Ըı䣬ָ��ָ�����ݿ��Ըı�
	printf("%d\n", num);

	mstrlen(arr2);
	printf("%d\n", mstrlen(arr2));

	return 0;
}