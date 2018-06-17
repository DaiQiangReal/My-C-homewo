#include<stdio.h>
#define fun(a,b) (a%b)
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",fun(a,b));
	return 0;
}
