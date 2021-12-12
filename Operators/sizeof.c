#include<stdio.h>
void main()
{
	int n=-4;
	long unsigned int result;
	result = sizeof(n)>n;
	printf("result = %lu because sizeof= %lu and (long usigned int)n = %lu \n",result,sizeof(n),(long unsigned int)n);
}
