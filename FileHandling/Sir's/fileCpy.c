// write a program to implement cp command...
// ./fileCpy  <srcFile> <destFile>
#include<stdio.h>
int main(int argc , char **argv)
{
	FILE *dest,*src;
	char ch;
	if(argc < 3)
	{
		printf("ERROR: wrong no of arguments\n");
		return 0;
	}
	//open src file
	src=fopen(argv[1],"r");
	if(src==NULL){printf("Error:src not found\n");
		       return 0;}
	//open dest file... only if src file is existing
	dest=fopen(argv[2],"w");
//in w mode:
//if file non-existing , then fopen creates a new file.
//if file is existing, then fopen truncates the existing file to size-0.
if(dest==NULL)
{
printf("error: can't create target file\n");return 0;
}

///in a loop collect char by char from src file stream, 
//and write into the target file stream.
	while((ch=fgetc(src))!=EOF)
	   fputc(ch,dest);
	//close src and dest file streams.
	fclose(src);
	fclose(dest);
	printf("copy success\n");
}

