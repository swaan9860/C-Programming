#include<stdio.h>

int main()  
{  
    int a, b, c;  
  
    printf("Enter 3 numbers\n");  
    scanf("%d %d %d", &a, &b, &c);  
  
    if(a-b > 0 && a-c > 0)  
    {  
        printf("%d is the biggest\n", a);  
    }  
    else  
    {  
        if(b-c > 0)  
        {  
            printf("%d is the biggest\n", b);  
        }  
        else  
        {  
            printf("%d is the biggest\n", c);  
        }  
    }  
  
    return 0;  
}  
