#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
int numarr_to_int(int *a,int n)
{
	int i,i1=0,sum=0;
	for(i=n-1;i>=0;i--)
		sum+=pow(2,i1++)*a[i];
	return sum;
}
bool judge()
{
	int a=-1;
	a=a>>1;
	if(a==-1)
	{
		printf("��������");
		return true;
	}
	else
	{
		printf("�߼�����");
		return false;
	}
}
int cal(int a,int n)
{
	int i;
	if(judge())
	{//�߼����� 
		char two_int[100];
		itoa(a,two_int,2);
		two_int[strlen(two_int)-n]='\0';
		int answer[100];		
		for(i=0;i<strlen(two_int);i++)	
			answer[i]=two_int[i]-'0';
		return numarr_to_int(answer,strlen(two_int));
	}
	else
	{
		return a>>n;//C��������ԶΪ�������ƣ� 
	}
}

int main()
{
	int a,b;
	printf("����һ���������Ƶ�λ��\n");
	scanf("%d%d",&a,&b);
	printf("\n���Ϊ%d",a>>b);
	printf("��ļ������"); 
	printf("\n����һ�����ƽ��Ϊ%d",cal(a,b));
	return 0;
}
