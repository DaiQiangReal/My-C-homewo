#include<stdio.h>
double cal(double x,double a,double b,double c)
{
    return a*x*x*x+b*x*x+c;
}
    
int main ()
{
    double a,b,c,x;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&x);
    printf("%lf",cal(x,a,b,c));
    return 0;
}
    
    
