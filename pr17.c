// progrmam to find the greater number 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int num1 , num2;
    printf("Enter two numbers to find the greater one ===>>>");
    scanf("%d%d",&num1,&num2);

    switch(num1>num2)
    {
        case 0:
        printf("%d is greater",num2);
        break;

        case 1:
        printf("%d is greater",num1);
        break;
    }
    return 0;
}
