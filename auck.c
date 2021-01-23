#include<stdio.h>
int ack(int m,int n);
int main(int argc, char const *argv[])
{
    int m,n,f;
    printf("enter two numbers");
    scanf("%d%d",&m,&n);
    f=ack(m,n);
    printf("\nackermann no=%d",f);
    return 0;
}
int ack(int m,int n){
if(m==0)
    return n+1;
    else if(n==0)
    return ack(m-1,1);
    else
    return ack(m-1,ack(m,n-1));
    }