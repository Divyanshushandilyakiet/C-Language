// program to print reverse natural numbers
#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    int i,start,end;
    printf("Enter the starting value==>>");
    scanf("%d",&start);
    printf("ENter the ending value==>>");
    scanf("%d",&end);

    for(i=start;i>=end;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
