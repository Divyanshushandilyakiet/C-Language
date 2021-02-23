#include<stdio.h>
void pointer( char**);
int main()
{
   char *string[]={"DIVYANSHU","IS","A","GOOD","BOY"};
    pointer(string);
  return 0;
}
void pointer(char **ptr)
{
  char *ptr1;
 ptr1= (ptr+=sizeof(char))[+2];       printf("%s",ptr1);
 ptr1= (ptr= ptr-1+sizeof(float))[+0];printf(" %s ",ptr1);
 ptr1= (ptr+=sizeof(int))[-8];      printf("%s ",ptr1);
}
