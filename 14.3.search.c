#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student_DATA{
	char num[12];
	char name[10];
	int sum;
	char phone[12];
}data[10000];

int main()
{
	char num[12];
	FILE *f;
	f=fopen("student_INFO.dat","rb");
	int i;
	for(i=0;i<10000;i++)
		fread(&data[i],sizeof(struct student_DATA),1,f);
	scanf("%s",num);
	for(i=0;i<10000;i++)
	{
		if(strcmp(data[i].num,num)==0)
		{
			printf("%s %s %d %s\n",data[i].num,data[i].name,data[i].sum,data[i].phone);
			return 0;
		}
	}
	return 0;	
}
