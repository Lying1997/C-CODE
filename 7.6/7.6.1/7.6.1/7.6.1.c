#include <stdio.h>

void test()
	{
		static int a = 1;//static����a������Χ��aû�б����٣��������ڱ䳤��
						 //���ξֲ������ı��������ڣ������ϸı��˱����Ĵ洢����
		                 //����ȫ�ֱ���ʹֻ�����Լ�����Դ�ļ�ʹ�ã��ⲿ�������Ա��ڲ���������
		                 //���κ���ֻ��������Դ�ļ��ڲ�ʹ�ã��ⲿ�������Ա��ڲ�
		a++;
		printf("%d ", a);
	}

int main()
{
	//�ؼ��� �����Ǳ�����
	//
	//register int num = 100;//register�Ĵ����ؼ��֣�����num��ֵ��żĴ���

	//unsigned int num = 100;
	//typedef unsigned int u_int;//typedef����������

	//static ��̬

	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}

	extern int g_val;
	printf("%d\n", g_val);

	extern int Add(int, int);
	int a = 10;
	int b = 20;
	int sum = Add(a,b);
	printf("%d\n", sum);

	return 0;

}