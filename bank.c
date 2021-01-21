#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int n,i;
    int sum=0;
    int a,b;
    while(1)
    {
    printf("***bank account***\n");
    printf("1.deposit\n");
    printf("2.withdraw\n");
    printf("3.check balance\n");
    printf("4.exit\n");
    printf("enter your choice form 1 to 4\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("enter amount you want to deposit\n");
        scanf("%d",&a);
        sum=sum+a;
        printf("now balance=%d\n",sum);
        break;
        case 2:
        printf("enter amount you want to withdraw\n");
        scanf("%d",&b);
        if(sum==0)
        {
            printf("no balance\n");
        }
        else
        {
   sum=sum-b;
        printf("now balance =%d\n",sum);
        }
        break;
        case 3: printf("current balance is=%d\n",sum);
        case 4: exit(0);
        default:printf("wrong entered\n");
        }
    }
    return 0;
}
