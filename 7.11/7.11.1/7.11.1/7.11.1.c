
#include <stdio.h>

int mstrlen(char* ar)
{
	int count = 0;
	while (*ar!='\0')
	{
		count++;
		ar++;
	}
	return count;
}

//void  reverse(char* a,int s)
//{
//	int left = 0;
//	int right = s - 1;
//
//	while (left<right)
//	{
//		char tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		left++;
//		right--;
//	}
//}
void reverse(char* a)
{
	char tmp = *a;
	int len =mstrlen(a);
	*a = *(a + len - 1);
	*(a+len - 1) = '\0';
	if (mstrlen(a+1)>=2)
	{
        reverse(a + 1);
	   
	}
	 *(a + len - 1) = tmp;
}

int digitsum(int x)
{
	int s = 0;
	if (x>0)
	{
		s = x%10 +digitsum(x/10);
	}
	return s;
}

double pow(int x, int y)
{
	if (y == 0)
	{
		return 1.0;
	}
	else if (y > 0)
	{
		return x * pow(x, y - 1);
	}
	else 
	{
        return 1.0 / (pow(x, -y));
	}
	    
}


int main()
{
	char arr[] = "abcdef";
	reverse(arr);
	printf("%s\n", arr);

	int num = 869;
	int sum = digitsum(num);
	printf("%d\n", sum);

	int p = 2;
	int q = 5;
	double pq = pow(p, q);
	printf("%lf\n", pq);

	return 0;
}