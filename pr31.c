// print the reverse of the given numbe
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,r,y=0;
    printf("Enter the number===>>");
    scanf("%d",&x);
    while (x!=0)
    {
          r=x%10;
          y=y*10+r;
          x=x/10;
    }
    printf("The reverssse of the number is %d",y);
    
    return 0;
}

