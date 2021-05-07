#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[10], i, max;

    printf("Enter the 10 numbers\n");

    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    for (i = 1; i <= 9; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("The greatest number is %d", max);

    return 0;
}
