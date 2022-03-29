
#include<stdio.h>
#include<ctypen.h>
#include<conio.h>
int main()
{
	char ch;
	
	printf("Enter any alphabet: ");
	scanf("%c", &ch);
    
    switch(tolower(ch))
    {
        case 'a': 
            printf("vowel");
            break;
        case 'e': 
            printf("vowel");
            break;
        case 'i': 
            printf("vowel");        
            break;
        case 'o': 
            printf("vowel");        
            break;
        case 'u': 
			printf("vowel");
            break;
     
        default:  
            printf("The alphabet entered is a consonant");
    }

    return 0;
}
