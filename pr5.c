// program to make a odd number series 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    printf("Enter the odd numbers\n");
    scanf("%d",&n);
    printf("The series of number is: \n");
    for(i=0;i<=n;i++)
{
    if(i%2==1)
    {
        
        printf("%d\n",i);
    }
    else
    {
        continue;
    }
    printf("\n");
}
    return 0;
}
