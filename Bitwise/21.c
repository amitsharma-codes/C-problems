#include<stdio.h>
void range(int,int,int);
void displayBits(int);
int main()
{
	int a,p,n;
	scanf("%d%d%d",&a,&n,&p);
	displayBits(a);
	range(a,p,n);
}
void displayBits(int x)
{
	for(int i=31;i>-1;i--)
		printf("%d",(x>>i)&1);
	printf("\n");
}
void range(int x,int p,int n)
{
	int mask;
	mask = ~(~0<<(p-n+1))<<n;
        x=x>>(p-n+1);
        x &= (mask>>(p-n+1));
        displayBits(x);	
}
