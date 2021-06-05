// calculate the length of the string 
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char s[20];
    int i;
    printf("Enter a string= ");
    gets(s);

    i=strlen(s);
    printf("\nThe length of the string is %d",i);

    return 0;
}
