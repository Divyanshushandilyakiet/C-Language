#include<stdio.h>
int main(int argc, char const *argv[])
{
    char operator;
    float n1,n2;
    printf("enter an operator which u want to perform = ");
    scanf("%c",&operator);
    printf("enter two operands \n");
    scanf("%f%f",&n1,&n2);
    switch(operator)
    {
       
        case '+': printf("%.1f + %.1f = %.1f",n1,n2,n1+n2);break;
        case '-': printf("%.1f - %.1f = %.1f",n1,n2,n1-n2); break;
        case '*': printf("%.1f * %.1f = %.1f",n1,n2,n1*n2); break;
        case '/': printf("%.1f / %.1f = %.1f",n1,n2,n1/n2); break;
        default: printf("\nerror! operator does not match");
    }
    return 0;
}
