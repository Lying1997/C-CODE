
#include <stdio.h>
#include <stddef.h>

struct S
{
	int n;
	struct S* next;

}next;

#pragma pack(2)              //修改偏移值
struct N
{
	char c1;
	int i;
	char c2;
};
#pragma pack()

struct A                   //位段  只放整型家族
{
	int a : 2;           //数组 2  成员a占2个bit位
	int b : 3;
	int c : 4;
};

enum color               //枚举    
{
	red,
	blue,                //枚举类型的可能取值
	yellow
};

union un
{
	char c;
	int i;
};

int main()
{
	printf("%d\n", offsetof(struct N, c1));          //计算偏移量
	printf("%d\n", offsetof(struct N, i));          
	printf("%d\n", offsetof(struct N, c2));          


	enum color c = blue;

	union un u;
	
	printf("%d\n", sizeof(u));

	return 0;
}