#include<stdio.h>
int mul(int a, int b);
int main(int argc, char const *argv[])
{
    
    int a,b,c;
    a=5;
    b=10;
    c= mul (a,b);
    printf("multiplication of %d and %d is %d",a,b,c);
}
   int mul(int x, int y)
   {
       int c;
        (c=x*y);
        return (c);
   }
   
