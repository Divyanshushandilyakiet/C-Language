#include<stdio.h>
int main(int argc, char const *argv[])
{
    int data[2][3]={
                      {23,34,45},
                      {84,26,28}
    };
    printf("Value in 2D array are=\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf(" %d",data[i][j]);
        }
        printf("\n");
    }
    return 0;
}
