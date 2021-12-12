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
	for(int i=2;i<=x/2;i++)
	{
		if((x%i)==0)
			return 0;
	}
	return 1;
}
