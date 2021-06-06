// Print even numbers 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int N,i;
    printf("Enter a natural number-->");
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
        printf("%d ",2*i);
    }
    return 0;
}
