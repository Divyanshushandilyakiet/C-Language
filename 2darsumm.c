
#include<stdio.h>
int main()
{
  int a,b,sum=0;
  int *p1,*p2;

printf("Enter the value of A => "); scanf("%d",&a);
printf("Enter the value of B => "); scanf("%d",&b);

 p1=&a; p2=&b;

sum = *p1+*p2;

printf("Sum of 2 numbers is => %d",sum);
return 0;
}
