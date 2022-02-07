#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	char *buf=NULL;
	char *str=NULL,*remove;
	int i=0,j=0,cnt=0;
	if(argc<2)
		printf("Invalid no. of arguments\n");
	else
	{
		fp=fopen(argv[1],"r");
		if(fp==NULL)
		{
			printf("File not found\n");
			return 0;
		}
		do
		{
			buf=realloc(buf,(++i)*sizeof(char));
			buf[i-1]=fgetc(fp);
		}
		while(!feof(fp));
		buf[i-1]='\0';
		fclose(fp);
string:
		i=0;
		do
		{
			str=realloc(str,(++i)*sizeof(char));
			str[i-1]=*(buf+j+(i-1));
			cnt++;
	}while(isalnum(str[i-1])||ispunct(str[i-1]));
		str[i-1]='\0';
		printf("%s",str);
		if(cnt<2)
			j=j+i+1;
		else
			j=j-i;
		remove=strstr(buf,str);
		printf("%lu\n",remove);
		if(remove!=NULL)
			memmove(remove,remove+strlen(str)+1,strlen(remove+1)+1);
		if(buf[j]!='\0')
			goto string;
		printf("%s",buf);
	}
}
