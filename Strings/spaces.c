#include<stdio.h>
#include<string.h>
void first(char *);
void last(char *);
void middle(char *);
int main()
{
	char str[100],*p,*q;
	gets(str);
	p=str;
	while(*p==32)
	{
		memmove(p,p+1,strlen(p+1)+1);
	}
	for(p=str;*p;p++)
	{
		if(*p==32&&*(p+1)==32)
		{
			memmove(p,p+1,strlen(p+1)+1);
			p--;
		}
	}
	if(str[strlen(str)-1]==32)
		str[strlen(str)-1]='\0';
	printf("%s",str);
}
