#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct S
{
	char arr[20];
	int a;
	float b;
};

int main()
{
	//FILE* pf = fopen("test.dat", "w");
	//if (pf==NULL)
	//{
	//	perror("fopen");
	//	return;
	//}

	///*fputc('h', pf);                     //字符输入
	//fputc('a', pf);*/
	//
	///*fputc('h', stdout);*/

	//fputs("abcdef\n", pf);                //文本行输入

	//FILE* pf = fopen("test.dat", "r");
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return;
	//}

	//char arr[10] = { 0 };
	//fgets(arr,4,pf);                         //文本行输出
	//printf("%s\n", arr);                         


/*	struct S s = { "abcde",5,1.0 };
	FILE* pf = fopen("test.dat", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}
	fprintf(pf, "%s %d %f\n", s.arr, s.a, s.b);  */          //格式化输入

	//FILE* pf = fopen("test.dat", "r");
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return;
	//}
	//struct S s;
	//fscanf(pf, "%s %d %f", s.arr, &(s.a), &(s.b));           //格式化输出
	//printf("%s %d %f\n", s.arr, s.a, s.b);


	//FILE* pf = fopen("test.dat", "w");
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return;
	//}
	//struct S s = { "abcde",5,1.0 };
	//fwrite(&s, sizeof(struct S), 1, pf);                        //二进制输入

	FILE* pf = fopen("test.dat", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}
	struct S s;
	fread(&s, sizeof(struct S), 1, pf);                          //二进制输出
	printf("%s %d %f\n", s.arr, s.a, s.b);






	fclose(pf);
	pf = NULL;

	return 0;
}