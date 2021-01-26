#include<stdio.h>
int fact(int);
int main(int argc, char const *argv[])
{
    int n,f;
    printf("enter a no");
    scanf("%d",&n);
    f=fact(n);
    printf("the factorial of given no is=%d",f);
    return 0;
}
int fact(int n)
{
    if(n<1)
    {
    return 1;
    }
    return(n*fact(n-1));
}
