#include<stdio.h>
int sumDig(int n);
int main()
{
	int x;
	scanf("%d",&x);
	printf("\b=%d\n",sumDig(x));
}
int sumDig(int n)
{
	if(!n)
		return 0;
	printf("%d+",n%10);
	return n%10 + sumDig(n/10);
}
