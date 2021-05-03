#include<stdio.h>
int swap(int *, int *);
int main(int argc, char const *argv[])
{
    int n1 ,n2;
    printf("PROgram swapping two numbers\n");
    printf("Enter the number 1\n");
    scanf("%d",&n1);
    printf("Enter the number 2\n");
    scanf("%d",&n2);

    printf("before swapping: n1=%d, n2=%d\n",n1,n2);
    swap(&n1,&n2);
    printf("After the swapping: n1=%d,n2=%d\n",n1,n2);
    return 0;
}
int swap(int *p, int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
