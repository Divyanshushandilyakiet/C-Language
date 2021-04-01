// program to see the greater number 
#include <stdio.h>
int main(int argc, char const *argv[])
{

    int num1, num2;
    printf("Enter two numbers :");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2)
    {
        printf("%d is greater than %d", num1,num2);
    }
    if (num2 > num1)
    {
        printf("%d is greater than %d",num2,num1);
    }
    if (num1==num2)
    {
        printf("They are equal to eachother");
    }
    return 0;
}
