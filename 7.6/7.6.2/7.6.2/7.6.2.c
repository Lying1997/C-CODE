#include <stdio.h>
//ָ��
//һ���ڴ浥Ԫ����1byte��һ���ڴ浥Ԫ��һ����ţ����ǵ�ַ
int main()
{
	int a = 10;
	printf("%p\n", &a);//��ӡ��ַ
	int * pa = &a;//pa������ŵ�ַ��pa��ָ�����
				  //*˵��pa��ָ�����
	              //int˵��ִ�ж���int����
	char ch = 'w';
	char * pc = &ch;

	*pa = 20;//*�����ò�����*pa����ͨ��pa��ߵĵ�ַ�ҵ�a
	         //�ҵ�a����a��ֵ
	printf("%d\n", a);


	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));//ָ���������ַ��ָ����Ҫ���ռ�ȡ���ڵ�ַ��Ҫ���ռ�
	                               //64λ 64bit 8byte   32λ 32bit 4byte

	return 0;

}