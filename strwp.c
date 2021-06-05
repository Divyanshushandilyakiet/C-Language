// calculate the lenght of the string without predefined fuction
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char s[20];
    int i;
    printf("Enter a string=>");
    gets(s);
    for(i=0;s[i]!='\0';i++);
    printf("\nThe length of the string = %d",i);

    return 0;
}
