// swapping two numbers
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, temp;
    printf("Enter two numbers==>");
    scanf("%d%d", &a, &b);
    printf("a=%d\nb=%d", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("\n%d=a\n%d=b", a, b);
    return 0;
}
