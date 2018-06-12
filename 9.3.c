#include<stdio.h>
#include<math.h>
int judge(int a)
{
	int i;
	if(a==2)
		return 1;
	for(i=2;i<=sqrt(a);i++)
		if(a%i==0)
			return 0;
	return 1;
}
int main()
{
	int a,i,count=0;
	scanf("%d",&a);
	printf("%d\n",judge(a));
	for(i=100;i>=2;i--)
	{
		if(judge(i))
		{
			printf("%d ",i);
			count++;
		}
		if(count==3)
			return 0;
	}		
}
