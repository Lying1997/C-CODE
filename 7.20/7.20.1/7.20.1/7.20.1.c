
#include <stdio.h>
#include <assert.h>

//void mstrcpy(char* dest, char* str)
//{
//	while (*str!='\0')
//	{
//		*dest = *str;            //->*dest++ = *str++;  
//		dest++;
//		str++;
//	}
//	*dest = *str;
//}

char* mstrcpy(char* dest, const char* str)
{
	assert(str != NULL);              //断言不是空指针，空报错 #include <assert.h>
	assert(dest != NULL);
	char* ret = dest;
	while (*dest++ = *str++)        //拷贝到\0，\0值为0,0为假，循环停止
	{
		;
	}
	return ret;
}

size_t mstrlen(const char* s)       //size_t--unsigned int无符号整型
{
	assert(s); //assert(s != NULL);  s空指针0，为假报错
	int count = 0;
	while (*s++ !='\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char arr1[20] = "xxxxxxxxxxxxx";
	char arr2[] = "hello";
	mstrcpy(arr1, arr2);
	printf("%s\n", arr1);
	printf("%s\n", mstrcpy(arr1, arr2));


	const int num = 10;    //const修饰变量，成为常变量，不能被修改但是本质是变量
	const int* p = &num;   //const修饰指针变量，*p，指针指向内容不能通过指针改变，但是指针变量本身p可以修改
	/**p = 20;*/ 
	//int* const p = &num;    //const放*右边修饰p，指针变量本身p不可以改变，指针指向内容可以改变
	printf("%d\n", num);

	mstrlen(arr2);
	printf("%d\n", mstrlen(arr2));

	return 0;
}