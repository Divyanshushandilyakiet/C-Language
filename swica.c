#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x = 20;
    printf("Welcome the switch case....");

    switch (x)
    {
        case 10 : printf("\n the value x=10");break;

        case 20: printf("\nThe value of x=20");break;

        case 30: printf("\nThe value of x=30");break;

        case 40: printf("\n The value of x=40");break;

        default : printf("\nThe value is not valid"); 

    }
    printf("\nOutside the switch");
    return 0;
}
