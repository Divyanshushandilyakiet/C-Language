// Program to find the even and odd number by switch case
#include <stdio.h>
int main(int argc, char const *argv[])
{

    int num;
    printf("Enter two numbers ===>>> ");
    scanf("%d", &num);

    printf("You entered (%d).......",num);

    switch(num%2)
    {
        case 0:
        printf("It is an even number");
        break;

        case 1:
        printf("It is an odd number");
        break;
    }
    return 0;
}
