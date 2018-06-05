#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f;
	f=fopen("14.1.ini","r");
	double ave;
	char ch=fgetc(f);
	char temp[2];
	double sum=0;
	int student_count=0;
	while(ch!=EOF)
	{
		if(ch=='t')
		{
		
			fseek(f,7,SEEK_CUR);
			ch=fgetc(f);
			temp[0]=ch;
			ch=fgetc(f);
			temp[1]=ch;
			sum+=(temp[0]-'0')*10+(temp[1]-'0');
			
			fseek(f,1,SEEK_CUR);
			ch=fgetc(f);
			temp[0]=ch;
			ch=fgetc(f);
			temp[1]=ch;
			sum+=(temp[0]-'0')*10+(temp[1]-'0');
			
			fseek(f,1,SEEK_CUR);
			ch=fgetc(f);
			temp[0]=ch;
			ch=fgetc(f);
			temp[1]=ch;
			sum+=(temp[0]-'0')*10+(temp[1]-'0');
			
			
			printf("averange of student%d is %lf\n",student_count++,sum/3);
			sum=0;
		}
		ch=fgetc(f);
		
	}
	fclose(f);
	return 0;
}
