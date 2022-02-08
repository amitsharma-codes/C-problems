#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	char *buf=NULL,*com,*temp,ch;
	int i=0;
	fp=fopen(argv[1],"r");
	if(argc<2)
	{printf("Invalid Arguments\n");return 0;}
	while((ch=fgetc(fp))&&!feof(fp))
	{
		buf=realloc(buf,(i+1)*sizeof(char));
		buf[i]=ch;
		i++;
	}
	buf[i-1]='\0';
	fclose(fp);
	i=0;
	ch=1;
//	printf("%s\n",buf);
	while(buf[i]!='\0')
	{
		if(com=strstr(buf,"//"))
		{
			temp=com;
	//		printf("%s\n",buf);
			i=temp-buf;
			if(com=strchr(com,'\n'))
				memmove(temp,com+1,strlen(com+1)+1);
		}
		else if(com=strstr(buf,"/*"))
		{
			temp=com;
			i=temp-buf;
	//		printf("%s\n",buf);
			com=strstr(com+2,"*/");
			if(com!=NULL)
				memmove(temp,com+2,strlen(com+1)+1);
			else
				printf("commented improperly\n");
		}
		else
			i++;
	}
	fp=fopen(argv[1],"w");
	fputs(buf,fp);
	fclose(fp);
}
