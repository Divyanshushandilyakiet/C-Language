// total program based on the pointer
#include <stdio.h>
void input(int *p)
{
    int i;
    for (i = 0; i <= 4; i++)
    {
   
        scanf("%d", p + i);
    }
}
void display(int *p)
{
    int i;
    for (i = 0; i <= 4; i++)
    {
        printf("%d", *(p + i));
    }
}
void sort(int *p)
{
    int ro, t, i;
    for (ro = 1; ro <= 4; ro++)
    {
        if (*(p + i) > *(p + i + 1))
        {
            t = *(p + i);
            *(p + i) = *(p + i + 1);
            *(p + i + 1) = t;
        }
    }
}

int main(int argc, char const *argv[])
{
    int a[5];
    input(a);
    display(a);
    sort(a);
    display(a);
    return 0;
}
