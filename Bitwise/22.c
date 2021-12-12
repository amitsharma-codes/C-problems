#include<stdio.h>
int displayBits(int x);
int main()
{
	int x,y,z=0,mask,p;
	scanf("%d%d%d",&x,&y,&p);
	displayBits(x);
	displayBits(y);
	mask = ~(~0<<(p+1));
	displayBits(mask);
	z = x&mask | y&~mask;
        displayBits(z);	
}
int displayBits(int x)
{
	for(int i=31;i>-1;i--)
	{
		printf("%d",(x>>i)&1);
		if(i%4==0)
			printf(" ");
	}
	printf("\n");
}
