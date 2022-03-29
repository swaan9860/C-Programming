#include <stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter any number");
	scanf("%d",&a);
	printf("%d\t",a);
	while(a!=1)
	{
	if (a%2==0)
		{
		a=a/2;
		printf("%d\t",a);
		}
	else 
		{
		a=a*3+1;
		printf("%d\t",a);
		}
	}
	return 0;
}
