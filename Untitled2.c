#include<stdio.h>
#define pi 3.14
double lenth(int r)
{
    return 2*pi*r;
}

double s(int r)
{
       return pi*r*r;
}

int main ()
{
    int r;
    scanf("%d",&r);
    printf("c=%lf\ns=%lf",lenth(r),s(r));
    getchar();
    getchar();
    return 0;
}
