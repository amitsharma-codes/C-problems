#include<stdio.h>
void main()
{
        unsigned int a,b;
	scanf("%u,%u",&a,&b);
	a>b?printf("a is the highest number\n"):printf("b is the highest number\n");
	a>b?++a:++b;printf("a= %u,b= %u \n",a,b);
}
