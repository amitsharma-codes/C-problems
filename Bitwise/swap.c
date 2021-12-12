#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the numbers to be swapped \n");
	scanf("%d;%d",&x,&y);
	printf("The numbers are x=%d,y=%d\n",x,y);
	x^=y^=x^=y;
	printf("The  swapped result is x=%d,y=%d\n",x,y);
}
