#include<stdio.h>
int sum();
int main(int argc, char const *argv[])
{
     int total;
     printf("The basic structure of function is ____\n");
     printf("________________________________________\n");
     total=sum();
     printf("The sum of two number is %d",total );
    return 0;
}
int sum()
{
    int sum,a,b;
    printf("Enter the two numbers---\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    return sum;

}
