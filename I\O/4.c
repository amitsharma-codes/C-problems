#include<stdio.h>
#include<limits.h>
int main()
{
	int a=4000000000;
	unsigned int b=4000000000;
	printf("a=%d, b=%u\n",a,b);
	printf("a=%d, b=%u, a_min=%d\n",INT_MAX,UINT_MAX,INT_MIN);
	return 0;
}
