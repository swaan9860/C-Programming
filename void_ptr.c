#include<stdio.h> 
#include<stdlib.h>

int main()
{
int a=10;

float b=4.56;

char *ch"NEPAL";

void *vptr;

vptr=&a;

printf("value=%d\n","(int *)vptr);
vptr=&b;
printf("value=%f\n","(float *)vptr);
vptr=&ch;
printf("value=%s\n",(char)vptr);

return 0;
}
