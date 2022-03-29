#include <stdio.h>
int main(){
	int num;
	printf("menu\n");
	do{
	printf("1.Add\n");
	printf("2.Subtract\n");
	printf("3.Multiply\n");
	printf("4.Divide\n");
	printf("5.Exit\n");
	scanf("%d",&num);
	switch(num)
		{
	case 1:
	printf("1.Add\n");
	break;
	case 2:
	printf("2.Subtract\n");
	break;
	case 3:
	printf("3.Multiply\n");
	break;
	case 4:
	printf("4.Divide\n");
	break;
	case 5:
	printf("5.Exit\n");
	break;
	default:
	printf("retry number\n");
	break;
		}
	
	}while(num!=5);
	return 0;
}	
