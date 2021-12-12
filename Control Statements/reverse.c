#include<stdio.h>
int main()
{
	int rev,num;
	scanf("%d",&num);
	for(;num;num/=10)
		rev= rev*10 + num%10;
	printf("%d\n",rev);
}
