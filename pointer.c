#include<stdio.h> 
#include<stdlib.h>

int main()
{
int x=10,y;
int *p; 
p=&x;
y=*p;
printf("value of x:%d\n",x);
printf("%d is stored at %d\n",x,&x);
printf("%d is stored at %d\n",*&x,&x); 
printf("%d is stored at %d\n",*p,p);
printf("%d is stored at %d\n",p,&p); 
printf("%d is stored at %d\n",y,&y);
*p=50;
printf("\nNow value at x:%d",x);
return 0;
}
