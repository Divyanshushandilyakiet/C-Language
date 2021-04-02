// check weather A chracter is alphbet or not 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter any chracter\n");
    scanf("%c",&ch);

    printf("You entered (%c) then I checked that\n",ch);

    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("yes this is an ALPHABET\n");
    }
    else
    {
        printf("This is not ALPHABETS");
    }
    return 0;
}
 