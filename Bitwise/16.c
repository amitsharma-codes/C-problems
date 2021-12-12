#include<stdio.h>
int displayBits(int x);
int main()
{
	int x,y,rem;
	scanf("%d%d",&x,&y);
	for(rem=x;y;y=y<<1)
		rem &= ~y;
	printf("%d\n",rem);
}
int displayBits(int x)
{
	for(int i=31;i>-1;i--)
		printf("%d",(x>>i)&1);
	printf("\n");
}
