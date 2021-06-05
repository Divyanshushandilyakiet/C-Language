// calclate the area of the circle
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r; 
    float ar;
    printf("Enter the radius of the cicle is ");
    scanf("%d", &r);

    ar = 3.14 * r * r;
    printf("Area of the circle is %.2f", ar);

    return 0;
}
