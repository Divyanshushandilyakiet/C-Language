#include<stdio.h>
int main(int argc, char const *argv[])
{
    int data[] = {55,65,76,56,86,23};
    int value, position=-1;
    printf("Enter your value to ba searched=>");
    scanf("%d",&value);
    for(int i=0;i<10;i++)
    {
        if(data[i]==value)
        {
            position=i+1;
        }
    }
    if(position>-1)
    {
        printf("\nValue found at position=%d",position);
    }
    else{
        printf("Value not found");

    }
    return 0;
}
