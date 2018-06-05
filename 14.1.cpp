#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
int main()
{
	freopen("14.1.ini","w",stdout);
	long long num=20178465801;
	for(int i=0;i<10000;i++)
	{
		int temp1=rand()%(100-60)+60;
		int temp2=rand()%(100-60)+60;
		int temp3=rand()%(100-60)+60;
		printf("%lld student%d %d %d %d\n",num++,i,temp1,temp2,temp3);
	}
	return 0;
}
