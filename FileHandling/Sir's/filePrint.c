// program to display(print), the contents of a textfile.
// input: filename
// output: file content
#include<stdio.h>
int main()
{
	char ch;
	FILE *fp;
	char filename[100];
//////open the file, and make the stream available.
	printf("Enter file name:");
	scanf("%s",filename);
	fp=fopen(filename,"r");
//file pointer is also known as fileHandler...
//Because, using filePointer only we can access file data.

	if(fp==NULL){printf("file not found\n"); return 0;}
//read and print the file data, reading from file stream
while((ch=fgetc(fp))!=EOF)
	printf("%c",ch);
//  ch=fgetc(stdin);   same as   ch=getchar();
	//close the file-stream
	fclose(fp);
}
