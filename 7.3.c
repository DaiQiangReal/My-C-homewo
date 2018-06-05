#include<stdio.h>
int main ()
{
	int data[21];
	data[1]=1;
	data[2]=1;
	data[3]=2; 
	int i;
	for(i=4;i<=20;i++)
		data[i]=data[i-1]+data[i-2]+data[i-3];
	for(i=1;i<=20;i++)
		printf("%d ",data[i]);
	return 0;
}
