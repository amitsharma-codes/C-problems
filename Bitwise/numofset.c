#include<stdio.h>
int main()
{
	int n;
	int bit=31,count=0,a;
	printf("Enter the number\t");
	scanf("%d",&n);
	while(bit!=-1)
	{
		a=(n>>bit)&1;
		if(a==1)
			count++;
		bit--;
	}
	printf("The number of set bits are: %d\n",count);
	bit=31;
	while(bit!=-1)
	{
		printf("%d",(n>>bit)&1);
		bit--;
	}
	printf("\n");
}
