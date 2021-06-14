// Check even or odd number without modulus and bitwise operator
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number to check-->");
    scanf("%d", &a);

    if (a / 2 * 2 == a)
        printf("Even number");
    else
        printf("Odd number");
    return 0;
}

