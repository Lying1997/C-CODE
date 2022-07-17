
#include <stdio.h>

struct Book                 //结构体
{
	char name[20];               //结构体的成员
	char id[20];
	int price;
};

int main()
{
	/*int num = 10;
	struct  Book b = { "c语言", "123456", "50" };

	struct  Book * pb=&b;
	printf("%s\n", (*pb).name);
	printf("%s\n", (*pb).id);
	
	printf("%s\n", pb->name);
	printf("%s\n", pb->id);

	printf("%s\n", b.name);
	printf("%s\n", b.id);*/
	
	//隐式类型转换

	char a = 3;                                //整型提升,按符号位提升,无符号高位补0
	//00000000000000000000000000000011         //char类型 存8位
	//00000011
	char b = 127;                             //a b char类型，整型提升
	//00000000000000000000000001111111     
	//01111111
	char c = a + b;
	//00000000000000000000000000000011
	//00000000000000000000000001111111
	//00000000000000000000000010000010                //截断
	//10000010 - c
	//11111111111111111111111110000010               //按符号位提升    是补码（补码+1）
	//11111111111111111111111110000001                                  反码（原码取反）
	//10000000000000000000000001111110                                  原码
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
	printf("%u\n", sizeof(+c));                      //自身达不到整型，只要运算，就需要整型提升 char short
	printf("%u\n", sizeof(-c));                      //%u unsigned 无符号数

	char str[] = "hello bit";
	printf("%d %d\n", sizeof(str), strlen(str));
	//10 9
	//strlen  函数 字符串长度，到\0为止，\0不算
	//sizeof  操作符   计算变量/类型所占内存大小，单位字节，\0是字符串内
	

	return 0;

}