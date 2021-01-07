#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[5],i;
    int sum=0;
    printf("Enter the array ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("sum of array =%d",sum);
    return 0;
}

