#include<stdio.h>
void main()
{
	int a,b,c;
	a=b=c=1;
	int d=0;
//	d = ++a||++b&&++c;
//	printf("a= %d b=%d c=%d result = %d\n",a,b,c,d);
//	a=1;
//	b=0;
//	c=1;
//	d = a||b&&c;
//	printf("a= %d b=%d c=%d result = %d\n",a,b,c,d);
        scanf("%d %d %d\n",&a,&b,&c);
	printf("a= %d b=%d c=%d\n",a,b,c);
//	d =a&&b||c;
//	printf("a= %d b=%d c=%d result = %d\n",a,b,c,d);
//	d = a||b&&c;
//	printf("a= %d b=%d c=%d result = %d\n",a,b,c,d);
//	d =++a&&++b||++c;
//	printf("a= %d b=%d c=%d result = %d\n",a,b,c,d);
	d = ++a||++b&&++c;
	printf("a= %d b=%d c=%d result = %d\n",a,b,c,d);
}
