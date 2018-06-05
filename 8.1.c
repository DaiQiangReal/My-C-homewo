#include<stdio.h>
int main ()
{
	int a[9],i,j,k;
	for(i=0;i<9;i++)
		scanf("%d",&a[i]);
	int data[3][3];
	k=0;
	for(i=0;i<3;i++)
		{
			printf("\n");
			for(j=0;j<3;j++)
		{
			data[i][j]=a[k++];
			printf("%d",data[i][j]);
			printf(" ");
		}
		}
	return 0;
}
