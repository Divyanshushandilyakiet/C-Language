// program to change the reverse the number 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,y=0,r;
    printf("Enter a number ");
    scanf("%d",&x);

      while(x!=0)
      {
          r=x%10;
          y=y*10+r;
          x=x/10;
      }


    printf("The reverse of the number is %d",y);
    return 0;
}
