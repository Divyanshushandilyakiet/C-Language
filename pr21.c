// program to print the natural numbers by for loop
#include <stdio.h>
int main(int argc, char const *argv[])
{

    int i, n;
    printf("Enter any number :");
    scanf("%d", &n);

    printf("Natural numers 1 to %d:\n", n);

        for (i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }

    return 0;
}
