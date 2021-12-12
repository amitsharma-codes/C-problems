#include<stdio.h>
void displayBits(int);
int main()
{
	int a,b,count=0;
	scanf("%d%d",&a,&b);
	displayBits(a);displayBits(b);
	for(int i=31;i>-1;i--)
		if((a>>i)&1 ^ (b>>i)&1)
			count++;
	printf("count=%d\n",count);
}
void displayBits(int x)
{
	for(int i=31;i>-1;i--)
		printf("%d",(x>>i)&1);
	printf("\n");
}
