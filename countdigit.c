// Count digits in a  number
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, m = 0;
    printf("Enter a number ");
    scanf("%d", &n);
    while (n != 0)
    {

        n = n / 10;
        m++;
    }
    printf("total digits is %d", m);
    return 0;
}
