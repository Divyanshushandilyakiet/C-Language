// print fibonacci series 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int N,i,a=-1,b=1,c;
    printf("Enter n term==>");
    scanf("%d",&N);

    for ( i = 1; i <=N; i++)
    {
        c=a+b;
       printf("%d ",c);
       a=b;
       b=c;
    }
    
    return 0;
}
