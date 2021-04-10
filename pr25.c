// program to print1 to 100 odd numbers
#include <stdio.h>
int main(int argc, char const *argv[])
{

    int i, n;
    printf("PRINT ALL NUMBERS TILL:");
    scanf("%d", &n);
    printf("odd numbers 1 to %d are===>>>\n", n);
    for (i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
