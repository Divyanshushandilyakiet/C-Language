// Product of first n natural numbers 
#include<stdio.h>
int main(int argc, char const *argv[])
{
     int n, m=1,i;
     printf("Enter last number  ");
     scanf("%d",&n);

    for(i=1;i<=n;i++)
     m=m*i;

     printf("The multiplication of first n natural number is %d",m);
    return 0;
}
