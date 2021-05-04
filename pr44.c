// find the area, perimeter and circumfrence
#include <stdio.h>
int main(int argc, char const *argv[])
{

    float a, b, c, area, per, cir;
    printf("Enter the lenth and breadth of rectangle and radius of the circle\n");
    scanf("%f%f%f", &a, &b, &c);
    printf("The length is %f\nThe breadth is %f\nand the circumfrence is %f", a, b, c);

    area = a * b;
    per = 2 * (a * b);
    cir = 2 * c * c;
    printf("\nThe area of the rectangle is %f\n", area);
    printf("The perimeter of the rectangle is %f\n", per);
    printf("The circumference is %f \n", cir);
    return 0;
}
