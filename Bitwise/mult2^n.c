#include<stdio.h>
void displayBits(int a);
int main()
{
	int num,n;
	printf("Enter the number and power of 2 :");
	scanf("%u%u",&num,&n);
	while(n>0)
	{
		num = num<<1;
	n--;	
	}
	printf("%d",num);
}
void displayBits(int a)
{
	int bit=31;
	while(bit!=-1)
	{
		printf("%d",(a>>bit)&1);
		bit--;
	}
	printf("\n");
}

