#include<stdio.h>
int power(int);
int main(int argc, char const *argv[])
{
   
     int n ,c;   
     printf("Enter any number for squre: ");
     scanf("%d",&n);
     
    c=power(n);
    printf("The value of %d is: %d\n",n,c);
    return 0;
}

int power(int a)
{
    int s;
    s=a*a;
    return s;
}
