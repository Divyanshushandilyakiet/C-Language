// check even or odd number without modulo operator
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number to check==>");
    scanf("%d",&a);
    if(a&1)
    printf("odd number");
    else
    printf("Even number");

    return 0;
}
