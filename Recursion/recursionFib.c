#include<stdio.h>
int n1=0,n2=1;
int fib(int);
int main()
{
	int f;
	scanf("%d",&f);
	printf("The Fibonacci of the number %d is %d\n",f,fib(f));	
}
int fib(int x)
{
	if(x==0)
	{
		printf("0\n");
		return 0;
	}
	else if(x==1)
	{
		printf("0 1 ");
		return 0;
	}
	else
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d ",n3);
		if(n3<=x)
			return fib(n3);
	}
}
