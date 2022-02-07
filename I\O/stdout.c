#include<stdio.h>
int main()
{
	int i;
	printf("Please enter something\n");
	scanf("%d",&i);
	__fpurge(stdout);
	scanf("%d",&i);
}
