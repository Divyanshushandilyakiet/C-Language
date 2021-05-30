// calculate factorials of number
#include <stdio.h>
int fact(int n);
int main(int argc, char const *argv[])
{
    int a, N;
    printf("Enter a number==>>");
    scanf("%d", &N);
    a = fact(N);
    printf("\nThe factorial of number is %d ", a);

    return 0;
}
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f = f * i;
    return (f);
}
