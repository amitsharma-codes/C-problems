#include<stdio.h>
int SumDiv(int x);
int main()
{
	int n,min,max;
	scanf("%d%d",&min,&max);
	for(n=min;n<=max;n++)
		if(n==SumDiv(n))
			printf("%d ",n);
	printf("\n");
}
int SumDiv(int x)
{
	int sum=0;
	for(int i=1;i<=x/2;i++)
	{
		if((x%i)==0)
		{
			sum+=i;
		}
	}
	return sum;
}
