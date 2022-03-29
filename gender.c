#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c;
	int age;
	printf("Enter your gender m for male f for female");
	scanf("%c",&c);
	printf("enter  your age");
	scanf("%d",&age);
	if(c=='m')
	{
		if(age>50)
		printf("You are a old man");
	}
	return 0;
	}
