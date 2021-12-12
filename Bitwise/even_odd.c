#include<stdio.h>
int main()
{
	int num;
	int mask=0x1;
	printf("Enter a number : ");
	scanf("%d",&num);
	if((num & mask)==0)
		printf("The number is even\n");
	else 
		printf("The number is odd\n");
}
