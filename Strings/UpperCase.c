#include<stdio.h>
#include<string.h>
void toUP(char*p);
int main()
{
	char s[30];
	gets(s);
	toUP(s);
	puts(s);
}
void toUP(char*p)
{
	for(;*p;p++)
		if(*p>=97 && *p<=122)
			*p-=32;
}
