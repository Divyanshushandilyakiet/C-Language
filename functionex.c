#include<stdio.h>
int sum(int, int);
int sub(int, int);
int mult(int, int);
int div(int, int);
int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Enter number 1=>");
    scanf("%d",&num1);

    printf("Enter number 2=>");
    scanf("%d",&num2);

    int add=sum(num1, num2);
    int subt=sub(num1, num2);
    int pro= mult(num1, num2);
    int divi=div(num1, num2);

    printf("Sum of two number is=%d", add);
    printf("\nSub of two number is=%d",subt);
    printf("\nMultiply of two number is=%d",pro);
    printf("\nDivde of two number is=%d",divi);
    return 0;
}
int sum(int num1, int num2)
{
    return(num1+num2);
}
int sub(int num1, int num2)
{
    return(num1-num2);
}
int mult(int num1, int num2)
{
    return(num1*num2);
}
int div(int num1, int num2)
{
    return(num1/ num2);
}