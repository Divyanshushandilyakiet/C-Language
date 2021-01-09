#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,a,temp,s=0;
    printf("enter a no");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        a=n%10;
        s=s*10+a;
        n=n/10;
    }
    if(s==temp)
    printf("given no %d is palindrome",temp);
    else
    printf("given no %d is not palindrome", temp);
    return 0;
}
