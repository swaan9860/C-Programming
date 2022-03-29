#include <stdio.h>

int main()
{
    float eng, acc, c, mca, math, p, t;

    // float p;
    printf("Enter your marks of Five Subs");
    scanf("%f, %f, %f, %f, %f", &eng, &acc, &c, &mca, &math);
    t = eng + acc + c + mca + math;
    p = t/5;
    if (p>80)
        printf("Your Grade is A");
    else if (p>60)
    
        printf("Your Grade is B");
        /* code */
    else if (p>40)
        printf("Your Grade is C");
        /* code */
        else 
        printf("You are Failed");
        /* code */
    return 0;

}
