#include<stdio.h>
#include<time.h>
#include<string.h>

int main()
{
	time_t timer=time(NULL);
	int i;
	char *time_current;
	time_current=ctime(&timer);

	for(i=20;i<=23;i++)
		printf("%c",time_current[i]);
	printf("/");
	for(i=4;i<=6;i++)
		printf("%c",time_current[i]);
	printf("/");
	for(i=8;i<=10;i++)
		printf("%c",time_current[i]);
	printf(" ");
	for(i=11;i<=18;i++)
		printf("%c",time_current[i]);
	
	return 0;
}
