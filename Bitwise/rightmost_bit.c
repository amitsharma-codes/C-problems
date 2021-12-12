#include<stdio.h>
void displayBits(int x);
int main()
{
	/* n=10 0000 1010 
	 * n=n-1 0000 1010 - 0000 0001 = 0000 1001
	 * if we use AND operation with n and n-1 we will clear the rightmost bit
	 * in n and the result will be n = 0000 1000*/
	unsigned n=140;
	int bit=31;
	while(bit!=0)
	{
		printf("%d",(n>>bit)&1);
		bit--;
	}
	printf("\n");
	n=n&(n-1);
	bit=31;
	while(bit!=0){
		printf("%d",(n>>bit)&1);
		bit--;}
	printf("\n");
}
