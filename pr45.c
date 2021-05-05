// Interchange the two numbers
#include <stdio.h>
int main(int argc, char const *argv[])
{

    int a, b, c, d;
    printf("Enter the two numbers\n");
    scanf("%d%d", &a, &b);

    c = b;
    d = a;
    printf("The value of c= %d\n", c);
    printf("The value of d= %d", d);
    return 0;
}
