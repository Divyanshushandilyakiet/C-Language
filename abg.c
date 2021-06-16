// Program to check two numbers
#include<stdio.h>
int main(int argc, char const *argv[])
{
     int a,b;
     printf("Enter two numbers-->");
     scanf("%d%d",&a,&b);
     if(a>b)
     printf("%d is greater",a);
     else if(b>a)
     printf("%d is greater",b);
     else
     printf("Both are equal");
    return 0;
}
