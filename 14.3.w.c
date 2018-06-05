#include<stdio.h>
#include<stdlib.h>
/*学生学号、姓名、总分和联系电话的记录文件*/
struct student_DATA{
	char num[12];
	char name[10];
	int sum;
	char phone[12];
}data[10000];
int main()
{
	FILE *f;
	f=fopen("student_INFO.dat","wb");
	int i,student_name=0;
	long long num=20178465801,phone=13211111111;
	for(i=0;i<10000;i++)
	{
		sprintf(data[i].num,"%lld\0",num++);
		data[i].sum=rand()%(600-300)+300;
		sprintf(data[i].name,"student%d",student_name++);
		sprintf(data[i].phone,"%lld\0",phone++);
	}
	for(i=0;i<10000;i++)
		fwrite(&data[i],sizeof(struct student_DATA),1,f);
		
	return 0;
}
