#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int i=0;
    int j=0;
    int y=0;
    char ch ='*';
    for(i=1;i<=10;i++)
      {
          for(y=1;y<=(10-i);y++)
          printf(" ");
          for(j=1;j<i;j++)
          {
              printf(" %c ", ch);
          }
          printf("\n");
      }
    return 0;
}
