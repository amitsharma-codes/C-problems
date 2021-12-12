#include<stdio.h>
void main()
{
	int a=1;
	unsigned int b=-2;
	printf("a= %d,b = %u \n",a,b);
	a = -1;
	b = 2;
	printf("a = %u,b = %u \n",(unsigned int)a,b);
	a = -1;
       b = -2;
printf("a= %d,b = %d \n",a,(int)b);
}
