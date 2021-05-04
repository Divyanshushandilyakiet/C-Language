// convert temperature fahrenhiet
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a, b;
    printf("Enter the temp. of the city in fahrenhiet====>>> ");
    scanf("%f", &a);

    b = (5 * (a - 32)) / 9;

    printf("temperaturre of the city in celcius is %f", b);
    return 0;
}
