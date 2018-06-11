#include<stdio.h>
#include<math.h>
void cal(double a,double b,double c)
{
	double answer1,answer2;
	double judge=b*b-4*a*c;
	if (judge<0)
		printf("answer1=%g+%gi, answer2=%g-%gi",-b/(2.0*a),sqrt(-judge)/(2*a),-b/(2*a),sqrt(-judge)/(2*a));
	else if(judge>0)
		printf("answer1= %g, answer2= %g",(-b+sqrt(judge))/(2*a),(-b-sqrt(judge))/(2*a));
	else
		printf("answer= %g",(-b)/(2*a));
	return;
}
void cal_one(double b,double c)
{
	printf("answer= %g",(-c/b));
	return;
}
int main ()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
	if(a==0)
	{
		cal_one(b,c);
 		return 0;
	}
    cal(a,b,c);
    return 0;
}
