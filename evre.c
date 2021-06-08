// print N even numbers in reverse order
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int N,i;
    printf("Enter a natural number-->>");
    scanf("%d",&N);
    for(i=N;i>=0;i--)
    {
        printf("%d ",2*i);
    }
    return 0;
}
