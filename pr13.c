// program to check the profit or loss....
#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int cp,sp,amt;
    printf("Enter the C.P.==>>");
    scanf("%d",&cp);
    printf("Enter the S.P.==>>");
    scanf("%d",&sp);
    
    if(sp>cp)
    {
        amt=sp-cp;
        printf("Profit is %d",amt);
    }
    else if(cp>sp)
    {
        amt=cp-sp;
        printf("loss is %d",amt);
    }

    return 0;
}
