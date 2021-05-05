// program to find the cube of any number

#include <stdio.h>
double cube(double num);

int main(int argc, char const *argv[])
{
    int num;
    double C;

    printf("Enter any number ");
    scanf("%d", &num);

    C = cube(num);

    printf("The cube of %d is %.2f", num, C);

    return 0;
}

double cube(double num)
{
    return (num * num * num);
}