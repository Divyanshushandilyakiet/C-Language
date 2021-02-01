#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int choice,a,b,s;
    while (1)
    {
    printf("\n1.Addition");
    printf("\n2.Odd-even");
    printf("\n3.Print N Natural numbers");
    printf("\n4.Exit");

        printf("\nEnter your choice= ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: 
        printf("Enter two numbers= ");
        scanf("%d%d",&a,&b);
        s=a+b;
        printf("\nsum is %d",s);
        break;

        case 2:
                 printf("\nEnter the number= ");
                 scanf("%d",&a);
                 if (a%2==0)
                 {
                    printf("Number is even");
                 }
                 else{
                     printf("Number is odd");
                 }
                break;
        case 3: 
                printf("Enter the number= ");
                scanf("%d",&a);
                for (b=1;b<=a;b++)
                {
                 printf("%d",b);
                }
                break;

        case 4:
                exit(0);
        default:printf("Invaild number");
            break;
        }
         }
    return 0;
}
