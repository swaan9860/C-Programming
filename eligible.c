#include<stdio.h>
#include<stdlib.h>

int main()
{
	int age;
	printf("enter  your age");
	scanf("%d",&age);
		if(age>=18)
		{
		printf("You are eligible to vote");
	}
	else {
		printf("You are not eligible");
	}
	return 0;
	}
