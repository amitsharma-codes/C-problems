#include<stdio.h>
int displayBits(int x);
int main()
{
	int x,count=0;
	scanf("%d",&x);
	displayBits(x);
	x+=1;
	for(int i=0;i<32;i++)
		if((x>>i)&1)
			count++;
	if(count == 1)
		printf("The number %d is of the form 2^n -1\n",x-1);
	else
		printf("The number %d is not of the form 2^n -1\n",x-1);
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
