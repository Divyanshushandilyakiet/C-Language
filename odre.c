// Print N odd natural numbers
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int N,i;
    printf("Enter a natural number-->");
    scanf("%d",&N);

    for(i=N;i>=1;i--)
    {
        printf("%d ",2*i-1);
    }
    return 0;
}
