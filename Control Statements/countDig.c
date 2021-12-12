#include<stdio.h>
int main()
{
	int num,count=0;
	scanf("%d",&num);
	if(num==0)
		count=1;
	int temp=num;
	while(temp)
	{
		temp/=10;
		count++;
	}
	printf("%d\n",count);
}
