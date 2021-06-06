// print the sum of N odd natural numbers
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,s=0;
    printf("Enter a number--> ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        s=s+(2*i-1);
    }
    printf("The sum is %d",s);
    return 0;
}
