#include<stdio.h>
int sum(int num);
int main(int argc, char const *argv[])
{
    int n, result;
    printf("Enter range of how many natural number sum you want");
    scanf("%d",&n);
    result=sum(n);
    printf("sum=%d",result);
    return 0;
}
int sum(int n)
{
    if(n!=0)
    return (n+ sum(n-1));
    else
    return n;
}

