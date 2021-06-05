// Print fibonacci series with recusion
#include<stdio.h>
 int fib(int);
int main(int argc, char const *argv[])
{
   
      int i, n;
      printf("Enter how many terms you want to see in the series==>");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
          printf(" %d ",fib(i));
      }
}
int fib(int n)
{
    if(n==1||n==2)
        return(1);
    return(fib(n-1)+fib(n-2));
}
