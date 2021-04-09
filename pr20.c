// A simple calculator
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char op;
    float num1, num2, result;
    printf("WELCOME TO THE SIMPLE CALCULATOR");
    printf("\n________________________________");
    printf("\n[number 1] [+,-,*,/] [number 2]\n");

    scanf("%f %c %f", &num1, &op, &num2);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        result = num1 / num2;
        break;
    }
    printf("%.2f%c%.2f=%.2f",num1,op,num2,result);

    return 0;
}
