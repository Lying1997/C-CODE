
#include <stdio.h>
#include <string.h>

int main()
{
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));      //整个数组
	//printf("%d\n", sizeof(a + 0));    //第一个元素地址  4/8
	//printf("%d\n", sizeof(*a));     //第一个元素  4
	//printf("%d\n", sizeof(a + 1));    // 4/8
	//printf("%d\n", sizeof(a[1]));   //  4

	//printf("%d\n", sizeof(&a));        //4/8  虽然是整个数组地址，但只要是地址，就是4/8
	//printf("%d\n", sizeof(*&a));       //16   &a是整个数组，所以解引用也是整个数组，计算整个数组大小
	//printf("%d\n", sizeof(&a + 1));      //4/8  跳过整个数组的地址的下一个地址
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

	//printf("%d\n", strlen(b));         //随机值，数组里没有\0
	//printf("%d\n", strlen(b + 0));
	//printf("%d\n", strlen(*b));        //strlen接收地址，所以有问题
	//printf("%d\n", strlen(b[1]));
	//printf("%d\n", strlen(&b));          //随机值
	//printf("%d\n", strlen(&b + 1));
	//printf("%d\n", strlen(&b[0] + 1));

	//char c[] = "abcdef";
	//printf("%d\n", sizeof(c));         //字符串\0,所以加上\0，大小是7
	//printf("%d\n", sizeof(c + 0));
	//printf("%d\n", sizeof(*c));
	//printf("%d\n", sizeof(c[1]));
	//printf("%d\n", sizeof(&c));
	//printf("%d\n", sizeof(&c + 1));
	//printf("%d\n", sizeof(&c[0] + 1));

	//printf("%d\n", strlen(c));         //字符串\0   6
	//printf("%d\n", strlen(c + 0));
	//printf("%d\n", strlen(*c));        //strlen接收地址，所以有问题
	//printf("%d\n", strlen(c[1]));
	//printf("%d\n", strlen(&c));
	//printf("%d\n", strlen(&c + 1));     //随机值，整个数组地址+1，整个数组之后
	//printf("%d\n", strlen(&c[0] + 1));

	//char* p = "abcdef";
	//printf("%d\n", sizeof(p));
	//printf("%d\n", sizeof(p + 1));
	//printf("%d\n", sizeof(*p));     //*p指向首元素 1
	//printf("%d\n", sizeof(p[0]));   //p[0]=*(p+0)
	//printf("%d\n", sizeof(&p));
	//printf("%d\n", sizeof(&p + 1));
	//printf("%d\n", sizeof(&p[0] + 1));

	//printf("%d\n", strlen(p));
	//printf("%d\n", strlen(p + 1));
	//printf("%d\n", strlen(*p));     //*p指向首元素 
	//printf("%d\n", strlen(p[0]));   //p[0]=*(p+0)
	//printf("%d\n", strlen(&p));           //p的地址，随机值
	//printf("%d\n", strlen(&p + 1));
	//printf("%d\n", strlen(&p[0] + 1));

	//int d[3][4] = { 0 };
	//printf("%d\n", sizeof(d));                   //48
	//printf("%d\n", sizeof(d[0][0]));             //4
	//printf("%d\n", sizeof(d[0]));                //16  d[0]可以理解为第一行的数组名，所以表示整个第一行
	//printf("%d\n", sizeof(d[0] + 1));              //4
	//printf("%d\n", sizeof(*(d[0] + 1)));           //4
	//printf("%d\n", sizeof(d + 1));                 //二维数组名代表首元素地址，即第一行的地址，地址就是4/8
	//printf("%d\n", sizeof(*(d + 1)));              //16
	//printf("%d\n", sizeof(&d[0] + 1));
	//printf("%d\n", sizeof(*(&d[0] + 1)));
	//printf("%d\n", sizeof(*d));
	//printf("%d\n", sizeof(d[3]));            //d[3]其实是第四行数组名，但sizeof括号内表达式不计算，所以可以通过类型算大小16



	int a[5][5];                                  //二维数组首元素是第一行 a int（*）[5]
	int(*p)[4];
	p = a;
	printf("%p %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);   //p[4]可以看成数组名
	//两个指针相减得到的是中间元素的个数
	//%p 打印地址，会把补码当成地址直接打印出来  %d打印个数


	char* c[] = { "enter","new","point","first" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;

	printf("%s\n",**++cpp );
	printf("%s\n", *--*++cpp+3);     //er
	printf("%s\n", *cpp[-2]+3);
	printf("%s\n", cpp[-1][-1]+1);
	//cpp[1]=*(cpp+1)   ++以后别忘了   *--*++优先级高于+3，所以最后+3


	return 0;
}