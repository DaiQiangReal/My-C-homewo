#include<stdio.h>
int main()
{
	int aa,bb,cc;
	int* a=&aa;
	int* b=&bb;
	int* c=&cc;
	scanf("%d%d%d",a,b,c);
	if(*a>=*b>=*c)
		{
			printf("%d %d %d",*c,*b,*a);
			return 0;
		}
	if(*a>=*c>=*b)
		{
			printf("%d %d %d",*b,*c,*a);
			return 0;
		}
	if(*c>=*a>=*b)
		{
			printf("%d %d %d",*b,*a,*c);
			return 0;
		}
	if(*c>=*b>=*a)
		{
			printf("%d %d %d",*a,*b,*c);
			return 0;
		}
	if(*b>=*c>=*a)
		{
			printf("%d %d %d",*a,*c,*b);
			return 0;
		}
	if(*b>=*a>=*c)
		{
			printf("%d %d %d",*c,*a,*b);
			return 0;
		}
 } 
