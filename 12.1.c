#include<stdio.h>
#include<stdbool.h>
struct student{
	int cla1;
	int cla2;
	int cla3;
	int cla4;
};
double ave(struct student *p)
{
	return ((*p).cla1+(*p).cla2+(*p).cla3+(*p).cla4)/4;
}

double findworst(struct student *p)
{
	if((*p).cla1<60)
		return true;
	if((*p).cla2<60)
		return true;
	if((*p).cla3<60)
		return true;
	if((*p).cla4<60)
		return true;
	return false;
}
int main()
{
	struct student a,b,c;
	scanf("%d%d%d%d",&a.cla1,&a.cla2,&a.cla3,&a.cla4);
	scanf("%d%d%d%d",&b.cla1,&b.cla2,&b.cla3,&b.cla4);
	scanf("%d%d%d%d",&c.cla1,&c.cla2,&c.cla3,&c.cla4);
	printf("averange= %lf %lf %lf\n",ave(&a),ave(&b),ave(&c));
	if(findworst(&a))
		printf("student1\n");
	if(findworst(&b))
		printf("student2\n");
	if(findworst(&c))
		printf("student3\n");
	return 0;
}
