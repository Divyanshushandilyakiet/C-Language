#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x=17;
    int y=13;
    printf("Enter to the nested if.....");
    if (x==12 || y==13)
    {
        printf("\nThe value of x and y is true ");
    }
    else
    {
           printf("\nThe value of x and y is false");
    }

    if (x==12)
    {
        if(y==13)
        {
          printf("\nThe value of x and y is true ");
        }
        else
        {
               printf("\nThe value of x and y is false");
        }
    }
    else
    {
           printf("\nThe value of x and y is false");
    }

    if (x==12)
    {
        printf("\n The value of x is true ");
    }
    else if (y==13)
    {
        printf("\n THe value of y is true  ");
    }
    else
    {
        printf("\n The value of x and y is not true");
    }
    
    
    {
        
    }
    
    
    
    return 0;
}