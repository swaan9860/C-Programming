#include<stdio.h>
int main()
{
	int num[5],i,smallest,largest;
	for(i=0;i<5;i++)
		{
		printf("Enter the numbers:");
		scanf("%d",&num[i]);
		}
	smallest=num[0];
	for(i=0;i<5;i++)
	{
		if(num[i]<smallest)
		smallest=num[i];
	}
	printf("%d\n",smallest);
		
	for(i=0;i<5;i++)
	{
	if(num[i]>largest)
	largest=num[i];
	}
	printf("%d\n",largest);
}
