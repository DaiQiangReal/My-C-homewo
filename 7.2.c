#include<stdio.h>
int	find_max(int* data,int n)
{
	int i;
	int max=-1;
	for(i=0;i<n;i++)
		if(max<data[i])
			max=data[i];
	return max;
}
int	find_min(int data[999],int n)
{
	int i;
	int min=9999;
	for(i=0;i<n;i++)
		if(min>data[i])
			min=data[i];
	return min;
}
int main ()
{
	int data[999];
	int n,i,count=0;
	double averange=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&data[i]);
	for(i=0;i<n;i++)
		averange+=data[i];
	averange/=n;
	for(i=0;i<n;i++)
		if(data[i]>averange)
			count++;
	printf("Max is %d, Min is %d, count for higher than averange is %d",find_max(data,n),find_min(data,n),count);
	return 0;
}
