#include<stdio.h>
#include<math.h>
int main ()
{
	double sum=0;
	int i;
	
	for(i=0;(1.0/(i*i+1))>pow(10,-5);i++)
	{
			sum+=pow(-1,i)*(1.0/(i*i+1));
			printf("%lf\n",pow(-1,i)*(1.0/(i*i+1)));
	}
	
	
	printf("%lf",sum);
	return 0;
}
