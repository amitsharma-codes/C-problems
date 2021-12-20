#include<stdio.h>
#include<ctype.h>
int strcomp(char*p,char*q);
void toUP(char*p);
int main()
{
	char s1[30],s2[30];
	gets(s1);gets(s2);
	toUP(s1);toUP(s2);
	if(strcomp(s1,s2))
		printf("SAME\n");
	else
		printf("NOT SAME\n");
}
int strcomp(char*p,char*q)
{
	for(;*p;p++,q++)
		if(*p!=*q)
			return 0;
	return 1;
}
void toUP(char*p)
{
 	for(;*p;p++)
 		if(*p>=97 && *p<=122)
			*p-=32;
}
