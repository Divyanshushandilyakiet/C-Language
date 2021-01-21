#include<stdio.h>
int main(int argc, char const *argv[])
{
 int s1,s2,s3,s4;
 int sum,avg;
 printf("enter 4 subject marks is =");
 scanf("%d %d %d %d",&s1,&s2,&s3,&s4);
 sum=s1+s2+s3+s4;
 avg=sum/4;
 if(avg>40)
 {
 printf("student pass");
 }
 else
 {
 printf("student fail");
 }
 return 0;
}