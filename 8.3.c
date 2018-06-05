#include<stdio.h>
#include<string.h>
int main ()
{
	int data[99][99];
	memset(data,0,sizeof(int)*99*99);
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		data[i][i]=1;
		data[i][n-1-i]=1;
	}
	for(i=0;i<n;i++)
		{
			printf("\n");
			for(j=0;j<n;j++)
				printf("%d ",data[i][j]);
		}
	return 0;
}
