#include<stdio.h>
#include<stdlib.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int division(int,int);
int main(int argc, char const *argv[])
{
    int n;
    int n1,n2;
    int x,z,add,d;
    while(1)
    {
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("5.exit\n");
    printf("enter choice from 1 to 4 what you want to done= ");
    scanf("%d",&n);
    switch(n)
    {
        case 1: 
         printf("enter two no = ");
         scanf("%d %d",&n1,&n2);
         add= sum(n1,n2);
         printf("%d\n",add);
         break;
        case 2:
         printf("enter two no= ");
         scanf("%d %d",&n1,&n2);
         x=sub(n1,n2);
         printf("%d\n",x);
         break;
        case 3:
         printf("enter two no= ");
         scanf("%d %d",&n1,&n2);
         z=mul(n1,n2); 
         printf("%d\n",z);
         break;
        case 4:
         printf("enter two no= ");
         scanf("%d %d",&n1,&n2);
         d=division(n1,n2);
         printf("%d\n",d);
         break;
         case 5: exit(0);
        default:printf("wrong entered");
    }
    }
    return 0;
}
        int sum(int n1,int n2)
{

            return(n1+n2);
          }
         int sub(int n1,int n2)
        {
            return(n1-n2);
        }
        int mul(int n1,int n2)
        {
         return(n1*n2);
}
   int division(int n1,int n2)
        {
            return(n1/n2);
         }
            
