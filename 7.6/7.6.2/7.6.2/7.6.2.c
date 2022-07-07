#include <stdio.h>
//指针
//一个内存单元就是1byte，一个内存单元有一个编号，就是地址
int main()
{
	int a = 10;
	printf("%p\n", &a);//打印地址
	int * pa = &a;//pa用来存放地址，pa叫指针变量
				  //*说明pa是指针变量
	              //int说明执行对象int类型
	char ch = 'w';
	char * pc = &ch;

	*pa = 20;//*解引用操作，*pa就是通过pa里边的地址找到a
	         //找到a改了a的值
	printf("%d\n", a);


	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));//指针用来存地址，指针需要多大空间取决于地址需要多大空间
	                               //64位 64bit 8byte   32位 32bit 4byte

	return 0;

}