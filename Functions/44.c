#include<stdio.h>
int SumDiv(int x);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",SumDiv(n));
}
int SumDiv(int x)
{
	int sum=0;
	for(int i=1;i<=x/2;i++)
	{
		if((x%i)==0)
		{
			sum+=i;
			printf("%d ",i);
		}
	}
	printf("\n");
	return sum;
}
