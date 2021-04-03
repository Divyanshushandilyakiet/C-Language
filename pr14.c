// Program for print day of week by switch case  
#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int week;
    printf("Enter week number (1 to 7)===>>> ");
    scanf("%d",&week);
     
    printf("You entered %d.......",week);

    switch(week)
    {
        case 1: 
        printf("This is Monday");
        break;

        case 2: 
        printf("This is Tuesday");
        break;

        case 3: 
        printf("This is Wednesday");
        break;

        case 4: 
        printf("This is Thursday");
        break;

        case 5: 
        printf("This is Friday");
        break;

        
        case 6: 
        printf("This is Saturday");
        break;

        case 7: 
        printf("This is Sunday");
        break;
    }
    return 0;
}
