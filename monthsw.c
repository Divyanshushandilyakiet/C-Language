#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int day;
    printf("Enter any day number to find out day name=");
    scanf("%d",&day);
    if (day!=0)
    {
       if(day%7==0)
    {
        day=7;
    }
    }
    switch(day)
    {
        case 1: printf("This is sunday");break;
        case 2: printf("This is monday");break;
        case 3: printf("This is tuesday");break;
        case 4: printf("This is wednesday");break;
        case 5: printf("This is thrusday");break;
        case 6: printf("This is friday");break; 
        case 7: printf("This is saturday");break;
        default : printf("This is a wrong choice");break;
    }
    return 0;
}
