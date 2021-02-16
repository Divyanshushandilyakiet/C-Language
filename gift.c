#include <stdio.h>
int main(int argc, char const *argv[])
{
    int subjects;
    printf("Enter 1 if you are passed in maths and science\nEnter 2 if you are pass in maths only\nEnter3 if you are pass in science");
    scanf("%d", &subjects);
    printf("You Enter %d\n", subjects);

    if (subjects == 1)
    {
        printf("You win a prize of 45 rupees");
    }
    else if (subjects == 2 || 3)
    {
        printf("you win a prize of 15 rupees");
    }
    else
    {
        printf("you are not eligble");
    }

    return 0;
}
