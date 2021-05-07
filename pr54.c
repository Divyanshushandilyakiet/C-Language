#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[3][3], b[3][3], c[3][3], i, j;
    printf("Enter nine numbers in matrix A\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter nine numbers in matrix B \n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The addition of two matrices is\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];

            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
