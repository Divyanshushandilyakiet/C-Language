#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[3][3],i,j;
    printf("enter 3*3 elemets in array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("  %d  ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
