#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int numarr_to_int(int *a,int n)
{
	int i,i1=0,sum=0;
	for(i=n-1;i>=0;i--)
		sum+=pow(2,i1++)*a[i];
	return sum;
}
int main()
{
	char input[17];
	scanf("%s",input);
	int a[16],i;
	for(i=0;i<16;i++)
		a[i]=input[i]-'0';
		
	char answer[8];
	itoa((numarr_to_int(a,16)&1016)>>3,answer,2);
	answer[7]='\0';
		printf("%s",answer);
	return 0;
}
