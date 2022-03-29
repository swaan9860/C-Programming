#include <stdio.h>
int main()
{
	int num=1;
	int a;
	int table=0;
	printf("enter a number for table");
	scanf("%d",&a);
	while (num<=12)
		{ 
	table=a*num;
	printf("%d*%d=%d:\n",a,num,table);
		num=num+1;

		}
	return 0;
}
	
