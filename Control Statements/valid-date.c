#include<stdio.h>
int main()
{
	unsigned int dd,m,year,flag;
AGAIN:
	flag=0;
	printf("enter a date from the year 1850 to 2050\t");
	scanf("%d%*c%d%*c%d",&dd,&m,&year);
	printf("The d,m,y is %d %d %d\n",dd,m,year);
	if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		if(dd>31)
			flag = 1;
	printf("1 %d\n",flag);
	if(m == 4 || m == 6 || m == 9 || m == 11)
		if(dd>30)
			flag = 1;
	printf("2 %d\n",flag);
	if(m == 2)
		if((year%100) %4==0)
		{
			if(dd>29)
				flag = 1;
		}
	        else
		{
			if(dd>28)
				flag =1;
		}

	printf("3 %d\n",flag);
	if(m>12)
		flag =1;
	
	printf("4 %d\n",flag);
	if(year<1850 || year>2050)
		flag =1;
	printf("5 %d\n",flag);
	if(flag==1)
	{
		printf("Error : The date is invalid\n");
		goto AGAIN;
	}
	else
		printf("Thanks for the information\n");
}
