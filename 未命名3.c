#include<stdio.h>
#include<math.h>
void cal(double a,double b,double c)
{
       double answer1,answer2;
       answer1=(-b+sqrt(b*b-4*a*c))/(2*a);
       answer2=(-b-sqrt(b*b-4*a*c))/(2*a);
       printf("answer1 is %lf,answer2 is %lf",answer1,answer2);
       getchar();getchar();
       return;
}
void cal_one(double b,double c)
{
     printf("%lf",(-c/b));
     getchar();getchar();
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
    getchar();getchar();
    return 0;
}
