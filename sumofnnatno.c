// sum of n natural numbers
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n, s=0,i;
    printf("Enter a number ");
    scanf("%d",&n);
  for(i=0;i<=n;i++)
  s=s+i;

  printf("Ths sum of first n natural numbers is %d",s);

    return 0;
}
