// distance between two cities 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a, b, c, d, e;
    printf("Enter the distance between two citie (in km)===>>>");
    scanf("%f", &a);
    b = a * 1000;
    c = a * 3280.8;
    d = a * 39370;
    e = a / 0.000010000;

    printf("distance between two cities (In meter)=%f\n", b);
    printf("distance between two cities (In feet)=%f\n", c);
    printf("distance between two cities (In inch)=%f\n", d);
    printf("distance between two cities (In cm)=%f\n", e);
    return 0;
}
