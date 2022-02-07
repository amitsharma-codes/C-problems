#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	char ch,*buf=NULL,*rev;
	int i=0,j;
	if(argc<3)
	{printf("Invalid Arguments\n");return 0;}
	fp=fopen(argv[1],"r");
	while((ch=fgetc(fp))&&!feof(fp))
	{
		buf=realloc(buf,(i+1)*sizeof(char));
		buf[i]=ch;
		i++;
	}
	buf=realloc(buf,(i+1)*sizeof(char));
	buf[i+1]='\0';
	fclose(fp);
	i=strlen(argv[2])-1;
	rev=strstr(buf,argv[2]);
	if(rev==NULL)
	{
		printf("No string matching\n");return 0;
	}
	else
	{
		j=0;
		while(j<i)
		{
			ch=rev[i];
			rev[i]=rev[j];
			rev[j]=ch;
			i--;j++;
		}
	}
	fopen(argv[1],"w");
	i=0;
	while(buf[i]!='\0')
	{
		putc(buf[i],stdout);
		fputc(buf[i],fp);
		i++;
	}
	buf[i-1]=-1;
	fclose(fp);
}
