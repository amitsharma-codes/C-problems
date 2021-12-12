#include<stdio.h>
int main()
{
	int num,count=0,digit;
	scanf("%d%d",&num,&digit);
	if(digit==0 && num==0)
		count=1;
	int temp=num;
	while(temp)
	{
		if(digit==temp%10)
			count++;
		temp/=10;
	}
	printf("%d\n",count);
}
