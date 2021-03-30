/*program to check the even and odd number*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int i;
    printf("Enter the number\n");
    scanf("%d",&i);
    if(i%2==0)
    {
        printf("The number %d is even",i);
    }
    else{
        printf("The number %d is odd",i);
    }
    printf("\n");
    return 0;
}
