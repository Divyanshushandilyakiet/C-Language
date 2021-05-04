// total and percentage
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a, b, c, d, e, sum, per;
    printf("Enter marks of five subjects===>>\n");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    sum = a + b + c + d + e;
    per = (sum / 500) * 100;

    if (sum <= 500)
    {
        printf("The total sum is %f\n", sum);
        printf("The percentage is %f\n", per);
    }
    else
    {
        printf("Invalid");
    }

    return 0;
}
