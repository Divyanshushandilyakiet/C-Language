// program to check to eligble to vote 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int age ;
    printf("ENTER YOU AGE TO CHECK THE ELIGBLITY:\n");
    scanf("%d",&age);
    printf("YOU ENTERED:->[%d]",age);

    if (age>=18)
    {
        printf("\nYOU ARE ELIGBLE TO VOTE IN INDIA");
    }
    else
    {
        printf("\nYOU ARE NOT ELIGBLE TO VOTE IN INDIA");
    }
    
    return 0;
}
