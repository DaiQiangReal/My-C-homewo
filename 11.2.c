#include<stdio.h>
int main()
{
	char data[12][10];
	char (*a)[12];
	int i,j;
	a=data;
	*(a[0])="January\0";
	printf("%s",*(a[0]));
	return 0;
		
	
 } 
