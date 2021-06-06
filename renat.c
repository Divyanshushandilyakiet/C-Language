// .print n natural numbers in reverse form
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n, i;
    printf("Enter a natrual number-->");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("%d ",n+1-i);
    }
    return 0;
}
