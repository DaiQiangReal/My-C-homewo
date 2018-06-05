#include<stdio.h>
#include<stdlib.h>
struct student_DATA{
	char num[12];
	char name[10];
	int sum;
	char phone[12];
}data[10000];

int main()
{
	FILE *f;
	f=fopen("student_INFO.dat","rb");
	int i;
	for(i=0;i<10000;i++)
		fread(&data[i],sizeof(struct student_DATA),1,f);

	for(i=0;i<10000;i++)
		printf("%s %s %d %s\n",data[i].num,data[i].name,data[i].sum,data[i].phone);
		
	return 0;	
}
