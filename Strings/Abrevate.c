#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char *s=NULL,temp[10]={0};int i=0,j=0;
	do{
		s=(char*)realloc(s,i+1);
		s[i]=getchar();
	}while(s[i++]!='\n');
	s[i-1]='\0';
	temp[0]=toupper(s[0]);
	for(i=0;i<strlen(s);i++)
		if((s[i]==' ')&&(isalpha(s[i+1])))
				temp[++j]=toupper(s[i+1]);
	printf("%s\n",temp);
}
