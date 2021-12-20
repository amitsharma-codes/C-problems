#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[30];int i=0;
	gets(s);
	while(s[i])
	{
		if(s[i]==' ' && s[i+1]==' ')
		{
			memmove(s+i,s+i+1,strlen(s+i+1)+1);
			i--;
		}
		i++;
	}
	printf("%s\n",s);
}
