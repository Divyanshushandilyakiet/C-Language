#include<stdio.h>
main()
{
int i,n;
float sum=0;
printf("Enter value of n\n");
scanf("%d",&n);


for(i=1;i<=n;i++)
{
 sum+=(float)1/i;
}
printf("The value of\n");
for(i=1;i<=n;i++)
{
 if(i<n)
 {
  printf("1/%d+ ",i);
 }
 else
 {
  printf("1/%d= ",i);
 }
}
printf("%f\n",sum);
}
