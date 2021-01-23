#include<stdio.h>
int main()
{
    int side,area;

    printf("\n Enter the Length of Side : ");
    scanf("%d",&side);

    area = side * side ;

    printf("\n Area of Square : %d",area);
    return 0;
}