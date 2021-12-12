#include<stdio.h>
int main()
{
	unsigned int x,y,i;
	scanf("%d%d",&x,&y);
	int temp=x;
	for(i=1;i<y;i++)
		x*=temp;
	printf("%d\n",x);
}
