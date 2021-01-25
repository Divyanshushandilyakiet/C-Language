#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,rem;
    int bin=0,i=1;
    printf("Enter a number");
    scanf("%d",&n);
    do
    {
        rem=n%2;
        n=n/2;
        bin=bin+(rem*i);
        i=i*10;
    }
    while(n!=0);
    printf("%d",bin);
    return 0;
}
