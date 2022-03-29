#include<stdio.h>
int main()
	{
	int reverse , rem , a ,org ;
	printf("enter a number:\n");
	scanf("%d",&a);
	org=a;
	while (a!=0)
		{
	rem=a%10;
	reverse=reverse*10 + rem;
	a=a/10;
		}
	if (reverse==org)
	printf("the number is palindrome");
	else 
	printf("the number is not palindrome");
	
	return 0;
	}
