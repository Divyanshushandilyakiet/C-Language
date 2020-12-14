#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    char data;
    int num;
    printf("Enter any number ");
    scanf("%d",&num);
    printf("your number is=%d",num);
    printf("\nEnter your password ");
    data=getch();
    printf("\nYour password is=");
    putch(data);
    printf("\nEnter single character= ");
    data=getche();
    printf("\nYour character is= ");
    putch(data);

    return 0;
}
