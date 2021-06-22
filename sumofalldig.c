// sum of all digits which is entered by user
#include<stdio.h>
int main(int argc, char const *argv[])
{
     int n,s=0,x;
     printf("ENter a number ");
     scanf("%d",&n);
      
      while (n>0)
      {
          x=n%10;
          s=s+x;
          n=n/10;
      }
      printf("The sum is %d",s);
      
    return 0;
}
