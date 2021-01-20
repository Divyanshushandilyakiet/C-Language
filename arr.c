#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int *arrayp[5];
    int num1 =10;
    int num2 =20;
    int num3 =50;
    int num4 =60;
    int num5 =90;
    arrayp[0]=&num1;
    arrayp[1]=&num2;
    arrayp[2]=&num3;
    arrayp[3]=&num4;
    arrayp[4]=&num5;
    for (inti=0;i<5;i++)
    {
        printf("\nValue of pointer array= %d ", *arrayp[i]);
    }
    
    return 0;
}
