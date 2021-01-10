#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,a=2,f=0;
    printf("enter a no");
    scanf("%d",&n);
    while(a<n)
    {
        if(n%a==0)
        {
            f=1;
            break;
            }
            a++;
}
    if(f==0)
    printf("%d is prime",n);
    else
    printf("%d is not prime",n);
    return 0;
}
