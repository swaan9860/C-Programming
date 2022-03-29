#include<stdio.h>
int main()
{
	int num[7],i,largest;
	for(i=0;i<7;i++)
		{
		printf("Enter the numbers:");
		scanf("%d",&num[i]);
		}
	largest=num[0];
	for(i=0;i<7;i++)
	{
		if(num[i]>largest)
		largest=num[i];
	}
	printf("%d\n",largest);
}
