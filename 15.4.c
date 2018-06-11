#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<stdbool.h>
#define big 999
//每个节点包括学号、姓名、性别、年龄和C成绩
bool flag=false;
struct student *start,*start_sorted,*input;
double sum=0;
int count=0,student_count=0;
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
		student_count++;
		char name[10];
		scanf("%s",name);
		int age;
		scanf("%d",&age);
		int c_result;
		scanf("%d",&c_result);
		sum+=c_result;
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
void data_sort()
{
	struct student *p,*q,*temp,*put_to_sorted;
	q=start_sorted;
	int min_C=big;
	while(1)
	{
		p=start->next;
		min_C=big;
		while(1)
		{
			if(p->c_result<min_C)
				{
					min_C=p->c_result;
					temp=p;
				}
			if(p->c_result!=big)
				flag=true;
			if(p->next==NULL)
				break;
			p=p->next;
		}
		if(flag==false)
			break;	
		flag=false;
		put_to_sorted=(struct student*)malloc(sizeof(struct student));
		put_to_sorted->age=temp->age;
		put_to_sorted->c_result=temp->c_result;
		put_to_sorted->num=temp->num;
		strcpy(put_to_sorted->name,temp->name);
		if(put_to_sorted->c_result>=sum/(double)student_count)
			count++;
		q->next=put_to_sorted;
		q=q->next;
		temp->c_result=big;
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
void add_sorted(struct student *input)
{
	struct student *p=start_sorted;
	p=p->next;
	while(1)
	{
		if(p->c_result>=input->c_result)
		{
			input->next=p;
			start_sorted->next=input;
			return;
		}
		if(p->next!=NULL&&p->c_result<=input->c_result&&p->next->c_result>=input->c_result)
			{
				input->next=p->next;
				p->next=input;
				return;
			}
		if(p->next==NULL)
			{
				p->next=input;
				return;
			}
		p=p->next;
	}
}

int main()
{
    start=(struct student*)malloc(sizeof(struct student));
    start_sorted=(struct student*)malloc(sizeof(struct student));
	start->next=NULL;
	start_sorted->next=NULL;
	printf("输入信息，以ctrl+z的EOF标识符结尾\n");
    data_input(start);
    data_sort();
    data_output(start_sorted);
    printf("高于平均分%lf的人有%d个。\n",sum/(double)student_count,count);
    printf("输入一个增加的学生信息：\n");
    input=(struct student*)malloc(sizeof(struct student));
    scanf("%lld",&input->num);
    scanf("%s",input->name);
	scanf("%d",&input->age);
	scanf("%d",&input->c_result);
	printf("\n");
	add_sorted(input);
	data_output(start_sorted);
    printf("高于平均分%lf的人有%d个。",(sum+input->c_result)/(double)(student_count+1),(input->c_result>=sum/(double)student_count?count+1:count));
    return 0;
}

