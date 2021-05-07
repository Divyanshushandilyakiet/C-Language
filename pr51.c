#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[10], i, sum = 0;
    float ave;

    printf("Enter ten numbers for sum and average===>>>\n");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 9; i++)
    {
        sum=sum+a[i];

    }
      ave=sum/10.0;
    printf("The sum of ten numbers is %d/n",sum);
    printf("The average of the ten numbers is %f",ave);

    return 0;
}
