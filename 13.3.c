#include<stdio.h>
struct teacher{
	char name[10];
	int num;
	char sex[5];
	char work[10];
	char what_do[10];
};
struct student{
	char name[10];
	int num;
	char sex[5];
	char work[10];
	int clas;
};
int main()
{
	struct teacher demot;
	scanf("%s",demot.name);
	scanf("%d",&demot.num);
	scanf("%s",demot.sex);
	scanf("%s",demot.work);
	scanf("%s",demot.what_do);
	struct student demos;
	scanf("%s",demos.name);
	scanf("%d",&demos.num);
	scanf("%s",demos.sex);
	scanf("%s",demos.work);
	scanf("%d",&demos.clas);
	
	printf("%s",demot.name);
	printf("%d",demot.num);
	printf("%s",demot.sex);
	printf("%s",demot.work);
	printf("%s",demot.what_do);

	printf("%s",demos.name);
	printf("%d",demos.num);
	printf("%s",demos.sex);
	printf("%s",demos.work);
	printf("%d",demos.clas);
	return 0;
}
