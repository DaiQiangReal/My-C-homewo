#include<stdio.h>
#include<string.h>
#include<malloc.h>
//ÿ���ڵ����ѧ�š��������Ա������C�ɼ�
struct student *start;
struct student{
	long long num;
	char name[10];
	int age;
	int c_result;
	struct student *next;
};
void data_input(struct student* start)
{
	struct student *p,*q;
	long long num;
	q=start;
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
		q->next=p;
		q=p;
	}
	q->next=NULL;
	return;
}

void data_output(struct student *q)
{
	q=q->next;
	while(1)
	{
		printf("%lld %s %d %d\n",q->num,q->name,q->age,q->c_result);
		if(q->next==NULL)
			return;
		q=q->next;
	}
}
void del(long long num)
{
	struct student *p=start;
	while(1)
	{
		if(p->next->num==num)
		{
			p->next=p->next->next;
			return;
		}
		p=p->next;
	}
}
int main()
{
    start=(struct student*)malloc(sizeof(struct student));
	start->next=NULL;
	printf("������Ϣ����ctrl+z��EOF��ʶ����β\n");
    data_input(start);
    data_output(start);
    printf("����Ҫɾ����ѧ����ѧ��\n");
	long long int del_num;
	scanf("%lld",&del_num);
	del(del_num); 
    data_output(start);
    return 0;
}
