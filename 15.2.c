#include<stdio.h>
#include<string.h>
#include<malloc.h>
struct student *start,*start_good;

struct student{
	long long num;
	char name[10];
	int age;
	int c_result;
	struct student* next;
};
void data_input(struct student* start)
{
	struct student *p,*q,*good;
	long long num;
	q=start;
	good=start_good;
	while(scanf("%lld",&num)!=EOF)
	{
		char name[10];
		scanf("%s",name);
		int age;
		scanf("%d",&age);
		int c_result;
		scanf("%d",&c_result);
		p=(struct student*)malloc(sizeof(struct student));
		p->num=num;
		strcpy(p->name,name);
		p->age=age;
		p->c_result=c_result;
		if(c_result>=80)
		{
			good->next=p;
			good=p;
		}
		else
		{
			q->next=p;
			q=p;
		}	
	}
	q->next=NULL;
	good->next=NULL;
	return;
}

void data_output(struct student* q)
{
	q=q->next;
	start_good=start_good->next;
	printf("优秀学生信息：\n");
	while(1)
	{
		printf("%lld %s %d %d\n",start_good->num,start_good->name,start_good->age,start_good->c_result);
		if(start_good->next==NULL)
			break;
		start_good=start_good->next;
	}
	printf("普通学生信息：\n");
	while(1)
	{
		printf("%lld %s %d %d\n",q->num,q->name,q->age,q->c_result);
		if(q->next==NULL)
			return;
		q=q->next;
	}
}

int main()
{
    start=(struct student*)malloc(sizeof(struct student));
	start->next=NULL;
	start_good=(struct student*)malloc(sizeof(struct student));
	start_good->next=NULL;
	printf("输入信息，以ctrl+z的EOF标识符结尾\n");
    data_input(start);
    data_output(start);
    return 0;
}
