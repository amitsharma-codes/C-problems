// write a program to implement cp command...
// ./fileCpy  <srcFile> <destFile>
#include<stdio.h>
#include<stdlib.h>
int main(int argc , char **argv)
{
	FILE *fp;
	char ch,*buf;;
	unsigned int  size=0, i;
	if(argc < 3)
	{
		printf("ERROR: wrong no of arguments\n");
		return 0;
	}
	//open src file
	fp=fopen(argv[1],"r");
	if(fp==NULL){printf("Error:src not found\n");
		       return 0;}
	//find size of file
	while(fgetc(fp) !=EOF)  size++;
	fclose(fp);
	//allocate dyn-memory
	buf=calloc(1,size+1);
	//copy the stream content into dyn-memory
	fp=fopen(argv[1],"r");
	for(i=0;i<size;i++)
		buf[i]=fgetc(fp);
	fclose(fp);

printf("%s",buf);


	//copy the dyn-memory data into tar file.
	fp=fopen(argv[2],"w");
	for(i=0;buf[i];i++)
		fputc(buf[i],fp);
	fclose(fp);

	printf("copy success\n");
}

