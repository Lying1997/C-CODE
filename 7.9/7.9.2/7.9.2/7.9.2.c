#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//����  MSDN  www.cplusplus.com


int get_max(int x, int y)         //�з���ֵ int
{
	int z = 0;
	if (x>y)                           //��ֵ����
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}
         //��ʽ����-�β�
void swap(int *pa,int *pb)             //��������Ҫ����ֵ void
{                                      //����Ϊ���޸ı�ֵ�����ܴ����²�������Ҫȡ��ַ  �����ⲿ���ڲ�����ϵ
	int o = 0;
	o = *pa;
	*pa = *pb;                             //��ַ����
	*pb = o;
}

int jugsu(int x)
{
	int y = 0;
	for ( y = 2; y < x; y++)
	{
		if (x%y==0)
		{
			return 0;
		}	
	}
    return 1;
}

int lyear(int x)
{
	if (((x%4==0)&&(x%100!=0)) ||(x&400==0) )
	{
		return 1;
	}
	else
	{
		return 0;
	}

	/*return (((x % 4 == 0) && (x % 100 != 0)) || (x & 400 == 0));*/
}

//���ֲ���
int que(char a[], int k, int s)
{
	int left = 0;
	int right = s - 1;
	
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (a[mid]>k)
		{
			right = mid-1;
		}
		else if (k > a[mid])
		{
			left = mid+1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	//�⺯��
	/*char arr1[10] = { 0 };
	char arr2[] = "hello";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);

	char arr[] = "hello";
	memset(arr, 'x', 3);
	printf("%s\n", arr);*/


	//�Զ��庯��    ������ �������� ��������
	/*int a = 10;
	int b = 20;*/

	/*int max = get_max(a, b);

	printf("%d", max);*/


	//swap(&a, &b);     //ʵ�ʲ���-ʵ�Σ����������������������ʽ����ȷ��ֵ
	//
	//printf("%d %d\n", a, b);


	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;                  //[]�����±꣬������ĳ������ֵ
	int sz = sizeof(arr) / sizeof(arr[0]);    //�ȼ���
	int q = que(arr, key, sz);               //����ʵ�δ��ݵ��βν����������һ��ֵ�ĵ�ַ

	if (q!=-1)
	{
		printf("�ҵ��ˣ�%d", q);
	}
	else
	{
		printf("�Ҳ���");
	}
	


	return 0;
}