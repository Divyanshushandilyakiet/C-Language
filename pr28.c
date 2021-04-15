// program to check the armstrong number
#include <stdio.h>
int main(int argc, char const *argv[])
{

    int n, s, r, x;
    printf("armstrong number from 1 to 1000 are......\n");
    for (n = 1; n < 1000; n++)
    {
        s = 0;
        x = n;
        while (x != 0)
        {
            r = x % 10;
            s = s + (r * r * r);
            x = x / 10;
        }
        if (s == n)
            printf("%d\n", n);
    }
    return 0;
}
