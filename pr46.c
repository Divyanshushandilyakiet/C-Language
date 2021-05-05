// sum of each digit of five digit numer
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, r, s = 0;
    printf("Enter the five digit number\n ");
    scanf("%d", &a);
    while (a != 0)
    {
        r = a % 10;
        s = s + r;
        a = a / 10;
    }

    printf("sum of the five digits number is %d ",s );

        return 0;
}
