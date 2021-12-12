#include<stdio.h>
int displayBits(int x);
int main()
{
	int x;
	scanf("%d",&x);
	displayBits(x);
	for(int i=0;i<32;i++)
		if((x>>i)&1)
		{
			x&=1<<i;
			break;
		}
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
