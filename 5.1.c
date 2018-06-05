#include<stdio.h>
double cal(double a,double b,int c)
{
	if(c == 1)
		return a + b;
	if(c == 2)
		return a - b;
	if(c == 4)
		return 1/a+1/b;
}
int main()
{
	double a,b;
	int c;
	printf("1.求两个数的和\n\
2.求两个数的差\n\
3.求两个数的商和余数\n\
4.求两个数的倒数之和\n\
输入0退出系统\n");
	while(1)
	{
		scanf("%d",&c);
		if(c == 0)
			return 0;
		scanf("%lf%lf",&a,&b);
		if(c==3)
		{
			printf("Answer is %d······%d",(int)a / (int)b,(int)a % (int)b);
			system("pause");
			continue;
		}
		printf("Answer is %lf. Press any key to continue",cal(a,b,c));
		system("pause");
	}
 } 
