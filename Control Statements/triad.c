#include<stdio.h>
int main()
{
	int m,n,p,num;
	int i,k,d1,d2,d3;
	for(num=100;num<=999;num++)
	{
		for(i=num;i<=3*num;i+=num)
		{
			k=i;
			d1=k%10; k/=10;
			d2=k%10; k/=10;
			d3=k%10; k/=10;
			if(d1==d2 || d2==d3 || d1==d3)
				goto nextnum;
		}
		for(m=num;m>0;m/=10)
		{
			d1=m%10;
			for(n=num*2;n>0;n/=10)
			{
				d2=n%10;
				for(p=num*3;p>0;p/=10)
				{
					d3=p%10;
					if(d1==d2 || d2==d3 || d1==d3)
						goto nextnum;
				}
			}
			
		}
		printf("%d %d %d\t",num,num*2,num*3);
nextnum:
		;
	}
	return 0;
}
