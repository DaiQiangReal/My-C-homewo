#include<stdio.h>
#include<stdbool.h>
#define judge(x) x%2==0?false:true
int main()
{
	int a;
l:	scanf("%d",&a);
	if(judge(a))
		return 0;
	else
		goto l;
}
