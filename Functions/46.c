#include<stdio.h>
int SumDiv(int x);
int amicable(int x,int y);
int main()
{
	int n,min,max;
	scanf("%d%d",&min,&max);
	for(n=min;n<=max;n++)
	{
		for(int i=0;i<max;i++)
			if(amicable(n,i))
				printf("%d %d\n",n,i);
	}
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
int amicable(int x,int y)
{
	if((SumDiv(x)==y) && (SumDiv(y)==x))
		return 1;
	return 0;
}
