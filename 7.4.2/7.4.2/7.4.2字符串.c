#include <stdio.h>

int main()
{//字符串：用“”括起来的,\0结束标志(在结尾处隐藏）
	"abcdef";
	char arr[] = "hello";


	char arr1[] = "abc";//（abc\0)
	char arr2[] = {'a','b','c'};//（无结束标志）
	char arr3[] = {'a','b','c','\0'};//（有结束标志）


	printf("%s\n",arr1);
	printf("%s\n",arr2);
	printf("%s\n",arr3);


	//求字符串长度
	int len = strlen("abc");//string length
	printf("%d\n", len);

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));//打印随机值
	printf("%d\n", strlen(arr3));

   
 //转义字符:转变了原来意思：如\n换行
    //\ddd：ddd表示1-3个八进制的数字如\130 X
    //\xdd：dd表示2个16进制数字如\x30 0

	printf("c:\test\test,c\n"); //\t意思转换

	printf("%s\n", 'a');

	
	printf("%c\n", '\130');

	printf("%d\n", strlen("c:\test\328\test,c\n"));

	return 0;

}
