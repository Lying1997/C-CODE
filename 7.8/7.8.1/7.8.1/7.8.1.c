#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ѭ�����

int main()
{
	//int i = 1;                              //��ʼ��
	//while (i <= 10)                         //�жϲ��� 
	//{
	//	//if (i == 5)
	//	//	break;//bresk����������ֹѭ��

	//	//if (i == 5)
	//	//	continue;//continue ��������ѭ��continue����Ĵ��룬ֱ��ȥ�жϲ����Ƿ������һ��ѭ��
 //       /*printf("%d\n", i);
	//i++;*/                                  //��������
	//}
	
	//int ch = getchar();
	///*printf("%c\n", ch);*/
	//putchar(ch);//���һ���ַ�

	//int ch = 0;
	//while ((ch = getchar()) != EOF)//!=������  EOF end of file �ļ�������־
	//{
	//	putchar(ch);

	//}

	//char password[20] = { 0 };
	//printf("����������:>");
	//scanf("%s", password);
	//printf("��ȷ�����루Y\N��:>");
	//
	//////��������
	////getchar();ֻ������һ��
	//int tmp = 0;
	//while ((tmp = getchar()) != '\n')  //ѭ��������������\n����Ϊֹ
	//{
	//	;
	//}
	//int ch = getchar();
	//if (ch == 'Y')
	//{
	//	printf("ȷ�ϳɹ�\n");
	//}
	//else
	//{
	//	printf("ȷ��ʧ��\n");
	//}


	/*int ch = 0;                       
	while ((ch=getchar())!=EOF)      
	{
		if (ch < '0' || ch>'9')
			continue;

		putchar(ch);
	}*/


	
	//for(���ʽ1��2��3)
	//forѭ�������������ҿ���i=0��i<10;i++)

	int i = 0;
	for (i = 1; i <= 10; i++)	
	{
		/*if (i == 5)
			break;*/
		if (i == 5)
			continue;
		
		printf("%d ", i);
	}

	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)//ѭ��0�Σ��ж����k=0����0��ֵ��k�����ʽֵΪ0-���ʽΪ�٣�ѭ��0��
		k++;

	return 0;
	
}