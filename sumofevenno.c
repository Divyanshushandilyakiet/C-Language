// program to calculate sum of n evenn numbers
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int N,s=0,i;
    printf("Enter a number ");
    scanf("%d",&N);
 

 for(i=2;i<=N;i=i+2)
 {
     s+=i;
 }
 printf("The sum of 2 to %d is %d",N,s);

    return 0;
}
