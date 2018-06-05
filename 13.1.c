#include <stdio.h>

struct student
{
	long int num;
	char name[10];
	int age;
	double exam[9];
};
int main()
{
	struct student a[2];
	int i,flag=1;
	while(flag--)
	{
		scanf("%ld",&a[flag].num);
		scanf("%s",a[flag].name);
		scanf("%d",&a[flag].age);
		for(i=0;i<7;i++)
			scanf("%lf",&a[flag].exam[i]);
		a[flag].exam[7]=0;
		for(i=0;i<7;i++)
			a[flag].exam[7]+=a[flag].exam[i];
		a[flag].exam[8]=a[flag].exam[7]/7.0;
		
	}
	flag=1;
	while(flag--)
	{
		printf("%ld %s %d \n",a[flag].num,a[flag].name,a[flag].age);
		for(i=0;i<7;i++)
			printf("%lf ",a[flag].exam[i]);
		printf("%lf %lf",a[flag].exam[7],a[flag].exam[8]);
		printf("\n\n");
	}
	
}