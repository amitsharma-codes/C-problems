#include<stdio.h>
int main()
{
	int num,cube=0;
	scanf("%d",&num);
	if(num==0)
		cube=0;
	int temp=num;
	while(temp)
	{
		cube += (temp%10)*(temp%10)*(temp%10);; 
		temp/=10;
	}
	printf("%d\n",cube);
}
