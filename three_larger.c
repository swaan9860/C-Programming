#include<stdio.h>
int main()
{
	int a,b,c,larger;
	printf("enter three numbers");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	larger=(a>b)? (a>c?a:c): (b>c)? b:c;
	printf("the largest number is %d", larger);
	return 0;
}
