#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[10];
    int i;

    printf("Input 10 elements in the array :\n");
    for (i = 0; i < 10; i++)
    {
        printf("Elements-%d : ", i);
        scanf("%d", &a[i]);
    }
    printf("\nElements in array in : \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
