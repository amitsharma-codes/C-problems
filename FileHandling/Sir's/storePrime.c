#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int testprime(int data)
{
	int i=2;
	while(i<(data/2))
	{
	   if(data%i ==0)  return 0;

	   i++;
	}

	return 1;

}
int main(int argc,char **argv)
{
	int *arr=0,i=0,n,data;
	int min,max;
	FILE *fp;
	if(argc <3){printf("Error: insufficient args\n");return 0;}
///verify the supplied arguments are valid or not....
//
//


	min=atoi(argv[1]);
	max=atoi(argv[2]);
	for(data=min;data<=max;data++)
	{
		if(testprime(data)){
			arr=realloc(arr,(i+1)*sizeof(int));
					arr[i]=data;
					i++;
				}
	}
n=i;

//send n prime numbers into a file named PRIME.LST
	fp=fopen("PRIME1.LST","w");
	for(i=0;i<n;i++)
		fprintf(fp,"%d\n", arr[i]);
	fclose(fp);
	   
	fp=fopen("PRIME2.LST","w");
	fwrite(arr,sizeof(int), n ,fp);
	fclose(fp);



printf("list of prime:  ");
for(i=0;i<n;i++)
	printf("%d,", arr[i]);

printf("\n");

}
