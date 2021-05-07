#include <stdio.h>
int isarmstrong(int num);
void printarmstrong(int start, int end);
int main(int argc, char const *argv[])
{
    int start, end;
    printf("Enter the lower limit to print armstrong numbers : ");
    scanf("%d", &start);
    printf("Enter the upper limit to print armstrong number :  ");
    scanf("%d", &end);

    printf("All the armstrong number between %d to %d are: \n", start, end);
    printarmstrong(start, end);
    return 0;
}
int isarmstrong(int num)
{
    int temp, lastdigit, sum;
    temp = num;
    sum = 0;
    while (temp != 0)
    {
        lastdigit = temp % 10;
        sum += lastdigit * lastdigit * lastdigit;
        temp = temp / 10;
    }
    if (sum == num)
    {
        return 1;
    }
    else
        return 0;
}
void printarmstrong(int start, int end)
{
    while (start <= end)
    {
        if (isarmstrong(start))
        {
            printf("%d, ", start);
        }
        start++;
    }
}