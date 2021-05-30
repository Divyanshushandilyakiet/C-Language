// sum of n naturals numbers
#include <stdio.h>
void sum(void);
int main(int argc, char const *argv[])
{
    sum();
}
void sum(void)
{
    int N, s = 0, i;
    printf("Enter a natural number= ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
        s = s + i;

    printf("The sum is %d ", s);
}
