#include<stdio.h>
int main ()
{
	int data[21];
	data[1]=1;
	data[2]=1;
	int i;
	for(i=3;i<=20;i++)
		data[i]=data[i-1]+data[i-2];
	for(i=1;i<=20;i++)
		printf("%d ",data[i]);
	return 0;
}
