#include<stdio.h>

int largest(int a[],int n){
    int max= a[0];
    for(int i = 0;i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}
int main()
{

    int n;
    printf("Total number: ");
    scanf("%d",&n);
    int num[n];
    int i;

    int result;
    for (i=0;i<n;i++)
    {
        printf(   "enter number: ");
        scanf("%d",&num[i]);
    }

    result = largest(num,n);
    printf("%d is largest",result);
    return 0;
}
