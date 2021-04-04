// program to print the month name and its number of days 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int month;
    printf("Enter the number (1 to 12)====>>>>");
    scanf("%d",&month);

    printf("You entered %d......\n", month);

    switch(month)
    {
         case 1: 
        printf("January is of 31 days");
        break;

        case 2:
        printf("Februray is of 28/29 days");
        break;

         case 3: 
        printf("March is of 31 days");
        break;

        case 4:
        printf("April is of 30 days");
        break;

        case 5: 
        printf("May is of 31 days");
        break;

        case 6:
        printf("June is of 30 days");
        break;

         case 7: 
        printf("July is of 31 days");
        break;

        case 8:
        printf("August is of 31 days");
        break;

        case 9: 
        printf("September is of 30 days");
        break;

        case 10:
        printf("October is of 31 days");
        break;

        case 11: 
        printf("November is of 30 days");
        break;

        case 12:
        printf("December is of 31 days");
        break;
    }
    return 0;
}
