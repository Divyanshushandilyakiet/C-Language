#include<stdio.h>
int main()
{
  int variable=10;
  int *pointer1;
  int **pointer2;
  pointer1=&variable;
  pointer2=&pointer1;

   printf("\nAddress of variable = %p ",&variable);
   printf("\nAddress of pointer1 = %p ",&pointer1);
   printf("\nAddress of pointer2 = %p ",&pointer2);
    
  printf("\nValue hold by pointer1 = %p\n",pointer1);
  printf("Value hold by pointer2 = %p\n",pointer2);
  printf("Value hold by variable = %d\n",variable);
     
  printf("\nValue of variable accessed using double pointer = %d",*(*pointer2));
  return 0;
}
