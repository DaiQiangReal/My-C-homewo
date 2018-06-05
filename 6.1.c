#include<stdio.h>
#include<stdlib.h>
void cal1()
{
	int i;
	long long answer=0,Nsum=1;
	for(i=1;i<=10;i++)
	{
		Nsum*=i;
		answer+=Nsum;
	}
	printf("answer is %lld with single loop",answer);
	return;
}
void cal2()
{
	long long answer=0,Nsum=1;
	int i,j;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=i;j++)
			Nsum*=j;
		answer+=Nsum;
		Nsum=1;
	}
	printf("answer is %lld with double loop",answer);
	return;
}

int main ()
{
	cal1();
	printf("\n");
	cal2();
	return 0;
}
