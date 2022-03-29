 #include <stdio.h>
#include <conio.h>




main(){
    int i, j, s ;
    
    for(i=1; i<=5; i++)
    {
        for(j = 1; j<=i; j++)
        {
            printf("%d \t", j);
        }
        
        printf("\n");
    }
    
    printf("-------------------------------------- \n");

    
        for(i=5; i>=1; i--)
    {
        for(j = 1; j<=i; j++)
        {
            printf("%d \t", j);
        }
        
        printf("\n");
    }
    
        printf("-------------------------------------- \n");

    
        for(i=5; i>=1; i--)
    {
        for(j = 1; j<=i; j++)
        {
            printf("* \t");
        }
        
        printf("\n");
    }
    
    printf("-------------------------------------- \n");
    
    for(i=1; i<=5; i++)
        {
            for(s=i; s<=4; s++)
            {
                printf("\t");
            }
                for(j=1; j<=i; j++)
            {
                
                printf(" %d \t", j);
            }
        
            printf("\n");
        }
    
    
    printf("-------------------------------------- \n");

    for(i=5; i>=1; i--)
    {
        for(s=i; s<=4; s++)
        {
            printf("\t");
        }
            for(j=1; j<=i; j++)
        {
            
            printf(" %d \t", j);
        }
        
    
        printf("\n");
    }
    
}
