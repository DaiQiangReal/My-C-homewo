#include<stdio.h>
int main()
{
	int p,i;
	for(i=0;i<3;i++)
	{
		scanf("%d",&p);
		printf("%d %o %x\n",p,p,p);
	}
	return 0;
}
