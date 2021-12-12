#include<stdio.h>
int fact(int);
int main()
{
	int f;
	scanf("%d",&f);
	printf("The Factorial of the number %d is %d\n",f,fact(f));	
}
int fact(int x)
{
	if(x<2)
		return 1;
	return x*fact(x-1);
}
