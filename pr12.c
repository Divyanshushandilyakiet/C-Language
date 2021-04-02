// program to check the alphabets is uppercase or lower case
#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    char ch;
    printf("Enter any alphabets ==>>");
    scanf("%c",&ch);

    printf("You entered(%c)\nThen we checked that..\nloading.....\n",ch);
    if (ch>='a'&&ch<='z')
    {
        printf("This alphabet is a lowercase alphabet\n");
    }
    else if (ch>='A'&&ch<='Z')
    {
        printf("This alphabet is a uppercase alphbet\n");
    }
    else{
        printf("This is not an alphabet");
    }
    
    return 0;
}
