#include<stdio.h>
void displayBits(int a);
int main()
{
	int num,bit=0,mask;
	printf("Enter the number to be 2's complimented:\n");
        scanf("%d",&num);
	displayBits(num);
        printf("The 2's compliment of the number %d is:\n",num);
        displayBits(~num+1);	
	for(bit=0; bit<=31; bit++)
	{
		mask = 1<<bit;
		if((num&mask)!=0)
			break;
	}
	for(bit=bit+1; bit<=31; bit++)
	{
		mask = 1<<bit;
		num^=mask;
	}
	printf("two's compliment is : \n");
	displayBits(num);
	return 0;
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

