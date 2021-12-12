#include<stdio.h>
int displayBits(int x);
int loga2(int);
int main()
{
	int x,pow;
	scanf("%d",&x);
	displayBits(x);
	pow=loga2(x);
	if(pow)
		printf("%d\n",pow);
	else
		printf("Undefined in integer\n");
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
int loga2(int x)
{
	int pos=0,count=0;
	for(int i=0;i<32;i++)
	{
		if((x>>i)&1)
		{
			count++;
			pos=i;
		}
	}
	if(count==1)
		return pos;
	else
		return 0;
}
