#include <stdio.h>
int max(int num1, int num2);
int min(int num1, int num2);
int main(int argc, char const *argv[])
{
    int num1, num2, maximum, minimum;
    printf("Enter two numbers :   \n");
    scanf("%d%d", &num1, &num2);
    printf("You entered num1 is %d and num2 is %d \n", num1, num2);

    maximum = max(num1, num2);
    minimum = min(num1, num2);

    printf("The maximum number is %d\n", maximum);
    printf("The minimum number is %d\n ", minimum);

    return 0;
}

int max(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}
int min(int num1, int num2)
{
    return (num2 > num1) ? num1 : num2;
}
