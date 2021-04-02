#include <stdio.h>
int main(int argc, char const *argv[])
{

    char ch;
    printf("Enter any character you want to check like vowel or consonent ---->>>> ");
    scanf("%c", &ch);
    printf("You enter (%c) \nThen we will check that:\n", ch);
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        printf("This is a vowel");
    }
    else if ((ch >= 'a' && ch <= 'z')|| (ch >= 'A' && ch <= 'Z'))
        {
            printf("This is a consonent");
        }
    else
    {
        printf("They are not match with alphabets");
    }

    return 0;
}
