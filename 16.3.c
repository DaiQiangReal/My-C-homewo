#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int answer[32];
void yuanma(int a)
{
	int i;
	char data[100];
	itoa(a,data,2);
	if(a>=0)
	{
		int i1=0;
		for(i=0;i<32-strlen(data);i++)
			answer[i]=0;
		for(;i<32;i++)
			answer[i]=data[i1++]-'0';
	}
	else
	{
		for(i=0;i<32;i++)
			answer[i]=data[i]-'0';
	}
	printf("原码是:");
	for(i=0;i<32;i++)
		printf("%d",answer[i]);
	printf("\n");
	return;
}
void fanma(int a)
{
	int i;
	if(a<0)
	{
		for(i=1;i<32;i++)
			answer[i]=!answer[i];
	}
	printf("反码是:");
	for(i=0;i<32;i++)
		printf("%d",answer[i]);
	printf("\n");
	return;
}
void buma(int a)
{
	int i;
	if(a<0)
	{
		answer[31]+=1;
		for(i=31;i>0;i--)
			if(answer[i]==2)
			{
				answer[i]=0;
				answer[i-1]+=1;
			}
	}
	printf("补码是:");
	for(i=0;i<32;i++)
		printf("%d",answer[i]);
	printf("\n");
	return;
}
int main()
{
	int a,i;
	scanf("%d",&a);
	yuanma(a);
	fanma(a);
	buma(a);
	return 0;
	
}
