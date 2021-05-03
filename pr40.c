// Ramesh's gross salary
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a,b,c,d;
    printf("Enter the basic salary of ramesh\n");
    scanf("%f",&a);
    b=(40*a)/100;
    c=(20*a)/100;
    d=a-(b+c);
    printf("Ramesh's gross salary is %f ",d);
    
}
