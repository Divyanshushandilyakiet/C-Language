#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
     int data[]={12,34,56,78,90,17,34,13,45,67};
    int value,position,i;
    int x;
    int len=10;
    printf("Enter value to insert");
    scanf("%d",&value);
    printf("Enter position to insert value");
    scanf("%d",&position);
    printf("\nPresent values in array\n");
    for(i=0;i<len;i++)
    {
        printf(" %d ",data[i]);
    }
    if(position>len)
    {
        printf("\nInsertion not possible");
        exit(0);
    }
    else{
    for(x=9;x>=position-1;x--) 
    {
          data[x]=data[x-1];
    }
    }
    data[position-1]=value;
    printf("\nArray after insertion is\n");
    for(i=0;i<len;i++)
    {
        printf(" %d ",data[i]);
    }
    return 0;
}
