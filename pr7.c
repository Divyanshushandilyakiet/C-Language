// program to print large number 
#include <stdio.h>
int main(int argc, char const *argv[])
{

    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

   if (num1>num2)
   {
       printf("%d is large number",num1);
   }
   else if (num2>num1)
   {
       printf("%d is large number",num2);
   }
   else
   {
       printf("They are equal to each other");
   }
   
   
    return 0;
}
