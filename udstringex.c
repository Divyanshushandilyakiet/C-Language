#include<stdio.h>
int userstrlen(char*);
int main()
{
    char data[]="this is our string";
    int len;
    len=userstrlen(data);
    printf("Length of string is =%d",len);
    return 0;
}
int userstrlen(char *str)
{
    int length=0;
    while(*str!='\0')
    {
        length++;
        str++;
    }
    return length;
}