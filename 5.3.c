#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int* cal (char s[31])
{
	int	len=strlen(s);
	int answer[3];
	memset(answer,0,sizeof(int)*3);
	int i;
	for(i=0;i<len;i++)
	{
		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
			answer[0]++;
		else if(s[i]>='0'&&s[i]<='9')
			answer[1]++;
		else
			answer[2]++;
	}
	return answer;
}
int main ()
{
	char s[31];
	memset(s,'\0',sizeof(char)*31);
	scanf("%s",s);
	int* answer=cal(s);
	printf("alphabet is %d\nnumber is %d\nothers is %d",answer[0],answer[1],answer[2]);
	return 0;
}
