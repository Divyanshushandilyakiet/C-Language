// calculate the x power y
#include<stdio.h>
int main(int argc, char const *argv[])
{
     int x,y,m=1,i;
     printf("Enter the base ");
     scanf("%d",&x);
     printf("Enter the power ");
     scanf("%d",&y);

for(i=1;i<=y;i++)
m=m*x;

     printf("The result is %d",m);
    return 0;
}
