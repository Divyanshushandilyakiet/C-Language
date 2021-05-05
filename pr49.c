// program to find the diamenter ,circumference ,area of the circle
#include <stdio.h>
#include <math.h>
double getdiameter(double radius);
double getcircumference(double radius);
double getarea(double radius);

int main(int argc, char const *argv[])
{
    float radius, dia, cir, area;
    printf("Enter the radius of the circle : \n");
    scanf("%f", &radius);

    dia = getdiameter(radius);
    cir = getcircumference(radius);
    area = getarea(radius);

    printf("The diameter of the circle is %.2f\n", dia);
    printf("The circumference of the circle is %.2f\n", cir);
    printf("The area of the circle is %.2f\n", area);

    return 0;
}
double getdiameter(double radius)
{
    return (2 * radius);
}

double getcircumference(double radius)
{
    return (2 * M_PI * radius);
}

double getarea(double radius)
{
    return (M_PI * radius * radius);
}