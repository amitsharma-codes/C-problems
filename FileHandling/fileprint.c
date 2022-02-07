#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
/*	char filename[100];
	scanf("%s",filename);*/
	fp=fopen("file.txt","r");
	if(fp==NULL)
	{
		printf("File Not Found\n");return 0;}
	while((ch=fgetc(fp))&&(!feof(fp)))
	{
		printf("%c",ch);
	}
	fclose(fp);

}
