// program to check the number even or odd
   #include<stdio.h>
   void number(int);
   int main(int argc, char const *argv[])
   {
       int n;
       printf("Enter the number");
       scanf("%d",&n);
       number(n);
       
       return 0;
   }
   void number(int a)
   {
       if (a%2==0)
       {
           printf("The number is even");        
       }
       else{
           printf("The number is odd");
       }
       
   }
   
