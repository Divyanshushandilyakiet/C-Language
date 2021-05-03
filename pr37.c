#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10],i;
    printf("Input 10 elements in array:-\n");
    for(i=0;i<=9;i++)
    {
        printf("element-%d:",i);
        scanf("%d",&a[i]);
    }
    printf("Enter in arrary are:----");
    for(i=0;i<=10;i++)
    {
        printf("%d   ",a[i]);
    }
   
    return 0;
}
