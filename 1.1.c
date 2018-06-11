#include<stdio.h>
#include<stdlib.h>
double cal(char d,double a,double b)
{
    if(d == '+')
         return a+b;
    if(d == '-')
         return a-b;
    if(d == '*')
         return a*b;
    if(d == '/')
         return a/b;
}
    
int main ()
{
    double a,b;
    char d;
    printf("In put:\n");
    scanf("%lf%c%lf",&a,&d,&b);
    printf("%lf",cal(d,a,b));
    return 0;
}
