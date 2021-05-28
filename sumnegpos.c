// sum of negative and positive interger 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,size,pos=0,neg=0;
    float ave;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int array[size];
    printf("Enter number to find sum of positive and negative numbers\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<size;i++)
    {
       if(array[i]>0)
       pos=pos+array[i];
       if(array[i<0])
       neg=neg+array[i];
    }
    printf("The sum of the positive integers is %d\n",pos);
    printf("The sum of the negative integers is %d",neg);
    return 0;
}
