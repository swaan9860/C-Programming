#include <stdio.h>
#include<conio.h>

  int main(){
  int a,b, c;
  char ch;
  printf("Enter a number");
  scanf("%d", &a);
  printf("Enter another number");
  scanf("%d", &b);
printf("Enter a operator");
ch=getche();

switch(ch){
case '+':
c=a+b;
break;

case '-':
c=a-b;
break;

case '*':
c=a*b;
break;

case '/':
c=a/b;
break;

default:
printf("wrong operator");
break;
}

printf("%d",c);
return 0;
  }
