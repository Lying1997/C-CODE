#include <stdio.h>

int main()
{
	//��������
	//����+-*/ %ȡ����,��λ<< >>�ƶ�������λ�������ƣ�λ������&��λ��^,��ֵ������+= -=
	//��Ŀ��������ֻ��һ������������-+&�ȣ�
	//��ϵ��������
	//�߼�������;&&�߼���,||�߼���
	//����������(��Ŀ��������exp1?exp2:exp3,exp1�棬����Ϊexp2�Ľ����1�ټ���3���

	int a = 9 / 2;
	printf("%d\n",a);

	float b = 9 / 2.0;
	printf("%f\n", b);

	int c = 2;
	int d = c << 1;

	printf("%d\n", d);

	int x = 10;
	printf("%d\n", !x);//0���Ǽ٣���0���� if(!a)���aΪ��
	//sizeof�����С����λ���ֽڣ���int���ʹ�С��4
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	printf("%d\n", ~c);//~�����ư�λȡ��
	int y = ++x;
	printf("%d\n", y);//++ǰ����++��ʹ�ã�++������ʹ�ú�++
	printf("%d\n", x);
	int z = x++;
	printf("%d\n", z);
	printf("%d\n", x);
	int o = (int)3.14;//()ǿ������ת����תΪ����
	printf("%d\n", o);

	int i = 0;
	int j = 3;
	int max = 0;
	/*if (i > j)
		max = i;
	else
		max = j;*/
	max = i > j ? i : j;//exp1�棬����Ϊexp2�Ľ����1�ټ���3���
	printf("%d\n", max);



	return 0;

}