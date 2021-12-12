#include<stdio.h>
void displayBits(int a);
int main()

	/* Setting,Clearing,Inverting n bits starting from a position p in a number
	 * ~0             = 1111 1111 1111 1111 1111 1111 1111 1111
	 * ~0<<n          = 1111 1111 1111 1111 1111 1111 1111 0000
	 * ~(0<<n)        = 0000 0000 0000 0000 0000 0000 0000 1111
	 * ~(0<<n)<<p-n+1 = 0000 0000 0000 0000 0000 0000 1111 0000
	 * now this can be used for masking that is setting,clearing,inverting
	 * first clear the n bits of x(using x & with ~mask of the bit pos.)
	 * copy the n bits of y(using y & with mask of the bit pos.)
	 * paste the n bits in x using '|'
	 * result= (x&~mask | y&mask)*/

{
	int mask,p,n,x,y;
	printf("Enter position of bit;number of bits; x ; y\n");
	scanf("%d;%d;%d;%d",&p,&n,&x,&y);
	mask= ~(~0<<n)<<p-n+1;
	printf("The bits of x,y are\n");
	displayBits(x);
	displayBits(y);
	x=x&~(mask) | y&mask;
	printf("The changed bits are:\n");
        displayBits(x);	
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

