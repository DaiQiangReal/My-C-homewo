#include<stdio.h>
#include<math.h>
double h=0.001;
double fun(double x)
{
	return sin(2*x)+x;
}
double cal(double a,double b)
{
	double sum=0;
	double a1=a;
	for(;a1+h<=b;a1+=h)
		sum += (fun(a1)+fun(a1+h))*h/2;
	return sum;
}
int main ()
{
	double a,b;
	scanf("%lf%lf",&a,&b);
	printf("%lf",cal(a,b));
	return 0;
}
