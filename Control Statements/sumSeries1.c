#include<stdio.h>
int main()
{
	int num,sum,n,total=0;
	scanf("%d%d",&num,&n);
	sum=num;
	for(i=n;i<
	{
		for(i=n-1;i
		mul*=mul;
		printf("%d\n",sum);
		total+=sum;
		n--;
	}
	printf("%d\n",total);
}
