#include<stdio.h>
int main()
{
	int num,sum,n,total=0;
	scanf("%d%d",&num,&n);
	sum=num;
	while(n-1)
	{
		sum= sum*10 + num;
		printf("%d\n",sum);
		total+=sum;
		n--;
	}
	printf("%d\n",total);
}
