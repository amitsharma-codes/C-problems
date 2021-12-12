#include<stdio.h>
int display(int n);
int main()
{
	int n;scanf("%d",&n);
	printf("\b=%d",display(n));printf("\n");
}
int display(int n)
{
	if(n==0)
		return 0;
	printf("%d+",n);
	return n+display(n-1);
}
