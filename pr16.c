// program to check the vowels and consonents by switch case
#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    char ch;
    printf("Enter any alphabet to check====>>>>");
    scanf("%c",&ch);
    
    printf("\n\nYou entered %c............ \n",ch);

    switch(ch)
    {
        case 'a':
        printf("Its a vowel");
        break;

        case 'e':
        printf("Its a vowel");
        break;

         case 'i':
        printf("Its a vowel");
        break;

        case 'o':
        printf("Its a vowel");
        break;

        case 'u':
        printf("Its a vowel");
        break;

        case 'A':
        printf("Its a vowel");
        break;

          case 'E':
        printf("Its a vowel");
        break;

         case 'I':
        printf("Its a vowel");
        break;

        case 'O':
        printf("Its a vowel");
        break;

        case 'U':
        printf("Its a vowel");
        break;

        default:
        printf("Its a consonent");
    }
    return 0;
}
