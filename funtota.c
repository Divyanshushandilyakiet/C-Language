#include<stdio.h>
int sum (int , int);// function declaration
int main (void)
{
    int total;
    printf("\n\n Function: A simple structure of function: \n");
    printf("----------------------------------------------\n");
    total = sum (5,6); // function cell
    printf("The total is: %d\n",total);
    return 0;
}
 int sum (int a , int b )//function define 
 {
     int s;
     s=a+b;
     return s;// function returning a value
 }
 
