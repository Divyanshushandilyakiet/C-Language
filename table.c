// print table of user choice
#include<stdio.h>
int main(int argc, char const *argv[])
{
     int a,i,m;
     printf("Enter a number ");
     scanf("%d",&a);

     for(i=1;i<=10;i++)
     {
       printf("%d*%d=%d\n",a,i,a*i);
     }
     
    return 0;
}
