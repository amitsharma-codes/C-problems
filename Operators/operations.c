#include<stdio.h>
void main()
{
	int a=4,b=2;
	int c;
	b = a*b/(a=b);
	printf("b = a*b/a=b is %d \n",b);
	c = a*b/(a=b);
	printf("c = a*b/a=b is %d \n",c);
	c = a=b/a*b;
	printf("c = a=b/a*b is %d \n",c);
}
