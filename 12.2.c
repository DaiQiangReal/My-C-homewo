#include<stdio.h>
int *address(int a,int b)
{
	if(a>b)
		return &a;
	else
		return &b;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("max address is %x",address(a,b));
	return 0;
}
