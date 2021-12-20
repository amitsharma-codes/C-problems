#include<stdio.h>
#include<string.h>
int main()
{
	char s[50],*f;
	gets(s);
	for(char*p=s;*p;p++)
	{
		if(f=strstr(s,"Bengalore"))
		{f[6]='u';f[8]='u';}
	}
	printf("%s\n",s);
}
