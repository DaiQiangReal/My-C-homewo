#include<stdio.h>
int main()
{
	int n;
	printf("请输入行数 只能为奇数\n");
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
			printf(" ");
		for(j=0;j<2*i-1;j++)
			printf("*");
		printf("\n");
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<n-i;j++)
			printf(" ");
		for(j=0;j<2*i-1;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}