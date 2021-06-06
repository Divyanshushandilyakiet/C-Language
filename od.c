// Print Odd number 1 to 10 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    printf("Odd numbers 1 to 10 are-->\n");

    for(i=1;i<=10;i++)
    {
        printf("%d ",(2*i)-1);
    }
    return 0;
}
