#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("Enter the number=");
    scanf("%d",&x);
    if(x>0)
    {
    printf("Positive number");
    }
    if(x<=0)
    {
        printf("negative number");
    }
    return 0;
}
