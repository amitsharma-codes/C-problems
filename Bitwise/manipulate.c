#include<stdio.h>
void displayBits(int a);
int main()

	/* Setting,Clearing,Inverting n bits starting from a position p in a number
	 * ~0             = 1111 1111 1111 1111 1111 1111 1111 1111
	 * ~0<<n          = 1111 1111 1111 1111 1111 1111 1111 0000
	 * ~(0<<n)        = 0000 0000 0000 0000 0000 0000 0000 1111
	 * ~(0<<n)<<p-n+1 = 0000 0000 0000 0000 0000 0000 1111 0000
	 * now this can be used for masking that is setting,clearing,inverting
	 * we use '|'(bitwise OR) for setting
	 * we use '&'(bitwise AND) and '~'(negation of mask) for clearing
	 * we use '^'(bitwise OR) for inverting*/

{
	int mask,p,n,x,temp;
	printf("Enter position;till which position;number");  
	scanf("%d;%d;%d",&p,&n,&x);
	temp=x;
	mask = ~(~0<<n)<<p-n+1;
	printf("Setting the bits\n");
	displayBits(x);
	temp=temp|mask;
	displayBits(temp);

	temp=x;
	printf("Clearing the bits\n");
	displayBits(x);
	temp=temp&~(mask);
	displayBits(temp);

	temp=x;
	printf("Inverting the bits\n");
	displayBits(x);
	temp=temp^mask;
	displayBits(temp);
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

