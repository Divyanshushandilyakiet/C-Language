// program to print the sum of n natural numbers
#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int i, start, end, sum;
    printf("Enter the lower limit==>>");
    scanf("%d",&start);
    printf("Enter the upper limit==>>");
    scanf("%d",&end);

    for(i=start;i<=end;i++)
    {
        sum+=i;
    }
    printf("The sum of natural numbers %d to %d = %d",start,end,sum);
    return 0;
}
