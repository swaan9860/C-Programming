#include<stdio.h>
#include<stdlib.h>
	int factorial(int a)
	{
	int i, fact=1;
	for (i=1; i<=a; i++)
	fact = fact*i;
	return fact;
	}

int main ()
	{
	int n ;
	printf("enter any number");
	scanf("%d",&n);
	int fact;
	fact=factorial(n);
	printf("factorial is %d",fact);
	
	return 0;
	}
