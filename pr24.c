// program to print 1 to 100 even numbers
#include <stdio.h>
int main(int argc, char const *argv[])
{

    int i, n;
    printf("PRINT ALL EVEN NUMBERS TILL==>>");
    scanf("%d", &n);
    printf("Even numbers from 1 to %d\n", n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
