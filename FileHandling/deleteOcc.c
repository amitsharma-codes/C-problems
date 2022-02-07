#include<stdio.h>
#include<dirent.h>
int main()
{
	FILE *fo,*fc;
	char ch1,ch2;
	struct dirent *de;
	DIR *dr=opendir(".");
	if(dr==NULL)
	{
		printf("Directory not found\n");return 0;
	}
	while((de=readdir(dr))!=NULL)
	{
		fc=fopen(de->d_name);
		while((ch1=fgetc(fo))&&feof(fo))
		{
			ch2=fgetc(fc);
			if(ch1==ch2)
				continue;
			else
				break;
		}
		if(ch1==feof(
	}
	closedir(dr);
}
