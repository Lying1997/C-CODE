
#include <stdio.h>
#include <string.h>

int main()
{
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));      //��������
	//printf("%d\n", sizeof(a + 0));    //��һ��Ԫ�ص�ַ  4/8
	//printf("%d\n", sizeof(*a));     //��һ��Ԫ��  4
	//printf("%d\n", sizeof(a + 1));    // 4/8
	//printf("%d\n", sizeof(a[1]));   //  4

	//printf("%d\n", sizeof(&a));        //4/8  ��Ȼ�����������ַ����ֻҪ�ǵ�ַ������4/8
	//printf("%d\n", sizeof(*&a));       //16   &a���������飬���Խ�����Ҳ���������飬�������������С
	//printf("%d\n", sizeof(&a + 1));      //4/8  ������������ĵ�ַ����һ����ַ
	//printf("%d\n", sizeof(&a[0]));
	//printf("%d\n", sizeof(&a[0] + 1));

	//char b[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(b));
	//printf("%d\n", sizeof(b + 0));
	//printf("%d\n", sizeof(*b));
	//printf("%d\n", sizeof(b[1]));
	//printf("%d\n", sizeof(&b));
	//printf("%d\n", sizeof(&b + 1));
	//printf("%d\n", sizeof(&b[0] + 1));

	//printf("%d\n", strlen(b));         //���ֵ��������û��\0
	//printf("%d\n", strlen(b + 0));
	//printf("%d\n", strlen(*b));        //strlen���յ�ַ������������
	//printf("%d\n", strlen(b[1]));
	//printf("%d\n", strlen(&b));          //���ֵ
	//printf("%d\n", strlen(&b + 1));
	//printf("%d\n", strlen(&b[0] + 1));

	//char c[] = "abcdef";
	//printf("%d\n", sizeof(c));         //�ַ���\0,���Լ���\0����С��7
	//printf("%d\n", sizeof(c + 0));
	//printf("%d\n", sizeof(*c));
	//printf("%d\n", sizeof(c[1]));
	//printf("%d\n", sizeof(&c));
	//printf("%d\n", sizeof(&c + 1));
	//printf("%d\n", sizeof(&c[0] + 1));

	//printf("%d\n", strlen(c));         //�ַ���\0   6
	//printf("%d\n", strlen(c + 0));
	//printf("%d\n", strlen(*c));        //strlen���յ�ַ������������
	//printf("%d\n", strlen(c[1]));
	//printf("%d\n", strlen(&c));
	//printf("%d\n", strlen(&c + 1));     //���ֵ�����������ַ+1����������֮��
	//printf("%d\n", strlen(&c[0] + 1));

	//char* p = "abcdef";
	//printf("%d\n", sizeof(p));
	//printf("%d\n", sizeof(p + 1));
	//printf("%d\n", sizeof(*p));     //*pָ����Ԫ�� 1
	//printf("%d\n", sizeof(p[0]));   //p[0]=*(p+0)
	//printf("%d\n", sizeof(&p));
	//printf("%d\n", sizeof(&p + 1));
	//printf("%d\n", sizeof(&p[0] + 1));

	//printf("%d\n", strlen(p));
	//printf("%d\n", strlen(p + 1));
	//printf("%d\n", strlen(*p));     //*pָ����Ԫ�� 
	//printf("%d\n", strlen(p[0]));   //p[0]=*(p+0)
	//printf("%d\n", strlen(&p));           //p�ĵ�ַ�����ֵ
	//printf("%d\n", strlen(&p + 1));
	//printf("%d\n", strlen(&p[0] + 1));

	//int d[3][4] = { 0 };
	//printf("%d\n", sizeof(d));                   //48
	//printf("%d\n", sizeof(d[0][0]));             //4
	//printf("%d\n", sizeof(d[0]));                //16  d[0]�������Ϊ��һ�е������������Ա�ʾ������һ��
	//printf("%d\n", sizeof(d[0] + 1));              //4
	//printf("%d\n", sizeof(*(d[0] + 1)));           //4
	//printf("%d\n", sizeof(d + 1));                 //��ά������������Ԫ�ص�ַ������һ�еĵ�ַ����ַ����4/8
	//printf("%d\n", sizeof(*(d + 1)));              //16
	//printf("%d\n", sizeof(&d[0] + 1));
	//printf("%d\n", sizeof(*(&d[0] + 1)));
	//printf("%d\n", sizeof(*d));
	//printf("%d\n", sizeof(d[3]));            //d[3]��ʵ�ǵ���������������sizeof�����ڱ��ʽ�����㣬���Կ���ͨ���������С16



	int a[5][5];                                  //��ά������Ԫ���ǵ�һ�� a int��*��[5]
	int(*p)[4];
	p = a;
	printf("%p %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);   //p[4]���Կ���������
	//����ָ������õ������м�Ԫ�صĸ���
	//%p ��ӡ��ַ����Ѳ��뵱�ɵ�ֱַ�Ӵ�ӡ����  %d��ӡ����


	char* c[] = { "enter","new","point","first" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;

	printf("%s\n",**++cpp );
	printf("%s\n", *--*++cpp+3);     //er
	printf("%s\n", *cpp[-2]+3);
	printf("%s\n", cpp[-1][-1]+1);
	//cpp[1]=*(cpp+1)   ++�Ժ������   *--*++���ȼ�����+3���������+3


	return 0;
}