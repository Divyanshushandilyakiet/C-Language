#include<stdio.h>
int main()
{
  int a,b,temp=0;
  int *p1,*p2;

printf("Enter the value of A => "); scanf("%d",&a);
printf("Enter the value of B => "); scanf("%d",&b);

 p1=&a; p2=&b;

temp=*p1;
*p1=*p2;
*p2=temp;

printf("Value after swapping using pointer \n");

printf("Value of A is => %d\n",*p1);
printf("Value of B is => %d",*p2);
return 0;
}
