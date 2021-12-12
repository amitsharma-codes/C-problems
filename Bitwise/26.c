#include<stdio.h>
int displayBits(int x);
int increment(int i);
int decrement(int d);
int main()
{
	int x;
	scanf("%d",&x);
	displayBits(x);
	x=increment(x);
	displayBits(x);
	x=decrement(x);
	displayBits(x);
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
int increment(int i)
{
	for(int k=0;k<32;k++)
	{
		if((i>>k)&1)
		{
			i^=1<<k;
		}
		else
		{
			i^=1<<k;
			break;
		}
	}
}	
int decrement(int d)
{
	for(int k=0;k<32;k++)
	{
		if(((d>>k)&1) == 0)
		{
			d^=1<<k;
		}
		else
		{
			d^=1<<k;
			break;
		}
	}
}
