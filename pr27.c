// program to print the sum of even numbers
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, start, end, sum = 0;
    printf("Enter the lower limit==>>");
    scanf("%d", &start);
    printf("Enter the upper limit==>>");
    scanf("%d", &end);

    if (start % 2 != 0)
    {
        start++;
    }
    for (i = start; i <= end; i += 2)
    {
        sum += i;
    }
    printf("Sum of even numbers from %d to %d=%d", start, end, sum);

    return 0;
}
