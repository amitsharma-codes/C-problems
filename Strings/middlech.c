#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[40];
	gets(str);
	int l = (strlen(str))/2;
	if(strlen(str)%2==0)
		memmove(str+l-1,str+l+1,l+1);
	else
		memmove(str+l,str+l+1,l+1);
	printf("%s",str);
}
