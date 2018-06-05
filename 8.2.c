#include<stdio.h>
int data[1000][1000];
void cal(int m,int n)
{
	int i,j,max=-9999999,min=99999999,bi,bj,si,sj;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			{
				scanf("%d",&data[i][j]);
				if(data[i][j]<min)
					{
						min=data[i][j];
						si=i;
						sj=j;
					}
				if(data[i][j]>max)
					{
						max=data[i][j];
						bi=i;
						bj=j;
					}
			}
	printf("min location:(%d,%d), max location;(%d,%d)",si,sj,bi,bj);
	return;
}
int main ()
{
	int m,n;
	scanf("%d%d",&m,&n);
	cal(m,n);
	return 0;
}
