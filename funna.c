#include<stdio.h>
void name(char a[]);
int main(int argc, char const *argv[])
{
    char a[]="Divyanshu";
    name(a);
    return 0;
}
void name(char a[])
{
    printf("welcome to c function %s",a);
}
