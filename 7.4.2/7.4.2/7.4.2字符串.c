#include <stdio.h>

int main()
{//�ַ������á�����������,\0������־(�ڽ�β�����أ�
	"abcdef";
	char arr[] = "hello";


	char arr1[] = "abc";//��abc\0)
	char arr2[] = {'a','b','c'};//���޽�����־��
	char arr3[] = {'a','b','c','\0'};//���н�����־��


	printf("%s\n",arr1);
	printf("%s\n",arr2);
	printf("%s\n",arr3);


	//���ַ�������
	int len = strlen("abc");//string length
	printf("%d\n", len);

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));//��ӡ���ֵ
	printf("%d\n", strlen(arr3));

   
 //ת���ַ�:ת����ԭ����˼����\n����
    //\ddd��ddd��ʾ1-3���˽��Ƶ�������\130 X
    //\xdd��dd��ʾ2��16����������\x30 0

	printf("c:\test\test,c\n"); //\t��˼ת��

	printf("%s\n", 'a');

	
	printf("%c\n", '\130');

	printf("%d\n", strlen("c:\test\328\test,c\n"));

	return 0;

}
