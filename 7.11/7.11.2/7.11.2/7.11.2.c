
#include <stdio.h>

void bubble(int arr[],int s)
{
	int l = 0;
	int flag = 1;


	for ( l = 0; l < s-1; l++)
	{
		int j = 0;
		for (j = 0; j < s-1-l; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag==0)
		{
			break;
		}

	}
}


int main()
{
	//int arr1[10] = { 1,2,3,4,5 };      //����������\0
	//char arr2[] = { 'a','b','c' };   //����Ԫ�� a b c  �޽�����־       
	//char arr3[] = "def";             //�ĸ�Ԫ�� d e f \0 

	//char arr[10] = { 0 };
	//arr[4]=5;                 //�±����ò�����

	int i = 0;

	//int* p = arr;              //��������������Ԫ�صĵ�ַ

	//for ( i = 0; i < 10; i++)
	//{
	//	//printf("&arr[%d]=%p\n", i, &arr[i]);                  //%pȡ��ַ

	//	printf("%d ", *p);
	//}

	//��ά
	int arr4[3][4];              //3��4��
	char ch[3][10];

	int arr5[][5] = { {1,2},{3,4},{5,6,7,8} };                 //��������ʡ�ԣ��в�����
	int j = 0;
	for ( i = 0; i < 3; i++)
	{
		for (j = 0; j< 5; j++)
		{
			printf("%d ", arr5[i][j]);
		}
		printf("\n");
	}

	//ð������ �������ڱȽϡ�����
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);           //���鴫�δ���Ԫ�ص�ַ����Ҫ�ȼ����С
	bubble(arr,sz);


	printf("%p\n", &arr);                    //����������Ԫ�ص�ַ  ����������
	printf("%p\n", &arr[0]);                 //1.sizeof(��������  �������������С  2.&arr ȡ��ַ����������ĵ�ַ
	printf("%p\n", arr);                       //�����ַ�洢ʱ����Ԫ�ص�ַ�浫��ַ��С��ͬ
	printf("%p\n", arr + 1);          //������ ��Ԫ�ص�ַ +4
	printf("%p\n", &arr + 1);         //���������ַ  +4*10=40




	return 0;
}


