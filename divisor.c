#include<stdio.h>
int findgcd(int n1,int n2);
int main(int argc, char const *argv[])
{
    int n1,n2,gcd;
    printf("enter first no= ");
    scanf("%d",&n1);
    printf("\nenter 2nd no= ");
    scanf("%d",&n2);
    gcd=findgcd(n1,n2);
    printf("\ngcd of %d and %d is=%d",n1,n2,gcd);
    return 0;
}
int findgcd(int n1,int n2)
{
    while(n1!=n2)
    {
      if(n1>n2)
      return findgcd(n1-n2,n2);
      else 
      return findgcd(n1,n2-n1);
    }
    return n1;
}
