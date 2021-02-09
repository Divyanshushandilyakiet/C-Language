#include<stdio.h>
#include<stdlib.h>
   int main(int argc, char const *argv[])
{
  int a[5][5],b[5][5],sum[5][5],i,j,r1,c1,r2,c2,k;
     printf("enter the no of rows and columns of first matrix");
    scanf("%d %d",&r1,&c1); 
    printf("\nenter the no of rows and columns of second  matrix");
    scanf("%d %d",&r2,&c2);
    if(r1!=r2||c1!=c2)
    {
        printf("\nthe matrix order not same\n");
        exit(0);
    }
    printf("enter %d elements of first matrix",r1*c1);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter %d elements of second matrix",r2*c2);
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     printf("\nfirst matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
     printf("second matrix\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
    printf("\n the addition of two matrix=\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<r2;j++)
        {
            
           sum[i][j]=a[i][j]+b[i][j];
            printf("%4d",sum[i][j]);
        }
        printf("\n");
    }
  return 0;
}
