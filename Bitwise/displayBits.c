#include<stdio.h>
void displayBits(int a);
int main()
{
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

