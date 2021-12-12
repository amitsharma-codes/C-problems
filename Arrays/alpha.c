#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],*p,*q,count=0;;
	gets(str);
	for(p=str;*p;p++)
	*p=tolower(*p);
	for(p=str;*p;p++)
	{
		for(q=str;*q;q++)
			if(*p==*q)
			{
				if(count>=1)
				{
				memmove(q,q+1,strlen(q));
				q++;
				}
				count++;
			}
		count=0;
	}
	puts(str);
}
