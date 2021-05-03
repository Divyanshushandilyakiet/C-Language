#include <stdio.h>
int squ(int n);
int main(int argc, char const *argv[])
{
    int num, result;
    printf("Enter the number\n");
    scanf("%d", &num);
    result = squ(num);
    printf("The square root of %d is %d", num, result);
    return 0;
}
int squ(int n)
{
    int y;
    y = n * n;
    return (y);
}
