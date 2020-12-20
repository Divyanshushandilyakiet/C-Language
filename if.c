#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1,num2,num3;
    printf("Enter the number1=");
    scanf("%d",&num1);
    printf("Enter the number2=");
    scanf("%d",&num2);
    if(num1>num2)
    {
        printf("Number1=%d is greater",num1);
    }
    else
    {
        printf("number2=%d is greater",num2);
    }
    return 0;
}
