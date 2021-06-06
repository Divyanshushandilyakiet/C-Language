// print all prime factors of a number
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i;
    printf("Enter a number= ");
    scanf("%d",&n);

for(i=2;i>1;i++)
    while(n%i==0){
        printf("%d ",i);
        n=n/i;
    }
    
    return 0;
}
