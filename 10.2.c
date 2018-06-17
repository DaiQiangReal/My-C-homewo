#include<stdio.h>
#define imax3(a,b,c) (imax(a,b)>imax(b,c)?imax(a,b):imax(b,c))
#define imax(a,b) (a>b?a:b)
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("(a,b):%d\n",imax(a,b));
	printf("(a,b,c):%d\n",imax3(a,b,c));
	printf("(a-2,b+2):%d\n",imax(a-2,b+2));
	printf("(a-2,b,c+2):%d\n",imax3(a-2,b,c+2));
	return 0;
}
