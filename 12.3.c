#include<stdio.h>
#include<string.h>
int main()
{
	char a[5][100];
	int i;
	for(i=0;i<5;i++)
		scanf("%s",a[i]);
		
	int flag=0,max=strlen(a[0]);
	for(i=0;i<5;i++)
		if(strlen(a[i])>max)
		{
			flag=i;
			max=strlen(a[i]);
		}
			
	printf("%s",a[flag]);
	return 0;
}
