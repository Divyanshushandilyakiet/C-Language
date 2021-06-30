//The sum of this series 1+(1+2)+(1+2+3)+(1+2+3+4+.....+n)...
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int N, n, i, s, sum = 0;
    printf("Enter a natural number ");
    scanf("%d", &N);

    for (n = 1; n <= N; n++)
    {
        s = 0;
        for (i = 1; i <= n; i++)
            s = s + i;
        sum = sum + s;
    }
    printf("Ths sum of the series is %d", sum);

    return 0;
}
