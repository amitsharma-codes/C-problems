#include<stdio.h>
int main()
{
	unsigned n;
	printf("Enter a number\t");
	scanf("%d",&n);
	if((n&(n-1))==0)
		printf("The number is a power of 2\n");
	else
		printf("The number is not a power of 2\n");
}
