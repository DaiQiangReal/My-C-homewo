#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
	char a[100],b[100];
	char *p1=a;
	char *p2=b;
	int count=0;
	scanf("%s",p1);
	scanf("%s",p2);
	int temp;
	bool flag=false;
	int i;
	for(i=0;i<strlen(p1);i++)
	{
		if(*(p1+i)==*(p2))
		{
			int j;
			for(j=0;j<strlen(p2);j++)
			{
				flag=true;
				if(*(p1+i+j)!=*(p2+j))
				{
					flag=false;
					break;
				}		
			}
			if(flag)
				count++;
		}
	}
	printf("%d",count);
	return 0;
}
