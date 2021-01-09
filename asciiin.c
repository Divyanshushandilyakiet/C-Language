#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    
    int i;
    for(i=0;i<26;i++)
    {
        printf("%c=%d | %c=%d\n",'A'+i,'A'+i,'a'+i,'a'+i);
    }
    getch();
    return 0;
}
