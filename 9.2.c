#include<stdio.h>
#include<math.h>
double h;
double fun(double x)
{
	return sin(2.0*x)+x;
}
double cal(double a,double b)
{
	double sum=0;
	double a1=a;
	for(;a1+h<=b;a1+=h)
		sum += (fun(a1)+fun(a1+h))*h/2.0;
	return sum;
}
int main ()
{
	double a,b;
	int n;
	scanf("%lf%lf",&a,&b);
	scanf("%d",&n);
	h=(b-a)/(double)n;
	printf("%.3lf",cal(a,b));
	return 0;
}
