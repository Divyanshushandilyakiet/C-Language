// Program to check the leap year 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int year;
    printf("Enter the year you want to check:-");
    scanf("%d",&year);

    printf("You entered the %d then we will check that.\n",year);

    if((year%4==0 && year%100!=0)||year%400==0)
    {
        printf("%d year is a leap year\n",year);
    }
    else
    {
        printf("%d is not a leap year\n",year);
    }
    return 0;
}
