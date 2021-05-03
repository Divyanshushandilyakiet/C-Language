#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, n, a[10];
    printf("Input the number of elements in array.....\n");
    scanf("%d", &n);

    printf("Input %d number of elements in array...........",n);

    for (i = 0; i < n; i++)
    {
        printf("\nElements - %d  ", i);
        scanf("%d", &a[i]);
    }
    printf("\nThe value store in array are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n\n The value store in array in reverse are : \n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d  ", a[i]);
    }
    printf("\n\n");

        return 0;
}
