// sum of n numbers 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,s=0;
    printf("Enter a number ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("The sum of is %d",s);
    return 0;
}
