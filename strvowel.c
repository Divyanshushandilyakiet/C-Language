#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    char c;
    printf("Enter a charcter to know it is vowel or not\n");
    scanf("%c",&c);
    if(c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='o'||c=='O'||c=='U'||c=='u')
    printf("The character %c is vowel\n",c);
    else
    printf("The character %c is not vowel\n",c);
    return 0;
}
