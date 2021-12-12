#include<stdio.h>
void displayBits(int a);
int main()
{
	int num,n,i;
	printf("Enter the num and from the position to be rotated\n");
        scanf("%d%d",&num,&n);	
	displayBits(num);
	for(i=1; i<=n; i++)
	{
		if(num&(1<<31))
			num = (num<<1) | 1;
		else
			num = (num<<1) & -1; 
	}
	printf("The rotated bits are :\n");
	displayBits(num);
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

