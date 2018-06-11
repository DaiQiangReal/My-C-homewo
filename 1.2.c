#include<stdio.h>
#define pi 3.14
double lenth(double r)
{
    return 2*pi*r;
}

double s(double r)
{
       return pi*r*r;
}

int main ()
{
    double r;
    scanf("%lf",&r);
    printf("c=%lf\ns=%lf",lenth(r),s(r));
    return 0;
}
