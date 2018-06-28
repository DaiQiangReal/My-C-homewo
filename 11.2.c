#include<stdio.h>
int main()
{
    char *data[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int n;
    printf("请输入月份：");
    scanf("%d", &n);
    if (n<1||n>12)
    	printf("月份输入错误！\n");
    else
  	  printf("%s", *(data+n-1));
	return 0;
}
