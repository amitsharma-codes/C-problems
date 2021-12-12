#include<stdio.h>
int main()
{
	int i,number,j;
        int n1=0,n2=1,n3;
	scanf("%d",&number);
	printf("%d %d ",n1,n2);
	while(n3<=number)
	{
		n3= n1+n2;
		n1= n2;
		n2= n3;
		printf("%d ",n3);
		if(n3==number || number==1 || number==0)
		{
			printf("\n");
			printf("The number comes in the fibonacci series\n");
			return 0;
		}
	}
	printf("\n");
	printf("The number does not come in the fibonacci series\n");
}
