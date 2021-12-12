#include<stdio.h>
void main()
{
	int a=5;
	float b=2;
	int r1;
	float r2;
	r1 = a/b;
	r2 = a/b;
	printf("r1 = %d, r2 = %f \n",r1,r2);
	r1 = a/(int)b;
	r2 = (float)a/b;
	printf("r1 = %d, r2 = %f \n",r1,r2);
}
