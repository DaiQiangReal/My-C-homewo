#include<stdio.h>
#include<stdlib.h>
double cal(double money)
{
	if(money<=10)
		return money*0.1;
	if(money>10&&money<=20)
		return (money-10)*0.075+cal(10);
	if(money>20&&money<=40)
		return (money-20)*0.05+cal(20);
	if(money>40&&money<=60)
		return (money-40)*0.03+cal(40);
	if(money>60&&money<=100)
		return (money-60)*0.015+cal(60);
	if(money>100)
		return (money-100)*0.01+cal(100);
}
int main ()
{
	double money;
	scanf("%lf",&money);
	printf("%lf",cal(money));
	return 0;
}
