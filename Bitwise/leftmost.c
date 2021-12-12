#include<stdio.h>
void displayBits(int a);
int main()
{
	int x,mask,p;
	scanf("%d",&x);
	displayBits(x);
	for(int i=31;i>-1;i--)
		if((x>>i)&1)
		{
			p=i;break;
		}
	mask = ~(~0<<p);
	x |= mask;
	displayBits(x);
}
void displayBits(int a)
{
	for(int i=31;i>-1;i--)
	{
		printf("%d",(a>>i)&1);
		if(i%4==0)
			printf(" ");
	}
	printf("\n");
}
