#include<stdio.h>
int main()
{
	int a,b,larger;
	printf("enter two numbers");
	scanf("%d",&a);
	scanf("%d",&b);
	larger=(a>b)?a:b;
	printf("the larger number in: %d and %d is: %d", a, b, larger);
	return 0;
}
