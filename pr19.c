// program to find negative,Positive and zero
#include <stdio.h>
int main(int argc, char const *argv[])
{

    int num;
    printf("Enter any number to find its sign ==>>");
    scanf("%d", &num);

    printf("You entered (%d).......\n",num);
    switch (num > 0)
    {
    case 1:
        printf("%d is a positive number",num);
        break;

    case 0:
        switch (num < 0)
        {
        case 1:
            printf("%d is a negative number",num);
            break;

        case 0:
            printf("%d is zero",num);
            break;
        }
    }
    return 0;
}
