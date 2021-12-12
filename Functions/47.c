#include<stdio.h>
int SumDiv(int x);
int amicable(int x,int y);
int main()
{
	int n,min,max,temp,count=0;
	scanf("%d%d",&min,&max);
	for(n=min;n<=max;n++)
	{
		if(temp==n)
			n++;
		for(int i=0;i<max;i++)
		{
			printf("%d ",count++);
			if(amicable(n,i)==1)
				printf("perfect %d\n",n);
			else if(amicable(n,i)==2)
			{
				printf("amicable %d %d\n",n,i);
				temp=i;
			}
		}
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
	{
		if(x==y)
			return 1;
		else
			return 2;
	}
	return 0;
}
