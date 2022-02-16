//in file named PRIME1.LST few prime numbers present in text format.
//this app should read a file named PRIME1.LST   , to fetch the prime numbers present in the file.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int *arr=NULL,i=0,n,temp;
/*	fp=fopen("PRIME1.LST","r");
	while(fscanf(fp,"%d",&temp)==1)
	{	
		arr=realloc(arr,(i+1)*sizeof(int));
		arr[i]=temp;
		i++;
	}
	
	fclose(fp);

*/
//in file named PRIME2.LST few prime numbers present in binary format..
//collect them and print.

	fp=fopen("PRIME2.LST","r");
	fseek(fp,0,2);
	n=ftell(fp)/sizeof(int);
	rewind(fp);
	arr=calloc(n,sizeof(int));
	fread(arr,sizeof(int),n,fp);
	fclose(fp);	


	
	for(i=0;i<n;i++)
		printf("%d,",arr[i]);

}
