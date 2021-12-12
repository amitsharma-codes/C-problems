#include<stdio.h>
void displayBits(int a);
int main()
{
	int num,bit,temp;
	printf("Enter the number to find the next highest power of 2\n");
	scanf("%d",&num);
	displayBits(num);
	for(bit=31;bit>=0;bit--)
	{
		if(((num>>bit)&1)==1)
			break;
	}
	printf("%d\n",bit);
	temp = 1<<++bit;
	printf("The next highest power of 2 is and its bin. equivalent:%d\n",temp);
	displayBits(temp);
}
void displayBits(int a)
{
	int bit=31;
	while(bit!=-1)
	{
		printf("%d",(a>>bit)&1);
		if(bit%4==0)
			printf(" ");
		bit--;
	}
	printf("\n");
}

