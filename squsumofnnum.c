// sum of square of N numbers
#include<stdio.h>
void sum (void);
int main(int argc, char const *argv[])
{
    sum();
}
void sum (void)
{
    int N,sum=0,i;
    printf("Enter a natural number= ");
    scanf("%d",&N);

    for ( i = 1; i <=N; i++)
    {
       sum=sum+i*i;
    }
     printf("\nThe sum of square of N natural numbers==> %d",sum);    
}
