// check leap year or not
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the year you want to check\n");
    scanf("%d",&a);
    if(a%400==0)
    {
        printf("%d is leap year\n",a);
    }
    else if(a%100==0)
    {
       printf("%d is not a leap year\n",a);
    }
    else if(a%4==0)
    {
        printf("%d is a leap year\n",a);
    }
    else{
        printf("%d is not a leap year\n",a);
    }
    return 0;
}
