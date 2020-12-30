#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1,num2,num3;
    printf("Enter the number1=");
    scanf("%d",&num1);
    printf("Enter the number2=");
    scanf("%d",&num2);
    printf("Enter the number3=");
    scanf("%d",&num3);

    if(num1>num2 && num1>num3)
    {
        printf("Number1=%d is greater",num1);
    }
    else if (num2>num1 && num2>num3)
    {
        printf("Number2=%d is greater",num2);
    }
    else
    {
        printf("Number3=%d is greater",num3);
    }
    
