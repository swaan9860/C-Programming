#include<stdio.h>
int main()
int largest(int);
{
	int n[7],i,largest;
	for(i=0;i<7;i++)
		{
		printf("Enter the numbers:");
		scanf("%d",&n[i]);
		largest(n);
		}
	largest(int n)
	{
	for(i=0;i<7;i++)
	{
		if(num[i]>largest)
		largest=num[i];
		return largest;
	}
	}
	return 0;
	}
