#include<stdio.h>
void displayBits(int);
int main()
{
	int p,n,x,mask;
AGAIN:
	scanf("%d%d%d",&x,&n,&p);
	if(n>0)
		mask = ~(~0<<(p-n+1))<<n;
	else if(n<0)
		mask = ~(~0<<(p+n+1))<<n;
	if(n>p)
		goto AGAIN;
	displayBits(mask);
	displayBits(x);
	x &= ~mask;
	displayBits(x);
}
void displayBits(int x)
{
	for(int i=31;i>-1;i--)
		printf("%d",(x>>i)&1);
	printf("\n");
}
