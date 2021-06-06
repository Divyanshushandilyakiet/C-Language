// Print n natrual numbers
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i;
    printf("Enter a natural number-->");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    return 0;
}
