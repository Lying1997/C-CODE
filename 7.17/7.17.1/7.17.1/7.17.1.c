
#include <stdio.h>

struct Book                 //�ṹ��
{
	char name[20];               //�ṹ��ĳ�Ա
	char id[20];
	int price;
};

int main()
{
	/*int num = 10;
	struct  Book b = { "c����", "123456", "50" };

	struct  Book * pb=&b;
	printf("%s\n", (*pb).name);
	printf("%s\n", (*pb).id);
	
	printf("%s\n", pb->name);
	printf("%s\n", pb->id);

	printf("%s\n", b.name);
	printf("%s\n", b.id);*/
	
	//��ʽ����ת��

	char a = 3;                                //��������,������λ����,�޷��Ÿ�λ��0
	//00000000000000000000000000000011         //char���� ��8λ
	//00000011
	char b = 127;                             //a b char���ͣ���������
	//00000000000000000000000001111111     
	//01111111
	char c = a + b;
	//00000000000000000000000000000011
	//00000000000000000000000001111111
	//00000000000000000000000010000010                //�ض�
	//10000010 - c
	//11111111111111111111111110000010               //������λ����    �ǲ��루����+1��
	//11111111111111111111111110000001                                  ���루ԭ��ȡ����
	//10000000000000000000000001111110                                  ԭ��
	printf("%d\n", c);

	char x = 0xb6;
	short y = 0xb600;
	int z = 0xb6000000;

	if (x==0xb6)
	{
		printf("x");
	}
	if (y == 0xb600)
	{
		printf("y");
	}
	if (z == 0xb6000000)
	{
		printf("z\n");
	}

	char p = 1;
	printf("%u\n", sizeof(c));                  
	printf("%u\n", sizeof(+c));                      //����ﲻ�����ͣ�ֻҪ���㣬����Ҫ�������� char short
	printf("%u\n", sizeof(-c));                      //%u unsigned �޷�����

	char str[] = "hello bit";
	printf("%d %d\n", sizeof(str), strlen(str));
	//10 9
	//strlen  ���� �ַ������ȣ���\0Ϊֹ��\0����
	//sizeof  ������   �������/������ռ�ڴ��С����λ�ֽڣ�\0���ַ�����
	

	return 0;

}