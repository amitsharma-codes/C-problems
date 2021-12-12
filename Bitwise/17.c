#include<stdio.h>
int isMultiple(int,int);
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int res =isMultiple(x,y);
	printf("%d\n",res);
}
int isMultiple(int a,int b)
{
	for(;b;b=b<<1)
		a &= ~b;
	if(a)
		return 0;
	else
		return 1;
}
