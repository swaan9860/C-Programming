#include<stdio.h>
int main()
{
int i,j,space;
for(i=1;i<=5;i++)
	{
		for(space=i;space<=4;space++)
		{
	printf("\t");
		}
		for(j=1;j<=i;j++)
			{
			printf("%d\t",j);
			}
	printf("\n");
	}
return 0;
}
