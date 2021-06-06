// print N odd natural number in reverse number
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i;
    printf("Enter a number -->");
    scanf("%d",&n);

    for(i=n;i>=0;i--)
    {
        printf("%d ",i*2+1);
    }
    return 0;
}
