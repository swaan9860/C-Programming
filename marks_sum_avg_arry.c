#include<stdio.h>
int main()
{
int marks[10],i,sum=0;
float avg;
printf("Enter marks of seven numbers\n");
	for(i=0;i<7;i++)
	{printf("Subject[%d]:",i+1);
	scanf("%d",&marks[i]);
	}
	for(i=0;i<7;i++)
	{
	sum=sum+marks[i];
	}
	avg=(float)sum/i;
	printf("total=%d\n Average=%f",sum,avg);
	return 0;
}
