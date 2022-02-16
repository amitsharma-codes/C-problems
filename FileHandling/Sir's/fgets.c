#include<stdio.h>
int main(int argc,char **argv)
{
	FILE *fp;
	int linecnt=0;
	char linebuf[100];
	if(argc==1){printf("invalid input\n");return 0;}
	fp=fopen(argv[1],"r");
	while(fgets(linebuf,100,fp))
	{
		
          	printf("%d:%s",++linecnt,linebuf);
	}
	fclose(fp);

}
