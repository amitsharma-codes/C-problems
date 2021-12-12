#include<stdio.h>
int main()
{
	char a[425000];
	printf("The values are %d @ %d\n",a,&a);
	main();
	printf("returning from main %d @ %d\n",a,&a);
	return 0;
}

