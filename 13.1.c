#include <stdio.h>

struct student
{
	long long num;
	char name[10];
	int age;
	double exam[9];
};
int main()
{
	struct student a[3];
	int i,flag=2;
	while(flag>=0)
	{
		scanf("%lld",&a[flag].num);
		scanf("%s",a[flag].name);
		scanf("%d",&a[flag].age);
		for(i=0;i<7;i++)
			scanf("%lf",&a[flag].exam[i]);
		a[flag].exam[7]=0;
		for(i=0;i<7;i++)
			a[flag].exam[7]+=a[flag].exam[i];
		a[flag].exam[8]=a[flag].exam[7]/7.0;
		flag--;
	}
	flag=2;
	while(flag>=0)
	{
		printf("%lld %s %d \n",a[flag].num,a[flag].name,a[flag].age);
		for(i=0;i<7;i++)
			printf("%lf ",a[flag].exam[i]);
		printf("%lf %lf",a[flag].exam[7],a[flag].exam[8]);
		printf("\n\n");
		flag--;
	}
	
}
