#include<stdio.h>
#include<string.h>
void FirstandLast(char *p);
int main()
{
	char s[30];
	gets(s);
	FirstandLast(s);
	printf("%s",s);
}
void FirstandLast(char *p)
{
	char* i;
	for(i=p;*p==' ';p++)                        //FIRST SPACES
	{
		memmove(p,p+1,strlen(p+1)+1);
		p--;
	}
	for(p=(i+strlen(i))-1;*p==' ';p--)         //LAST SPACES
		memmove(p,p+1,strlen(p)+1);
}
