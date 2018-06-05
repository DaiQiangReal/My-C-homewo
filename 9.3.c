#include<stdio.h>
#include<string.h>
int data[101];
void cal()
{
	int i,j;
	for(i=2;i<=100;i++)
		if(data[i])
			for(j=2;;j++)
			{
				if(i*j>100)
					break;
				data[i*j]=0;
			}
	return;
}
int main()
{
	int i;
	memset(data,1,sizeof(int)*101);
	data[0]=0;
	data[1]=0;
	cal();
	int max=0;
	int flag=3;
	while(flag-->0)
	{
		for(i=1;i<=100;i++)
			if(data[i]&&i>max)
				max=i;
	printf("%d ",max);
	data[max]=0;
	}	
	return 0;
}
