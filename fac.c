#include<stdio.h>
int findlcm(int a,int b);
int main(int argc, char const *argv[])
{
    int n1,n2,lcm;
    printf("enter first no");
    scanf("%d",&n1);
    printf("enter 2nd no");
    scanf("%d",&n2);
    if(n1>n2)
    lcm=findlcm(n2,n1);
    else
    lcm=findlcm(n1,n2);
    printf("lcm of %d and %d =%d",n1,n2,lcm);
    return 0;
}
int findlcm(int a,int b)
{
    static int m=0;
    m=m+b;
    if((m%a==0)&&(m%b==0))
    {
        return m;
    }
    else
    {
        findlcm(a,b);
    }
    
}
