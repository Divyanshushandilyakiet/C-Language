#include<stdio.h>
int fib(int n)
{
    if(n<=1)
    return n;
    return fib(n-1)+fib(n-2);
}
int main(int argc, char const *argv[])
{
    int n,i=0,c;
    printf("enter range to where u want fabonacci series");
    scanf("%d",&n);
    printf("\nfabonacci series=\n");
    for(c=1;c<=n;c++)
    {
    printf("%d\n",fib(i));
    i++;
    }
    return 0;
}
