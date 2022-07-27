
#include <stdio.h>
#include <stddef.h>

struct S
{
	int n;
	struct S* next;

}next;

#pragma pack(2)              //�޸�ƫ��ֵ
struct N
{
	char c1;
	int i;
	char c2;
};
#pragma pack()

struct A                   //λ��  ֻ�����ͼ���
{
	int a : 2;           //���� 2  ��Աaռ2��bitλ
	int b : 3;
	int c : 4;
};

enum color               //ö��    
{
	red,
	blue,                //ö�����͵Ŀ���ȡֵ
	yellow
};

union un
{
	char c;
	int i;
};

int main()
{
	printf("%d\n", offsetof(struct N, c1));          //����ƫ����
	printf("%d\n", offsetof(struct N, i));          
	printf("%d\n", offsetof(struct N, c2));          


	enum color c = blue;

	union un u;
	
	printf("%d\n", sizeof(u));

	return 0;
}