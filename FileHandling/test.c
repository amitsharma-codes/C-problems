#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int i=0,j=0,k=0,var1,var2;
	char temp,ch;
	printf("%s\n",argv[1]);
	var1= atoi(argv[1]);
	var2= atoi(argv[2]);
	printf("%d %d\n",var1,var2);
}
/*	while(ch=argv[1][i])
	{
		if(ch=='-')
			temp=ch;
		if(isdigit(ch))
		{
		if(temp=='-')
		{
	//		var2*=10*j;
			var2=atoi(argv[1]+i);
	//		j++;
		}
		else
		{
	//		var1*=10*k;
			var1+=atoi(argv[1]+i);
	//		k++;
		}
		}
	}
}*/
