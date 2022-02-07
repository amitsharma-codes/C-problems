#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	char ch,*buf=NULL,*rem;
	int i=0;
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
	i=0;
	rem=strstr(buf,argv[2]);
	if(rem==NULL)
	{
		printf("No string matching\n");return 0;
	}
	else
		memmove(rem,rem+strlen(argv[2]),strlen(rem+1)+1);
	fopen(argv[1],"w");
	while(buf[i]!='\0')
	{
		putc(buf[i],stdout);
		fputc(buf[i],fp);
		i++;
	}
	fclose(fp);
}
