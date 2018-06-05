#include<stdio.h>
int main ()
{
	int data[15];
	int i;
	for(i=0;i<15;i++)
		data[i]=rand()%101-0;
	for(i=0;i<15;i++)
		{
			printf("%d ",data[i]);
			if((i+1)%5==0)
				printf("\n");
		}
	return 0;
}
