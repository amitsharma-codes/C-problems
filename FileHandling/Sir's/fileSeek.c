#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("datafile.txt","r");
	printf("%ld",ftell(fp));//0
	ch=fgetc(fp);
	printf("%c\n",ch);//h
	printf("%ld",ftell(fp));//1
	fseek(fp,2,SEEK_CUR);
	ch=fgetc(fp);
	printf("%c\n",ch);//l

	fseek(fp,2,SEEK_SET);
	ch=fgetc(fp);
	printf("%c\n",ch);//l
	printf("%ld",ftell(fp));//3
	
	fseek(fp,-2,SEEK_END);
	ch=fgetc(fp);
	printf("%c\n",ch);//l
	fseek(fp,-1,1);
	ch=fgetc(fp);
	printf("%c\n",ch);//l
	printf("%ld",ftell(fp));//9

}
